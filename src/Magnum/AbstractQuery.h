#ifndef Magnum_AbstractQuery_h
#define Magnum_AbstractQuery_h
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
 * @brief Class @ref Magnum::AbstractQuery
 */

#include <Corrade/Containers/Array.h>
#include <Corrade/Utility/Assert.h>

#include "Magnum/AbstractObject.h"
#include "Magnum/configure.h"

namespace Magnum {

/**
@brief Base class for queries

See @ref PrimitiveQuery, @ref SampleQuery and @ref TimeQuery documentation for
more information.
@todo `QUERY_COUNTER_BITS` (not sure since when this is supported)
*/
class MAGNUM_EXPORT AbstractQuery: public AbstractObject {
    public:
        /** @brief Copying is not allowed */
        AbstractQuery(const AbstractQuery&) = delete;

        /** @brief Move constructor */
        AbstractQuery(AbstractQuery&& other) noexcept;

        /** @brief Copying is not allowed */
        AbstractQuery& operator=(const AbstractQuery&) = delete;

        /** @brief Move assignment */
        AbstractQuery& operator=(AbstractQuery&& other) noexcept;

        /** @brief OpenGL query ID */
        GLuint id() const { return _id; }

        /**
         * @brief %Query label
         *
         * The result is *not* cached, repeated queries will result in repeated
         * OpenGL calls. If OpenGL 4.3 is not supported and neither
         * @extension{KHR,debug} nor @extension2{EXT,debug_label} desktop or ES
         * extension is available, this function returns empty string.
         * @see @fn_gl{GetObjectLabel} with @def_gl{QUERY} or
         *      @fn_gl_extension2{GetObjectLabel,EXT,debug_label} with
         *      @def_gl{QUERY_OBJECT_EXT}
         */
        std::string label() const;

        /**
         * @brief Set query label
         * @return Reference to self (for method chaining)
         *
         * Default is empty string. If OpenGL 4.3 is not supported and neither
         * @extension{KHR,debug} nor @extension2{EXT,debug_label} desktop or ES
         * extension is available, this function does nothing.
         * @see @ref maxLabelLength(), @fn_gl{ObjectLabel} with
         *      @def_gl{QUERY} or @fn_gl_extension2{LabelObject,EXT,debug_label}
         *      with @def_gl{QUERY_OBJECT_EXT}
         */
        AbstractQuery& setLabel(const std::string& label) {
            return setLabelInternal({label.data(), label.size()});
        }

        /** @overload */
        template<std::size_t size> AbstractQuery& setLabel(const char(&label)[size]) {
            return setLabelInternal(label);
        }

        /**
         * @brief Whether the result is available
         *
         * @see @fn_gl{GetQueryObject} with @def_gl{QUERY_RESULT_AVAILABLE}
         */
        bool resultAvailable();

        /**
         * @brief Result
         * @tparam T Result type. Can be either `bool`, @ref UnsignedInt,
         *      @ref Int, @ref UnsignedLong or @ref Long.
         *
         * Note that this function is blocking until the result is available.
         * See resultAvailable().
         * @attention @ref Magnum::UnsignedLong "UnsignedLong" and @ref Magnum::Long "Long"
         *      result type is not available in @ref MAGNUM_TARGET_WEBGL "WebGL".
         * @see @fn_gl{GetQueryObject} with @def_gl{QUERY_RESULT}
         * @requires_gl33 %Extension @extension{ARB,timer_query} for result
         *      type @ref Magnum::UnsignedInt "UnsignedInt" and @ref Magnum::Long
         *      "Long"
         * @requires_es_extension %Extension @es_extension{EXT,disjoint_timer_query}
         *      for result types @ref Magnum::Int "Int", @ref Magnum::UnsignedLong "UnsignedLong"
         *      @ref Magnum::Long "Long".
         */
        template<class T> T result();

        /**
         * @brief End query
         *
         * The result can be then retrieved by calling @ref result().
         * @see @fn_gl{EndQuery}
         */
        void end();

    protected:
        /**
         * @brief Constructor
         *
         * Generates one OpenGL query.
         * @see @fn_gl{GenQueries}
         */
        explicit AbstractQuery();

        /**
         * @brief Destructor
         *
         * Deletes assigned OpenGL query.
         * @see @fn_gl{DeleteQueries}
         */
        ~AbstractQuery();

    #ifdef DOXYGEN_GENERATING_OUTPUT
    private:
    #endif
        void begin(GLenum target);

    private:
        AbstractQuery& setLabelInternal(Containers::ArrayReference<const char> label);

        GLuint _id;
        GLenum _target;
};

#ifndef DOXYGEN_GENERATING_OUTPUT
template<> bool MAGNUM_EXPORT AbstractQuery::result<bool>();
template<> UnsignedInt MAGNUM_EXPORT AbstractQuery::result<UnsignedInt>();
template<> Int MAGNUM_EXPORT AbstractQuery::result<Int>();
#ifndef MAGNUM_TARGET_WEBGL
template<> UnsignedLong MAGNUM_EXPORT AbstractQuery::result<UnsignedLong>();
template<> Long MAGNUM_EXPORT AbstractQuery::result<Long>();
#endif
#endif

inline AbstractQuery::AbstractQuery(AbstractQuery&& other) noexcept: _id(other._id), _target(other._target) {
    other._id = 0;
}

inline AbstractQuery& AbstractQuery::operator=(AbstractQuery&& other) noexcept {
    std::swap(_id, other._id);
    std::swap(_target, other._target);
    return *this;
}

}

#endif
