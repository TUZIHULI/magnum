#ifndef Magnum_TimeQuery_h
#define Magnum_TimeQuery_h
/*
    This file is part of Magnum.

    Copyright © 2010, 2011, 2012, 2013, 2014
              Vladimír Vondruš <mosra@centrum.cz>

    Permission is hereby granted, free of charge, to any person obtaining a
    copy of this software and associated documentation files (the "Software"),
    to deal in the Software without restriction, including without limitation
    the rights to use, copy, modify, merge, publish, distribute, sublicense,
    and/or sell copies of the Software, and to permit persons to whom the
    Software is furnished to do so, subject to the following conditions:

    The above copyright notice and this permission notice shall be included
    in all copies or substantial portions of the Software.

    THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
    IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
    FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
    THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
    LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
    FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
    DEALINGS IN THE SOFTWARE.
*/

/** @file
 * @brief Class @ref Magnum::TimeQuery
 */

#include "Magnum/AbstractQuery.h"

namespace Magnum {

/**
@brief Query for elapsed time

Queries timestamp after all previous OpenGL calls have been processed. It can
query either duration of sequence of commands or absolute timestamp. Example
usage of both methods:
@code
TimeQuery q1, q2;
q1.begin(TimeQuery::Target::TimeElapsed);
// rendering...
q1.end();
q2.begin(TimeQuery::Target::TimeElapsed);
// another rendering...
q2.end();
UnsignedInt timeElapsed1 = q1.result<UnsignedInt>();
UnsignedInt timeElapsed2 = q2.result<UnsignedInt>();
@endcode
@code
TimeQuery q1, q2, q3;
q1.timestamp();
// rendering...
q2.timestamp();
// another rendering...
q3.timestamp();
UnsignedInt tmp = q2.result<UnsignedInt>();
UnsignedInt timeElapsed1 = tmp-q1.result<UnsignedInt>();
UnsignedInt timeElapsed2 = q3.result<UnsignedInt>()-tmp;
@endcode
Using the latter results in fewer OpenGL calls when doing more measures.
@requires_gl33 %Extension @extension{ARB,timer_query}
@requires_es_extension %Extension @es_extension{EXT,disjoint_timer_query}

@see @ref PrimitiveQuery, @ref SampleQuery
@todo timestamp with glGet + example usage
@todo @es_extension{EXT,disjoint_timer_query} -- GL_GPU_DISJOINT_EXT support? where?
*/
class TimeQuery: public AbstractQuery {
    public:
        /** @brief Query target */
        enum class Target: GLenum {
            /** Elapsed time */
            #ifndef MAGNUM_TARGET_GLES
            TimeElapsed = GL_TIME_ELAPSED
            #else
            TimeElapsed = GL_TIME_ELAPSED_EXT
            #endif
        };

        explicit TimeQuery() {}

        /**
         * @brief Query timestamp
         *
         * @see @fn_gl{QueryCounter} with @def_gl{TIMESTAMP}
         */
        void timestamp() {
            #ifndef MAGNUM_TARGET_GLES
            glQueryCounter(id(), GL_TIMESTAMP);
            #elif !defined(CORRADE_TARGET_EMSCRIPTEN) && !defined(CORRADE_TARGET_NACL)
            glQueryCounterEXT(id(), GL_TIMESTAMP_EXT);
            #else
            CORRADE_ASSERT_UNREACHABLE();
            #endif
        }

        /** @copydoc PrimitiveQuery::begin() */
        void begin(Target target) {
            AbstractQuery::begin(GLenum(target));
        }

        /* Overloads to remove WTF-factor from method chaining order */
        #ifndef DOXYGEN_GENERATING_OUTPUT
        TimeQuery& setLabel(const std::string& label) {
            AbstractQuery::setLabel(label);
            return *this;
        }
        template<std::size_t size> TimeQuery& setLabel(const char(&label)[size]) {
            AbstractQuery::setLabel<size>(label);
            return *this;
        }
        #endif
};

}

#endif
