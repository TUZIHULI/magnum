#ifndef Magnum_SampleQuery_h
#define Magnum_SampleQuery_h
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
 * @brief Class @ref Magnum::SampleQuery
 */

#include "Magnum/AbstractQuery.h"

namespace Magnum {

/**
@brief Query for samples

Queries count of samples passed from fragment shader or boolean value
indicating whether any samples passed. Can be used for example for conditional
rendering:
@code
SampleQuery q;

q.begin(SampleQuery::Target::AnySamplesPassed);
// render simplified object to test whether it is visible at all...
q.end();

// render full version of the object only if it is visible
if(q.result<bool>()) {
    // ...
}
@endcode
This approach has some drawbacks, as the rendering is blocked until result is
available for the CPU to decide. This can be improved by using conditional
rendering on GPU itself. The drawing commands will be sent to the GPU and
processed or discarded later, so CPU can continue executing the code without
waiting for the result.
@code
SampleQuery q;

q.begin(SampleQuery::Target::AnySamplesPassed);
// render simplified object to test whether it is visible at all...
q.end();

q.beginConditionalRender(SampleQuery::ConditionalRenderMode::Wait);
// render full version of the object only if the query returns nonzero result
q.endConditionalRender();
@endcode

@see @ref PrimitiveQuery, @ref TimeQuery
@requires_gles30 %Extension @es_extension{EXT,occlusion_query_boolean} in
    OpenGL ES 2.0
*/
class SampleQuery: public AbstractQuery {
    public:
        /** @brief Query target */
        enum class Target: GLenum {
            #ifndef MAGNUM_TARGET_GLES
            /**
             * Count of samples passed from fragment shader
             * @requires_gl Only boolean query is available in OpenGL ES.
             */
            SamplesPassed = GL_SAMPLES_PASSED,
            #endif

            /**
             * Whether any samples passed from fragment shader
             * @requires_gl33 %Extension @extension{ARB,occlusion_query2}
             */
            #ifndef MAGNUM_TARGET_GLES2
            AnySamplesPassed = GL_ANY_SAMPLES_PASSED,
            #else
            AnySamplesPassed = GL_ANY_SAMPLES_PASSED_EXT,
            #endif

            /**
             * Whether any samples passed from fragment shader (conservative)
             *
             * An implementation may choose a less precise version of the
             * test at the expense of some false positives.
             * @requires_gl43 %Extension @extension{ARB,ES3_compatibility}
             */
            #ifndef MAGNUM_TARGET_GLES2
            AnySamplesPassedConservative = GL_ANY_SAMPLES_PASSED_CONSERVATIVE
            #else
            AnySamplesPassedConservative = GL_ANY_SAMPLES_PASSED_CONSERVATIVE_EXT
            #endif
        };

        #ifndef MAGNUM_TARGET_GLES
        /**
         * @brief Conditional render mode
         *
         * @requires_gl30 %Extension @extension{NV,conditional_render}
         * @requires_gl Conditional rendering is not available in OpenGL ES.
         */
        enum class ConditionalRenderMode: GLenum {
            /**
             * If query result is not yet available, waits for it and then
             * begins rendering only if result is nonzero.
             */
            Wait = GL_QUERY_WAIT,

            /**
             * If query result is not yet available, waits for it and then
             * begins rendering only if result is zero.
             * @requires_gl45 %Extension @extension{ARB,conditional_render_inverted}
             */
            WaitInverted = GL_QUERY_WAIT_INVERTED,

            /**
             * If query result is not yet available, begins rendering like if
             * the result was nonzero.
             */
            NoWait = GL_QUERY_NO_WAIT,

            /**
             * If query result is not yet available, begins rendering like if
             * the result was zero.
             * @requires_gl45 %Extension @extension{ARB,conditional_render_inverted}
             */
            NoWaitInverted = GL_QUERY_NO_WAIT_INVERTED,

            /**
             * The same as @ref ConditionalRenderMode::Wait, but regions
             * untouched by the sample query may not be rendered at all.
             */
            ByRegionWait = GL_QUERY_BY_REGION_WAIT,

            /**
             * The same as @ref ConditionalRenderMode::WaitInverted, but
             * regions untouched by the sample query may not be rendered at
             * all.
             * @requires_gl45 %Extension @extension{ARB,conditional_render_inverted}
             */
            ByRegionWaitInverted = GL_QUERY_BY_REGION_WAIT_INVERTED,

            /**
             * The same as @ref ConditionalRenderMode::NoWait, but regions
             * untouched by the sample query may not be rendered at all.
             */
            ByRegionNoWait = GL_QUERY_BY_REGION_NO_WAIT,

            /**
             * The same as @ref ConditionalRenderMode::NoWaitInverted, but
             * regions untouched by the sample query may not be rendered at
             * all.
             * @requires_gl45 %Extension @extension{ARB,conditional_render_inverted}
             */
            ByRegionNoWaitInverted = GL_QUERY_BY_REGION_NO_WAIT_INVERTED
        };
        #endif

        explicit SampleQuery() {}

        /** @copydoc PrimitiveQuery::begin() */
        void begin(Target target) {
            AbstractQuery::begin(GLenum(target));
        }

        #ifndef MAGNUM_TARGET_GLES
        /**
         * @brief Begin conditional rendering based on result value
         *
         * @see @fn_gl{BeginConditionalRender}
         * @requires_gl30 %Extension @extension{NV,conditional_render}
         * @requires_gl Conditional rendering is not available in OpenGL ES.
         */
        void beginConditionalRender(ConditionalRenderMode mode) {
            glBeginConditionalRender(id(), GLenum(mode));
        }

        /**
         * @brief End conditional render
         *
         * @see @fn_gl{EndConditionalRender}
         * @requires_gl30 %Extension @extension{NV,conditional_render}
         * @requires_gl Conditional rendering is not available in OpenGL ES.
         */
        void endConditionalRender() {
            glEndConditionalRender();
        }
        #endif

        /* Overloads to remove WTF-factor from method chaining order */
        #ifndef DOXYGEN_GENERATING_OUTPUT
        SampleQuery& setLabel(const std::string& label) {
            AbstractQuery::setLabel(label);
            return *this;
        }
        template<std::size_t size> SampleQuery& setLabel(const char(&label)[size]) {
            AbstractQuery::setLabel<size>(label);
            return *this;
        }
        #endif
};

}

#endif
