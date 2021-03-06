#ifndef _flextgl_h_
#define _flextgl_h_

/* Defensive include guards */

#if defined(__gl2_h_)
#error Attempt to include auto-generated header after including gl2.h
#endif
#if defined(__gl2platform_h_)
#error Attempt to include auto-generated header after including gl2platform.h
#endif

#define __gl2_h_
#define __gl2platform_h_

#ifdef __cplusplus
extern "C" {
#endif

void flextGLInit();

/* Function declaration macros */
#define FLEXTGL_EXPORT __attribute__ ((visibility ("default")))

#define APIENTRY
#ifndef GL_APICALL
#define GL_APICALL  KHRONOS_APICALL
#endif
#ifndef GL_APIENTRY
#define GL_APIENTRY KHRONOS_APIENTRY
#endif

/* Data types */

#include <KHR/khrplatform.h>
typedef unsigned int GLenum;
typedef unsigned char GLboolean;
typedef unsigned int GLbitfield;
typedef void GLvoid;
typedef short GLshort;
typedef int GLint;
typedef unsigned short GLushort;
typedef unsigned int GLuint;
typedef int GLsizei;
typedef char GLchar;
typedef struct __GLsync *GLsync;
typedef void (APIENTRY *GLDEBUGPROC)(GLenum source,GLenum type,GLuint id,GLenum severity,GLsizei length,const GLchar *message,const void *userParam);
typedef void (APIENTRY *GLDEBUGPROCKHR)(GLenum source,GLenum type,GLuint id,GLenum severity,GLsizei length,const GLchar *message,const void *userParam);
typedef khronos_int8_t GLbyte;
typedef khronos_uint8_t GLubyte;
typedef khronos_float_t GLfloat;
typedef khronos_float_t GLclampf;
typedef khronos_int32_t GLfixed;
typedef khronos_int64_t GLint64;
typedef khronos_uint64_t GLuint64;
typedef khronos_intptr_t GLintptr;
typedef khronos_ssize_t GLsizeiptr;

/* Enums */

/* GL_ES_VERSION_2_0 */

#define GL_DEPTH_BUFFER_BIT 0x00000100
#define GL_STENCIL_BUFFER_BIT 0x00000400
#define GL_COLOR_BUFFER_BIT 0x00004000
#define GL_FALSE 0
#define GL_TRUE 1
#define GL_POINTS 0x0000
#define GL_LINES 0x0001
#define GL_LINE_LOOP 0x0002
#define GL_LINE_STRIP 0x0003
#define GL_TRIANGLES 0x0004
#define GL_TRIANGLE_STRIP 0x0005
#define GL_TRIANGLE_FAN 0x0006
#define GL_ZERO 0
#define GL_ONE 1
#define GL_SRC_COLOR 0x0300
#define GL_ONE_MINUS_SRC_COLOR 0x0301
#define GL_SRC_ALPHA 0x0302
#define GL_ONE_MINUS_SRC_ALPHA 0x0303
#define GL_DST_ALPHA 0x0304
#define GL_ONE_MINUS_DST_ALPHA 0x0305
#define GL_DST_COLOR 0x0306
#define GL_ONE_MINUS_DST_COLOR 0x0307
#define GL_SRC_ALPHA_SATURATE 0x0308
#define GL_FUNC_ADD 0x8006
#define GL_BLEND_EQUATION 0x8009
#define GL_BLEND_EQUATION_RGB 0x8009
#define GL_BLEND_EQUATION_ALPHA 0x883D
#define GL_FUNC_SUBTRACT 0x800A
#define GL_FUNC_REVERSE_SUBTRACT 0x800B
#define GL_BLEND_DST_RGB 0x80C8
#define GL_BLEND_SRC_RGB 0x80C9
#define GL_BLEND_DST_ALPHA 0x80CA
#define GL_BLEND_SRC_ALPHA 0x80CB
#define GL_CONSTANT_COLOR 0x8001
#define GL_ONE_MINUS_CONSTANT_COLOR 0x8002
#define GL_CONSTANT_ALPHA 0x8003
#define GL_ONE_MINUS_CONSTANT_ALPHA 0x8004
#define GL_BLEND_COLOR 0x8005
#define GL_ARRAY_BUFFER 0x8892
#define GL_ELEMENT_ARRAY_BUFFER 0x8893
#define GL_ARRAY_BUFFER_BINDING 0x8894
#define GL_ELEMENT_ARRAY_BUFFER_BINDING 0x8895
#define GL_STREAM_DRAW 0x88E0
#define GL_STATIC_DRAW 0x88E4
#define GL_DYNAMIC_DRAW 0x88E8
#define GL_BUFFER_SIZE 0x8764
#define GL_BUFFER_USAGE 0x8765
#define GL_CURRENT_VERTEX_ATTRIB 0x8626
#define GL_FRONT 0x0404
#define GL_BACK 0x0405
#define GL_FRONT_AND_BACK 0x0408
#define GL_TEXTURE_2D 0x0DE1
#define GL_CULL_FACE 0x0B44
#define GL_BLEND 0x0BE2
#define GL_DITHER 0x0BD0
#define GL_STENCIL_TEST 0x0B90
#define GL_DEPTH_TEST 0x0B71
#define GL_SCISSOR_TEST 0x0C11
#define GL_POLYGON_OFFSET_FILL 0x8037
#define GL_SAMPLE_ALPHA_TO_COVERAGE 0x809E
#define GL_SAMPLE_COVERAGE 0x80A0
#define GL_NO_ERROR 0
#define GL_INVALID_ENUM 0x0500
#define GL_INVALID_VALUE 0x0501
#define GL_INVALID_OPERATION 0x0502
#define GL_OUT_OF_MEMORY 0x0505
#define GL_CW 0x0900
#define GL_CCW 0x0901
#define GL_LINE_WIDTH 0x0B21
#define GL_ALIASED_POINT_SIZE_RANGE 0x846D
#define GL_ALIASED_LINE_WIDTH_RANGE 0x846E
#define GL_CULL_FACE_MODE 0x0B45
#define GL_FRONT_FACE 0x0B46
#define GL_DEPTH_RANGE 0x0B70
#define GL_DEPTH_WRITEMASK 0x0B72
#define GL_DEPTH_CLEAR_VALUE 0x0B73
#define GL_DEPTH_FUNC 0x0B74
#define GL_STENCIL_CLEAR_VALUE 0x0B91
#define GL_STENCIL_FUNC 0x0B92
#define GL_STENCIL_FAIL 0x0B94
#define GL_STENCIL_PASS_DEPTH_FAIL 0x0B95
#define GL_STENCIL_PASS_DEPTH_PASS 0x0B96
#define GL_STENCIL_REF 0x0B97
#define GL_STENCIL_VALUE_MASK 0x0B93
#define GL_STENCIL_WRITEMASK 0x0B98
#define GL_STENCIL_BACK_FUNC 0x8800
#define GL_STENCIL_BACK_FAIL 0x8801
#define GL_STENCIL_BACK_PASS_DEPTH_FAIL 0x8802
#define GL_STENCIL_BACK_PASS_DEPTH_PASS 0x8803
#define GL_STENCIL_BACK_REF 0x8CA3
#define GL_STENCIL_BACK_VALUE_MASK 0x8CA4
#define GL_STENCIL_BACK_WRITEMASK 0x8CA5
#define GL_VIEWPORT 0x0BA2
#define GL_SCISSOR_BOX 0x0C10
#define GL_COLOR_CLEAR_VALUE 0x0C22
#define GL_COLOR_WRITEMASK 0x0C23
#define GL_UNPACK_ALIGNMENT 0x0CF5
#define GL_PACK_ALIGNMENT 0x0D05
#define GL_MAX_TEXTURE_SIZE 0x0D33
#define GL_MAX_VIEWPORT_DIMS 0x0D3A
#define GL_SUBPIXEL_BITS 0x0D50
#define GL_RED_BITS 0x0D52
#define GL_GREEN_BITS 0x0D53
#define GL_BLUE_BITS 0x0D54
#define GL_ALPHA_BITS 0x0D55
#define GL_DEPTH_BITS 0x0D56
#define GL_STENCIL_BITS 0x0D57
#define GL_POLYGON_OFFSET_UNITS 0x2A00
#define GL_POLYGON_OFFSET_FACTOR 0x8038
#define GL_TEXTURE_BINDING_2D 0x8069
#define GL_SAMPLE_BUFFERS 0x80A8
#define GL_SAMPLES 0x80A9
#define GL_SAMPLE_COVERAGE_VALUE 0x80AA
#define GL_SAMPLE_COVERAGE_INVERT 0x80AB
#define GL_NUM_COMPRESSED_TEXTURE_FORMATS 0x86A2
#define GL_COMPRESSED_TEXTURE_FORMATS 0x86A3
#define GL_DONT_CARE 0x1100
#define GL_FASTEST 0x1101
#define GL_NICEST 0x1102
#define GL_GENERATE_MIPMAP_HINT 0x8192
#define GL_BYTE 0x1400
#define GL_UNSIGNED_BYTE 0x1401
#define GL_SHORT 0x1402
#define GL_UNSIGNED_SHORT 0x1403
#define GL_INT 0x1404
#define GL_UNSIGNED_INT 0x1405
#define GL_FLOAT 0x1406
#define GL_FIXED 0x140C
#define GL_DEPTH_COMPONENT 0x1902
#define GL_ALPHA 0x1906
#define GL_RGB 0x1907
#define GL_RGBA 0x1908
#define GL_LUMINANCE 0x1909
#define GL_LUMINANCE_ALPHA 0x190A
#define GL_UNSIGNED_SHORT_4_4_4_4 0x8033
#define GL_UNSIGNED_SHORT_5_5_5_1 0x8034
#define GL_UNSIGNED_SHORT_5_6_5 0x8363
#define GL_FRAGMENT_SHADER 0x8B30
#define GL_VERTEX_SHADER 0x8B31
#define GL_MAX_VERTEX_ATTRIBS 0x8869
#define GL_MAX_VERTEX_UNIFORM_VECTORS 0x8DFB
#define GL_MAX_VARYING_VECTORS 0x8DFC
#define GL_MAX_COMBINED_TEXTURE_IMAGE_UNITS 0x8B4D
#define GL_MAX_VERTEX_TEXTURE_IMAGE_UNITS 0x8B4C
#define GL_MAX_TEXTURE_IMAGE_UNITS 0x8872
#define GL_MAX_FRAGMENT_UNIFORM_VECTORS 0x8DFD
#define GL_SHADER_TYPE 0x8B4F
#define GL_DELETE_STATUS 0x8B80
#define GL_LINK_STATUS 0x8B82
#define GL_VALIDATE_STATUS 0x8B83
#define GL_ATTACHED_SHADERS 0x8B85
#define GL_ACTIVE_UNIFORMS 0x8B86
#define GL_ACTIVE_UNIFORM_MAX_LENGTH 0x8B87
#define GL_ACTIVE_ATTRIBUTES 0x8B89
#define GL_ACTIVE_ATTRIBUTE_MAX_LENGTH 0x8B8A
#define GL_SHADING_LANGUAGE_VERSION 0x8B8C
#define GL_CURRENT_PROGRAM 0x8B8D
#define GL_NEVER 0x0200
#define GL_LESS 0x0201
#define GL_EQUAL 0x0202
#define GL_LEQUAL 0x0203
#define GL_GREATER 0x0204
#define GL_NOTEQUAL 0x0205
#define GL_GEQUAL 0x0206
#define GL_ALWAYS 0x0207
#define GL_KEEP 0x1E00
#define GL_REPLACE 0x1E01
#define GL_INCR 0x1E02
#define GL_DECR 0x1E03
#define GL_INVERT 0x150A
#define GL_INCR_WRAP 0x8507
#define GL_DECR_WRAP 0x8508
#define GL_VENDOR 0x1F00
#define GL_RENDERER 0x1F01
#define GL_VERSION 0x1F02
#define GL_EXTENSIONS 0x1F03
#define GL_NEAREST 0x2600
#define GL_LINEAR 0x2601
#define GL_NEAREST_MIPMAP_NEAREST 0x2700
#define GL_LINEAR_MIPMAP_NEAREST 0x2701
#define GL_NEAREST_MIPMAP_LINEAR 0x2702
#define GL_LINEAR_MIPMAP_LINEAR 0x2703
#define GL_TEXTURE_MAG_FILTER 0x2800
#define GL_TEXTURE_MIN_FILTER 0x2801
#define GL_TEXTURE_WRAP_S 0x2802
#define GL_TEXTURE_WRAP_T 0x2803
#define GL_TEXTURE 0x1702
#define GL_TEXTURE_CUBE_MAP 0x8513
#define GL_TEXTURE_BINDING_CUBE_MAP 0x8514
#define GL_TEXTURE_CUBE_MAP_POSITIVE_X 0x8515
#define GL_TEXTURE_CUBE_MAP_NEGATIVE_X 0x8516
#define GL_TEXTURE_CUBE_MAP_POSITIVE_Y 0x8517
#define GL_TEXTURE_CUBE_MAP_NEGATIVE_Y 0x8518
#define GL_TEXTURE_CUBE_MAP_POSITIVE_Z 0x8519
#define GL_TEXTURE_CUBE_MAP_NEGATIVE_Z 0x851A
#define GL_MAX_CUBE_MAP_TEXTURE_SIZE 0x851C
#define GL_TEXTURE0 0x84C0
#define GL_TEXTURE1 0x84C1
#define GL_TEXTURE2 0x84C2
#define GL_TEXTURE3 0x84C3
#define GL_TEXTURE4 0x84C4
#define GL_TEXTURE5 0x84C5
#define GL_TEXTURE6 0x84C6
#define GL_TEXTURE7 0x84C7
#define GL_TEXTURE8 0x84C8
#define GL_TEXTURE9 0x84C9
#define GL_TEXTURE10 0x84CA
#define GL_TEXTURE11 0x84CB
#define GL_TEXTURE12 0x84CC
#define GL_TEXTURE13 0x84CD
#define GL_TEXTURE14 0x84CE
#define GL_TEXTURE15 0x84CF
#define GL_TEXTURE16 0x84D0
#define GL_TEXTURE17 0x84D1
#define GL_TEXTURE18 0x84D2
#define GL_TEXTURE19 0x84D3
#define GL_TEXTURE20 0x84D4
#define GL_TEXTURE21 0x84D5
#define GL_TEXTURE22 0x84D6
#define GL_TEXTURE23 0x84D7
#define GL_TEXTURE24 0x84D8
#define GL_TEXTURE25 0x84D9
#define GL_TEXTURE26 0x84DA
#define GL_TEXTURE27 0x84DB
#define GL_TEXTURE28 0x84DC
#define GL_TEXTURE29 0x84DD
#define GL_TEXTURE30 0x84DE
#define GL_TEXTURE31 0x84DF
#define GL_ACTIVE_TEXTURE 0x84E0
#define GL_REPEAT 0x2901
#define GL_CLAMP_TO_EDGE 0x812F
#define GL_MIRRORED_REPEAT 0x8370
#define GL_FLOAT_VEC2 0x8B50
#define GL_FLOAT_VEC3 0x8B51
#define GL_FLOAT_VEC4 0x8B52
#define GL_INT_VEC2 0x8B53
#define GL_INT_VEC3 0x8B54
#define GL_INT_VEC4 0x8B55
#define GL_BOOL 0x8B56
#define GL_BOOL_VEC2 0x8B57
#define GL_BOOL_VEC3 0x8B58
#define GL_BOOL_VEC4 0x8B59
#define GL_FLOAT_MAT2 0x8B5A
#define GL_FLOAT_MAT3 0x8B5B
#define GL_FLOAT_MAT4 0x8B5C
#define GL_SAMPLER_2D 0x8B5E
#define GL_SAMPLER_CUBE 0x8B60
#define GL_VERTEX_ATTRIB_ARRAY_ENABLED 0x8622
#define GL_VERTEX_ATTRIB_ARRAY_SIZE 0x8623
#define GL_VERTEX_ATTRIB_ARRAY_STRIDE 0x8624
#define GL_VERTEX_ATTRIB_ARRAY_TYPE 0x8625
#define GL_VERTEX_ATTRIB_ARRAY_NORMALIZED 0x886A
#define GL_VERTEX_ATTRIB_ARRAY_POINTER 0x8645
#define GL_VERTEX_ATTRIB_ARRAY_BUFFER_BINDING 0x889F
#define GL_IMPLEMENTATION_COLOR_READ_TYPE 0x8B9A
#define GL_IMPLEMENTATION_COLOR_READ_FORMAT 0x8B9B
#define GL_COMPILE_STATUS 0x8B81
#define GL_INFO_LOG_LENGTH 0x8B84
#define GL_SHADER_SOURCE_LENGTH 0x8B88
#define GL_SHADER_COMPILER 0x8DFA
#define GL_SHADER_BINARY_FORMATS 0x8DF8
#define GL_NUM_SHADER_BINARY_FORMATS 0x8DF9
#define GL_LOW_FLOAT 0x8DF0
#define GL_MEDIUM_FLOAT 0x8DF1
#define GL_HIGH_FLOAT 0x8DF2
#define GL_LOW_INT 0x8DF3
#define GL_MEDIUM_INT 0x8DF4
#define GL_HIGH_INT 0x8DF5
#define GL_FRAMEBUFFER 0x8D40
#define GL_RENDERBUFFER 0x8D41
#define GL_RGBA4 0x8056
#define GL_RGB5_A1 0x8057
#define GL_RGB565 0x8D62
#define GL_DEPTH_COMPONENT16 0x81A5
#define GL_STENCIL_INDEX8 0x8D48
#define GL_RENDERBUFFER_WIDTH 0x8D42
#define GL_RENDERBUFFER_HEIGHT 0x8D43
#define GL_RENDERBUFFER_INTERNAL_FORMAT 0x8D44
#define GL_RENDERBUFFER_RED_SIZE 0x8D50
#define GL_RENDERBUFFER_GREEN_SIZE 0x8D51
#define GL_RENDERBUFFER_BLUE_SIZE 0x8D52
#define GL_RENDERBUFFER_ALPHA_SIZE 0x8D53
#define GL_RENDERBUFFER_DEPTH_SIZE 0x8D54
#define GL_RENDERBUFFER_STENCIL_SIZE 0x8D55
#define GL_FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE 0x8CD0
#define GL_FRAMEBUFFER_ATTACHMENT_OBJECT_NAME 0x8CD1
#define GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_LEVEL 0x8CD2
#define GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_CUBE_MAP_FACE 0x8CD3
#define GL_COLOR_ATTACHMENT0 0x8CE0
#define GL_DEPTH_ATTACHMENT 0x8D00
#define GL_STENCIL_ATTACHMENT 0x8D20
#define GL_NONE 0
#define GL_FRAMEBUFFER_COMPLETE 0x8CD5
#define GL_FRAMEBUFFER_INCOMPLETE_ATTACHMENT 0x8CD6
#define GL_FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT 0x8CD7
#define GL_FRAMEBUFFER_INCOMPLETE_DIMENSIONS 0x8CD9
#define GL_FRAMEBUFFER_UNSUPPORTED 0x8CDD
#define GL_FRAMEBUFFER_BINDING 0x8CA6
#define GL_RENDERBUFFER_BINDING 0x8CA7
#define GL_MAX_RENDERBUFFER_SIZE 0x84E8
#define GL_INVALID_FRAMEBUFFER_OPERATION 0x0506

/* GL_ANGLE_framebuffer_blit */

#define GL_READ_FRAMEBUFFER_ANGLE 0x8CA8
#define GL_DRAW_FRAMEBUFFER_ANGLE 0x8CA9
#define GL_DRAW_FRAMEBUFFER_BINDING_ANGLE 0x8CA6
#define GL_READ_FRAMEBUFFER_BINDING_ANGLE 0x8CAA

/* GL_ANGLE_framebuffer_multisample */

#define GL_RENDERBUFFER_SAMPLES_ANGLE 0x8CAB
#define GL_FRAMEBUFFER_INCOMPLETE_MULTISAMPLE_ANGLE 0x8D56
#define GL_MAX_SAMPLES_ANGLE 0x8D57

/* GL_ANGLE_instanced_arrays */

#define GL_VERTEX_ATTRIB_ARRAY_DIVISOR_ANGLE 0x88FE

/* GL_ANGLE_depth_texture */

#define GL_DEPTH_COMPONENT 0x1902
#define GL_DEPTH_STENCIL_OES 0x84F9
#define GL_UNSIGNED_SHORT 0x1403
#define GL_UNSIGNED_INT 0x1405
#define GL_UNSIGNED_INT_24_8_OES 0x84FA
#define GL_DEPTH_COMPONENT16 0x81A5
#define GL_DEPTH_COMPONENT32_OES 0x81A7
#define GL_DEPTH24_STENCIL8_OES 0x88F0

/* GL_APPLE_framebuffer_multisample */

#define GL_RENDERBUFFER_SAMPLES_APPLE 0x8CAB
#define GL_FRAMEBUFFER_INCOMPLETE_MULTISAMPLE_APPLE 0x8D56
#define GL_MAX_SAMPLES_APPLE 0x8D57
#define GL_READ_FRAMEBUFFER_APPLE 0x8CA8
#define GL_DRAW_FRAMEBUFFER_APPLE 0x8CA9
#define GL_DRAW_FRAMEBUFFER_BINDING_APPLE 0x8CA6
#define GL_READ_FRAMEBUFFER_BINDING_APPLE 0x8CAA

/* GL_APPLE_texture_max_level */

#define GL_TEXTURE_MAX_LEVEL_APPLE 0x813D

/* GL_EXT_texture_type_2_10_10_10_REV */

#define GL_UNSIGNED_INT_2_10_10_10_REV_EXT 0x8368

/* GL_EXT_discard_framebuffer */

#define GL_COLOR_EXT 0x1800
#define GL_DEPTH_EXT 0x1801
#define GL_STENCIL_EXT 0x1802

/* GL_EXT_blend_minmax */

#define GL_MIN_EXT 0x8007
#define GL_MAX_EXT 0x8008
#define GL_FUNC_ADD_EXT 0x8006
#define GL_BLEND_EQUATION_EXT 0x8009

/* GL_EXT_occlusion_query_boolean */

#define GL_ANY_SAMPLES_PASSED_EXT 0x8C2F
#define GL_ANY_SAMPLES_PASSED_CONSERVATIVE_EXT 0x8D6A
#define GL_CURRENT_QUERY_EXT 0x8865
#define GL_QUERY_RESULT_EXT 0x8866
#define GL_QUERY_RESULT_AVAILABLE_EXT 0x8867

/* GL_EXT_shadow_samplers */

#define GL_TEXTURE_COMPARE_MODE_EXT 0x884C
#define GL_TEXTURE_COMPARE_FUNC_EXT 0x884D
#define GL_COMPARE_REF_TO_TEXTURE_EXT 0x884E
#define GL_SAMPLER_2D_SHADOW_EXT 0x8B62

/* GL_EXT_texture_rg */

#define GL_RED_EXT 0x1903
#define GL_RG_EXT 0x8227
#define GL_R8_EXT 0x8229
#define GL_RG8_EXT 0x822B

/* GL_EXT_texture_storage */

#define GL_TEXTURE_IMMUTABLE_FORMAT_EXT 0x912F
#define GL_ALPHA8_EXT 0x803C
#define GL_LUMINANCE8_EXT 0x8040
#define GL_LUMINANCE8_ALPHA8_EXT 0x8045
#define GL_RGBA32F_EXT 0x8814
#define GL_RGB32F_EXT 0x8815
#define GL_ALPHA32F_EXT 0x8816
#define GL_LUMINANCE32F_EXT 0x8818
#define GL_LUMINANCE_ALPHA32F_EXT 0x8819
#define GL_RGBA16F_EXT 0x881A
#define GL_RGB16F_EXT 0x881B
#define GL_ALPHA16F_EXT 0x881C
#define GL_LUMINANCE16F_EXT 0x881E
#define GL_LUMINANCE_ALPHA16F_EXT 0x881F
#define GL_RGB10_A2_EXT 0x8059
#define GL_RGB10_EXT 0x8052
#define GL_BGRA8_EXT 0x93A1
#define GL_R8_EXT 0x8229
#define GL_RG8_EXT 0x822B
#define GL_R32F_EXT 0x822E
#define GL_RG32F_EXT 0x8230
#define GL_R16F_EXT 0x822D
#define GL_RG16F_EXT 0x822F

/* GL_EXT_map_buffer_range */

#define GL_MAP_READ_BIT_EXT 0x0001
#define GL_MAP_WRITE_BIT_EXT 0x0002
#define GL_MAP_INVALIDATE_RANGE_BIT_EXT 0x0004
#define GL_MAP_INVALIDATE_BUFFER_BIT_EXT 0x0008
#define GL_MAP_FLUSH_EXPLICIT_BIT_EXT 0x0010
#define GL_MAP_UNSYNCHRONIZED_BIT_EXT 0x0020

/* GL_EXT_instanced_arrays */

#define GL_VERTEX_ATTRIB_ARRAY_DIVISOR_EXT 0x88FE

/* GL_NV_draw_buffers */

#define GL_MAX_DRAW_BUFFERS_NV 0x8824
#define GL_DRAW_BUFFER0_NV 0x8825
#define GL_DRAW_BUFFER1_NV 0x8826
#define GL_DRAW_BUFFER2_NV 0x8827
#define GL_DRAW_BUFFER3_NV 0x8828
#define GL_DRAW_BUFFER4_NV 0x8829
#define GL_DRAW_BUFFER5_NV 0x882A
#define GL_DRAW_BUFFER6_NV 0x882B
#define GL_DRAW_BUFFER7_NV 0x882C
#define GL_DRAW_BUFFER8_NV 0x882D
#define GL_DRAW_BUFFER9_NV 0x882E
#define GL_DRAW_BUFFER10_NV 0x882F
#define GL_DRAW_BUFFER11_NV 0x8830
#define GL_DRAW_BUFFER12_NV 0x8831
#define GL_DRAW_BUFFER13_NV 0x8832
#define GL_DRAW_BUFFER14_NV 0x8833
#define GL_DRAW_BUFFER15_NV 0x8834
#define GL_COLOR_ATTACHMENT0_NV 0x8CE0
#define GL_COLOR_ATTACHMENT1_NV 0x8CE1
#define GL_COLOR_ATTACHMENT2_NV 0x8CE2
#define GL_COLOR_ATTACHMENT3_NV 0x8CE3
#define GL_COLOR_ATTACHMENT4_NV 0x8CE4
#define GL_COLOR_ATTACHMENT5_NV 0x8CE5
#define GL_COLOR_ATTACHMENT6_NV 0x8CE6
#define GL_COLOR_ATTACHMENT7_NV 0x8CE7
#define GL_COLOR_ATTACHMENT8_NV 0x8CE8
#define GL_COLOR_ATTACHMENT9_NV 0x8CE9
#define GL_COLOR_ATTACHMENT10_NV 0x8CEA
#define GL_COLOR_ATTACHMENT11_NV 0x8CEB
#define GL_COLOR_ATTACHMENT12_NV 0x8CEC
#define GL_COLOR_ATTACHMENT13_NV 0x8CED
#define GL_COLOR_ATTACHMENT14_NV 0x8CEE
#define GL_COLOR_ATTACHMENT15_NV 0x8CEF

/* GL_NV_fbo_color_attachments */

#define GL_MAX_COLOR_ATTACHMENTS_NV 0x8CDF
#define GL_COLOR_ATTACHMENT0_NV 0x8CE0
#define GL_COLOR_ATTACHMENT1_NV 0x8CE1
#define GL_COLOR_ATTACHMENT2_NV 0x8CE2
#define GL_COLOR_ATTACHMENT3_NV 0x8CE3
#define GL_COLOR_ATTACHMENT4_NV 0x8CE4
#define GL_COLOR_ATTACHMENT5_NV 0x8CE5
#define GL_COLOR_ATTACHMENT6_NV 0x8CE6
#define GL_COLOR_ATTACHMENT7_NV 0x8CE7
#define GL_COLOR_ATTACHMENT8_NV 0x8CE8
#define GL_COLOR_ATTACHMENT9_NV 0x8CE9
#define GL_COLOR_ATTACHMENT10_NV 0x8CEA
#define GL_COLOR_ATTACHMENT11_NV 0x8CEB
#define GL_COLOR_ATTACHMENT12_NV 0x8CEC
#define GL_COLOR_ATTACHMENT13_NV 0x8CED
#define GL_COLOR_ATTACHMENT14_NV 0x8CEE
#define GL_COLOR_ATTACHMENT15_NV 0x8CEF

/* GL_NV_read_buffer */

#define GL_READ_BUFFER_NV 0x0C02

/* GL_NV_framebuffer_blit */

#define GL_READ_FRAMEBUFFER_NV 0x8CA8
#define GL_DRAW_FRAMEBUFFER_NV 0x8CA9
#define GL_DRAW_FRAMEBUFFER_BINDING_NV 0x8CA6
#define GL_READ_FRAMEBUFFER_BINDING_NV 0x8CAA

/* GL_NV_framebuffer_multisample */

#define GL_RENDERBUFFER_SAMPLES_NV 0x8CAB
#define GL_FRAMEBUFFER_INCOMPLETE_MULTISAMPLE_NV 0x8D56
#define GL_MAX_SAMPLES_NV 0x8D57

/* GL_NV_instanced_arrays */

#define GL_VERTEX_ATTRIB_ARRAY_DIVISOR_NV 0x88FE

/* GL_NV_shadow_samplers_array */

#define GL_SAMPLER_2D_ARRAY_SHADOW_NV 0x8DC4

/* GL_NV_shadow_samplers_cube */

#define GL_SAMPLER_CUBE_SHADOW_NV 0x8DC5

/* GL_OES_depth24 */

#define GL_DEPTH_COMPONENT24_OES 0x81A6

/* GL_OES_element_index_uint */

#define GL_UNSIGNED_INT 0x1405

/* GL_OES_rgb8_rgba8 */

#define GL_RGB8_OES 0x8051
#define GL_RGBA8_OES 0x8058

/* GL_OES_texture_3D */

#define GL_TEXTURE_WRAP_R_OES 0x8072
#define GL_TEXTURE_3D_OES 0x806F
#define GL_TEXTURE_BINDING_3D_OES 0x806A
#define GL_MAX_3D_TEXTURE_SIZE_OES 0x8073
#define GL_SAMPLER_3D_OES 0x8B5F
#define GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_3D_ZOFFSET_OES 0x8CD4

/* GL_OES_texture_half_float */

#define GL_HALF_FLOAT_OES 0x8D61

/* GL_OES_texture_float */

#define GL_FLOAT 0x1406

/* GL_OES_vertex_half_float */

#define GL_HALF_FLOAT_OES 0x8D61

/* GL_OES_packed_depth_stencil */

#define GL_DEPTH_STENCIL_OES 0x84F9
#define GL_UNSIGNED_INT_24_8_OES 0x84FA
#define GL_DEPTH24_STENCIL8_OES 0x88F0

/* GL_OES_depth_texture */

#define GL_DEPTH_COMPONENT 0x1902
#define GL_UNSIGNED_SHORT 0x1403
#define GL_UNSIGNED_INT 0x1405

/* GL_OES_standard_derivatives */

#define GL_FRAGMENT_SHADER_DERIVATIVE_HINT_OES 0x8B8B

/* GL_OES_vertex_array_object */

#define GL_VERTEX_ARRAY_BINDING_OES 0x85B5

/* GL_OES_required_internalformat */

#define GL_ALPHA8_OES 0x803C
#define GL_DEPTH_COMPONENT16_OES 0x81A5
#define GL_DEPTH_COMPONENT24_OES 0x81A6
#define GL_DEPTH24_STENCIL8_OES 0x88F0
#define GL_DEPTH_COMPONENT32_OES 0x81A7
#define GL_LUMINANCE4_ALPHA4_OES 0x8043
#define GL_LUMINANCE8_ALPHA8_OES 0x8045
#define GL_LUMINANCE8_OES 0x8040
#define GL_RGBA4_OES 0x8056
#define GL_RGB5_A1_OES 0x8057
#define GL_RGB565_OES 0x8D62
#define GL_RGB8_OES 0x8051
#define GL_RGBA8_OES 0x8058
#define GL_RGB10_EXT 0x8052
#define GL_RGB10_A2_EXT 0x8059

/* GL_OES_surfaceless_context */

#define GL_FRAMEBUFFER_UNDEFINED_OES 0x8219

/* GL_APPLE_texture_format_BGRA8888 */

#define GL_BGRA_EXT 0x80E1
#define GL_BGRA8_EXT 0x93A1

/* GL_EXT_texture_filter_anisotropic */

#define GL_TEXTURE_MAX_ANISOTROPY_EXT 0x84FE
#define GL_MAX_TEXTURE_MAX_ANISOTROPY_EXT 0x84FF

/* GL_EXT_texture_format_BGRA8888 */

#define GL_BGRA_EXT 0x80E1

/* GL_EXT_read_format_bgra */

#define GL_BGRA_EXT 0x80E1
#define GL_UNSIGNED_SHORT_4_4_4_4_REV_EXT 0x8365
#define GL_UNSIGNED_SHORT_1_5_5_5_REV_EXT 0x8366

/* GL_EXT_debug_label */

#define GL_PROGRAM_PIPELINE_OBJECT_EXT 0x8A4F
#define GL_PROGRAM_OBJECT_EXT 0x8B40
#define GL_SHADER_OBJECT_EXT 0x8B48
#define GL_BUFFER_OBJECT_EXT 0x9151
#define GL_QUERY_OBJECT_EXT 0x9153
#define GL_VERTEX_ARRAY_OBJECT_EXT 0x9154
#define GL_SAMPLER 0x82E6
#define GL_TRANSFORM_FEEDBACK 0x8E22

/* GL_EXT_disjoint_timer_query */

#define GL_QUERY_COUNTER_BITS_EXT 0x8864
#define GL_CURRENT_QUERY_EXT 0x8865
#define GL_QUERY_RESULT_EXT 0x8866
#define GL_QUERY_RESULT_AVAILABLE_EXT 0x8867
#define GL_TIME_ELAPSED_EXT 0x88BF
#define GL_TIMESTAMP_EXT 0x8E28
#define GL_GPU_DISJOINT_EXT 0x8FBB

/* GL_EXT_texture_sRGB_decode */

#define GL_TEXTURE_SRGB_DECODE_EXT 0x8A48
#define GL_DECODE_EXT 0x8A49
#define GL_SKIP_DECODE_EXT 0x8A4A

/* GL_EXT_separate_shader_objects */

#define GL_ACTIVE_PROGRAM_EXT 0x8259
#define GL_VERTEX_SHADER_BIT_EXT 0x00000001
#define GL_FRAGMENT_SHADER_BIT_EXT 0x00000002
#define GL_ALL_SHADER_BITS_EXT 0xFFFFFFFF
#define GL_PROGRAM_SEPARABLE_EXT 0x8258
#define GL_ACTIVE_PROGRAM_EXT 0x8259
#define GL_PROGRAM_PIPELINE_BINDING_EXT 0x825A

/* GL_EXT_sRGB */

#define GL_SRGB_EXT 0x8C40
#define GL_SRGB_ALPHA_EXT 0x8C42
#define GL_SRGB8_ALPHA8_EXT 0x8C43
#define GL_FRAMEBUFFER_ATTACHMENT_COLOR_ENCODING_EXT 0x8210

/* GL_EXT_multisampled_render_to_texture */

#define GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_SAMPLES_EXT 0x8D6C
#define GL_RENDERBUFFER_SAMPLES_EXT 0x8CAB
#define GL_FRAMEBUFFER_INCOMPLETE_MULTISAMPLE_EXT 0x8D56
#define GL_MAX_SAMPLES_EXT 0x8D57

/* GL_EXT_robustness */

#define GL_NO_ERROR 0
#define GL_GUILTY_CONTEXT_RESET_EXT 0x8253
#define GL_INNOCENT_CONTEXT_RESET_EXT 0x8254
#define GL_UNKNOWN_CONTEXT_RESET_EXT 0x8255
#define GL_CONTEXT_ROBUST_ACCESS_EXT 0x90F3
#define GL_RESET_NOTIFICATION_STRATEGY_EXT 0x8256
#define GL_LOSE_CONTEXT_ON_RESET_EXT 0x8252
#define GL_NO_RESET_NOTIFICATION_EXT 0x8261

/* GL_KHR_debug */

#define GL_DEBUG_OUTPUT_SYNCHRONOUS 0x8242
#define GL_DEBUG_NEXT_LOGGED_MESSAGE_LENGTH 0x8243
#define GL_DEBUG_CALLBACK_FUNCTION 0x8244
#define GL_DEBUG_CALLBACK_USER_PARAM 0x8245
#define GL_DEBUG_SOURCE_API 0x8246
#define GL_DEBUG_SOURCE_WINDOW_SYSTEM 0x8247
#define GL_DEBUG_SOURCE_SHADER_COMPILER 0x8248
#define GL_DEBUG_SOURCE_THIRD_PARTY 0x8249
#define GL_DEBUG_SOURCE_APPLICATION 0x824A
#define GL_DEBUG_SOURCE_OTHER 0x824B
#define GL_DEBUG_TYPE_ERROR 0x824C
#define GL_DEBUG_TYPE_DEPRECATED_BEHAVIOR 0x824D
#define GL_DEBUG_TYPE_UNDEFINED_BEHAVIOR 0x824E
#define GL_DEBUG_TYPE_PORTABILITY 0x824F
#define GL_DEBUG_TYPE_PERFORMANCE 0x8250
#define GL_DEBUG_TYPE_OTHER 0x8251
#define GL_DEBUG_TYPE_MARKER 0x8268
#define GL_DEBUG_TYPE_PUSH_GROUP 0x8269
#define GL_DEBUG_TYPE_POP_GROUP 0x826A
#define GL_DEBUG_SEVERITY_NOTIFICATION 0x826B
#define GL_MAX_DEBUG_GROUP_STACK_DEPTH 0x826C
#define GL_DEBUG_GROUP_STACK_DEPTH 0x826D
#define GL_BUFFER 0x82E0
#define GL_SHADER 0x82E1
#define GL_PROGRAM 0x82E2
#define GL_VERTEX_ARRAY 0x8074
#define GL_QUERY 0x82E3
#define GL_SAMPLER 0x82E6
#define GL_MAX_LABEL_LENGTH 0x82E8
#define GL_MAX_DEBUG_MESSAGE_LENGTH 0x9143
#define GL_MAX_DEBUG_LOGGED_MESSAGES 0x9144
#define GL_DEBUG_LOGGED_MESSAGES 0x9145
#define GL_DEBUG_SEVERITY_HIGH 0x9146
#define GL_DEBUG_SEVERITY_MEDIUM 0x9147
#define GL_DEBUG_SEVERITY_LOW 0x9148
#define GL_DEBUG_OUTPUT 0x92E0
#define GL_CONTEXT_FLAG_DEBUG_BIT 0x00000002
#define GL_STACK_OVERFLOW 0x0503
#define GL_STACK_UNDERFLOW 0x0504
#define GL_DEBUG_OUTPUT_SYNCHRONOUS_KHR 0x8242
#define GL_DEBUG_NEXT_LOGGED_MESSAGE_LENGTH_KHR 0x8243
#define GL_DEBUG_CALLBACK_FUNCTION_KHR 0x8244
#define GL_DEBUG_CALLBACK_USER_PARAM_KHR 0x8245
#define GL_DEBUG_SOURCE_API_KHR 0x8246
#define GL_DEBUG_SOURCE_WINDOW_SYSTEM_KHR 0x8247
#define GL_DEBUG_SOURCE_SHADER_COMPILER_KHR 0x8248
#define GL_DEBUG_SOURCE_THIRD_PARTY_KHR 0x8249
#define GL_DEBUG_SOURCE_APPLICATION_KHR 0x824A
#define GL_DEBUG_SOURCE_OTHER_KHR 0x824B
#define GL_DEBUG_TYPE_ERROR_KHR 0x824C
#define GL_DEBUG_TYPE_DEPRECATED_BEHAVIOR_KHR 0x824D
#define GL_DEBUG_TYPE_UNDEFINED_BEHAVIOR_KHR 0x824E
#define GL_DEBUG_TYPE_PORTABILITY_KHR 0x824F
#define GL_DEBUG_TYPE_PERFORMANCE_KHR 0x8250
#define GL_DEBUG_TYPE_OTHER_KHR 0x8251
#define GL_DEBUG_TYPE_MARKER_KHR 0x8268
#define GL_DEBUG_TYPE_PUSH_GROUP_KHR 0x8269
#define GL_DEBUG_TYPE_POP_GROUP_KHR 0x826A
#define GL_DEBUG_SEVERITY_NOTIFICATION_KHR 0x826B
#define GL_MAX_DEBUG_GROUP_STACK_DEPTH_KHR 0x826C
#define GL_DEBUG_GROUP_STACK_DEPTH_KHR 0x826D
#define GL_BUFFER_KHR 0x82E0
#define GL_SHADER_KHR 0x82E1
#define GL_PROGRAM_KHR 0x82E2
#define GL_VERTEX_ARRAY_KHR 0x8074
#define GL_QUERY_KHR 0x82E3
#define GL_SAMPLER_KHR 0x82E6
#define GL_MAX_LABEL_LENGTH_KHR 0x82E8
#define GL_MAX_DEBUG_MESSAGE_LENGTH_KHR 0x9143
#define GL_MAX_DEBUG_LOGGED_MESSAGES_KHR 0x9144
#define GL_DEBUG_LOGGED_MESSAGES_KHR 0x9145
#define GL_DEBUG_SEVERITY_HIGH_KHR 0x9146
#define GL_DEBUG_SEVERITY_MEDIUM_KHR 0x9147
#define GL_DEBUG_SEVERITY_LOW_KHR 0x9148
#define GL_DEBUG_OUTPUT_KHR 0x92E0
#define GL_CONTEXT_FLAG_DEBUG_BIT_KHR 0x00000002
#define GL_STACK_OVERFLOW_KHR 0x0503
#define GL_STACK_UNDERFLOW_KHR 0x0504
#define GL_PROGRAM_PIPELINE 0x82E4
#define GL_DISPLAY_LIST 0x82E7

/* GL_NV_texture_border_clamp */

#define GL_TEXTURE_BORDER_COLOR_NV 0x1004
#define GL_CLAMP_TO_BORDER_NV 0x812D

/* GL_OES_depth32 */

#define GL_DEPTH_COMPONENT32_OES 0x81A7

/* GL_OES_mapbuffer */

#define GL_WRITE_ONLY_OES 0x88B9
#define GL_BUFFER_ACCESS_OES 0x88BB
#define GL_BUFFER_MAPPED_OES 0x88BC
#define GL_BUFFER_MAP_POINTER_OES 0x88BD

/* GL_OES_stencil1 */

#define GL_STENCIL_INDEX1_OES 0x8D46

/* GL_OES_stencil4 */

#define GL_STENCIL_INDEX4_OES 0x8D47

/* Function prototypes */

/* GL_ES_VERSION_2_0 */
#ifndef GL_ES_VERSION_2_0
#define GL_ES_VERSION_2_0 1
GL_APICALL void GL_APIENTRY GLES2ActiveTexture(GLenum);
#define glActiveTexture GLES2ActiveTexture
GL_APICALL void GL_APIENTRY GLES2AttachShader(GLuint, GLuint);
#define glAttachShader GLES2AttachShader
GL_APICALL void GL_APIENTRY GLES2BindAttribLocation(GLuint, GLuint, const GLchar *);
#define glBindAttribLocation GLES2BindAttribLocation
GL_APICALL void GL_APIENTRY GLES2BindBuffer(GLenum, GLuint);
#define glBindBuffer GLES2BindBuffer
GL_APICALL void GL_APIENTRY GLES2BindFramebuffer(GLenum, GLuint);
#define glBindFramebuffer GLES2BindFramebuffer
GL_APICALL void GL_APIENTRY GLES2BindRenderbuffer(GLenum, GLuint);
#define glBindRenderbuffer GLES2BindRenderbuffer
GL_APICALL void GL_APIENTRY GLES2BindTexture(GLenum, GLuint);
#define glBindTexture GLES2BindTexture
GL_APICALL void GL_APIENTRY GLES2BlendColor(GLfloat, GLfloat, GLfloat, GLfloat);
#define glBlendColor GLES2BlendColor
GL_APICALL void GL_APIENTRY GLES2BlendEquation(GLenum);
#define glBlendEquation GLES2BlendEquation
GL_APICALL void GL_APIENTRY GLES2BlendEquationSeparate(GLenum, GLenum);
#define glBlendEquationSeparate GLES2BlendEquationSeparate
GL_APICALL void GL_APIENTRY GLES2BlendFunc(GLenum, GLenum);
#define glBlendFunc GLES2BlendFunc
GL_APICALL void GL_APIENTRY GLES2BlendFuncSeparate(GLenum, GLenum, GLenum, GLenum);
#define glBlendFuncSeparate GLES2BlendFuncSeparate
GL_APICALL void GL_APIENTRY GLES2BufferData(GLenum, GLsizeiptr, const void *, GLenum);
#define glBufferData GLES2BufferData
GL_APICALL void GL_APIENTRY GLES2BufferSubData(GLenum, GLintptr, GLsizeiptr, const void *);
#define glBufferSubData GLES2BufferSubData
GL_APICALL GLenum GL_APIENTRY GLES2CheckFramebufferStatus(GLenum);
#define glCheckFramebufferStatus GLES2CheckFramebufferStatus
GL_APICALL void GL_APIENTRY GLES2Clear(GLbitfield);
#define glClear GLES2Clear
GL_APICALL void GL_APIENTRY GLES2ClearColor(GLfloat, GLfloat, GLfloat, GLfloat);
#define glClearColor GLES2ClearColor
GL_APICALL void GL_APIENTRY GLES2ClearDepthf(GLfloat);
#define glClearDepthf GLES2ClearDepthf
GL_APICALL void GL_APIENTRY GLES2ClearStencil(GLint);
#define glClearStencil GLES2ClearStencil
GL_APICALL void GL_APIENTRY GLES2ColorMask(GLboolean, GLboolean, GLboolean, GLboolean);
#define glColorMask GLES2ColorMask
GL_APICALL void GL_APIENTRY GLES2CompileShader(GLuint);
#define glCompileShader GLES2CompileShader
GL_APICALL void GL_APIENTRY GLES2CompressedTexImage2D(GLenum, GLint, GLenum, GLsizei, GLsizei, GLint, GLsizei, const void *);
#define glCompressedTexImage2D GLES2CompressedTexImage2D
GL_APICALL void GL_APIENTRY GLES2CompressedTexSubImage2D(GLenum, GLint, GLint, GLint, GLsizei, GLsizei, GLenum, GLsizei, const void *);
#define glCompressedTexSubImage2D GLES2CompressedTexSubImage2D
GL_APICALL void GL_APIENTRY GLES2CopyTexImage2D(GLenum, GLint, GLenum, GLint, GLint, GLsizei, GLsizei, GLint);
#define glCopyTexImage2D GLES2CopyTexImage2D
GL_APICALL void GL_APIENTRY GLES2CopyTexSubImage2D(GLenum, GLint, GLint, GLint, GLint, GLint, GLsizei, GLsizei);
#define glCopyTexSubImage2D GLES2CopyTexSubImage2D
GL_APICALL GLuint GL_APIENTRY GLES2CreateProgram(void);
#define glCreateProgram GLES2CreateProgram
GL_APICALL GLuint GL_APIENTRY GLES2CreateShader(GLenum);
#define glCreateShader GLES2CreateShader
GL_APICALL void GL_APIENTRY GLES2CullFace(GLenum);
#define glCullFace GLES2CullFace
GL_APICALL void GL_APIENTRY GLES2DeleteBuffers(GLsizei, const GLuint *);
#define glDeleteBuffers GLES2DeleteBuffers
GL_APICALL void GL_APIENTRY GLES2DeleteFramebuffers(GLsizei, const GLuint *);
#define glDeleteFramebuffers GLES2DeleteFramebuffers
GL_APICALL void GL_APIENTRY GLES2DeleteProgram(GLuint);
#define glDeleteProgram GLES2DeleteProgram
GL_APICALL void GL_APIENTRY GLES2DeleteRenderbuffers(GLsizei, const GLuint *);
#define glDeleteRenderbuffers GLES2DeleteRenderbuffers
GL_APICALL void GL_APIENTRY GLES2DeleteShader(GLuint);
#define glDeleteShader GLES2DeleteShader
GL_APICALL void GL_APIENTRY GLES2DeleteTextures(GLsizei, const GLuint *);
#define glDeleteTextures GLES2DeleteTextures
GL_APICALL void GL_APIENTRY GLES2DepthFunc(GLenum);
#define glDepthFunc GLES2DepthFunc
GL_APICALL void GL_APIENTRY GLES2DepthMask(GLboolean);
#define glDepthMask GLES2DepthMask
GL_APICALL void GL_APIENTRY GLES2DepthRangef(GLfloat, GLfloat);
#define glDepthRangef GLES2DepthRangef
GL_APICALL void GL_APIENTRY GLES2DetachShader(GLuint, GLuint);
#define glDetachShader GLES2DetachShader
GL_APICALL void GL_APIENTRY GLES2Disable(GLenum);
#define glDisable GLES2Disable
GL_APICALL void GL_APIENTRY GLES2DisableVertexAttribArray(GLuint);
#define glDisableVertexAttribArray GLES2DisableVertexAttribArray
GL_APICALL void GL_APIENTRY GLES2DrawArrays(GLenum, GLint, GLsizei);
#define glDrawArrays GLES2DrawArrays
GL_APICALL void GL_APIENTRY GLES2DrawElements(GLenum, GLsizei, GLenum, const void *);
#define glDrawElements GLES2DrawElements
GL_APICALL void GL_APIENTRY GLES2Enable(GLenum);
#define glEnable GLES2Enable
GL_APICALL void GL_APIENTRY GLES2EnableVertexAttribArray(GLuint);
#define glEnableVertexAttribArray GLES2EnableVertexAttribArray
GL_APICALL void GL_APIENTRY GLES2Finish(void);
#define glFinish GLES2Finish
GL_APICALL void GL_APIENTRY GLES2Flush(void);
#define glFlush GLES2Flush
GL_APICALL void GL_APIENTRY GLES2FramebufferRenderbuffer(GLenum, GLenum, GLenum, GLuint);
#define glFramebufferRenderbuffer GLES2FramebufferRenderbuffer
GL_APICALL void GL_APIENTRY GLES2FramebufferTexture2D(GLenum, GLenum, GLenum, GLuint, GLint);
#define glFramebufferTexture2D GLES2FramebufferTexture2D
GL_APICALL void GL_APIENTRY GLES2FrontFace(GLenum);
#define glFrontFace GLES2FrontFace
GL_APICALL void GL_APIENTRY GLES2GenBuffers(GLsizei, GLuint *);
#define glGenBuffers GLES2GenBuffers
GL_APICALL void GL_APIENTRY GLES2GenerateMipmap(GLenum);
#define glGenerateMipmap GLES2GenerateMipmap
GL_APICALL void GL_APIENTRY GLES2GenFramebuffers(GLsizei, GLuint *);
#define glGenFramebuffers GLES2GenFramebuffers
GL_APICALL void GL_APIENTRY GLES2GenRenderbuffers(GLsizei, GLuint *);
#define glGenRenderbuffers GLES2GenRenderbuffers
GL_APICALL void GL_APIENTRY GLES2GenTextures(GLsizei, GLuint *);
#define glGenTextures GLES2GenTextures
GL_APICALL void GL_APIENTRY GLES2GetActiveAttrib(GLuint, GLuint, GLsizei, GLsizei *, GLint *, GLenum *, GLchar *);
#define glGetActiveAttrib GLES2GetActiveAttrib
GL_APICALL void GL_APIENTRY GLES2GetActiveUniform(GLuint, GLuint, GLsizei, GLsizei *, GLint *, GLenum *, GLchar *);
#define glGetActiveUniform GLES2GetActiveUniform
GL_APICALL void GL_APIENTRY GLES2GetAttachedShaders(GLuint, GLsizei, GLsizei *, GLuint *);
#define glGetAttachedShaders GLES2GetAttachedShaders
GL_APICALL GLint GL_APIENTRY GLES2GetAttribLocation(GLuint, const GLchar *);
#define glGetAttribLocation GLES2GetAttribLocation
GL_APICALL void GL_APIENTRY GLES2GetBooleanv(GLenum, GLboolean *);
#define glGetBooleanv GLES2GetBooleanv
GL_APICALL void GL_APIENTRY GLES2GetBufferParameteriv(GLenum, GLenum, GLint *);
#define glGetBufferParameteriv GLES2GetBufferParameteriv
GL_APICALL GLenum GL_APIENTRY GLES2GetError(void);
#define glGetError GLES2GetError
GL_APICALL void GL_APIENTRY GLES2GetFloatv(GLenum, GLfloat *);
#define glGetFloatv GLES2GetFloatv
GL_APICALL void GL_APIENTRY GLES2GetFramebufferAttachmentParameteriv(GLenum, GLenum, GLenum, GLint *);
#define glGetFramebufferAttachmentParameteriv GLES2GetFramebufferAttachmentParameteriv
GL_APICALL void GL_APIENTRY GLES2GetIntegerv(GLenum, GLint *);
#define glGetIntegerv GLES2GetIntegerv
GL_APICALL void GL_APIENTRY GLES2GetProgramiv(GLuint, GLenum, GLint *);
#define glGetProgramiv GLES2GetProgramiv
GL_APICALL void GL_APIENTRY GLES2GetProgramInfoLog(GLuint, GLsizei, GLsizei *, GLchar *);
#define glGetProgramInfoLog GLES2GetProgramInfoLog
GL_APICALL void GL_APIENTRY GLES2GetRenderbufferParameteriv(GLenum, GLenum, GLint *);
#define glGetRenderbufferParameteriv GLES2GetRenderbufferParameteriv
GL_APICALL void GL_APIENTRY GLES2GetShaderiv(GLuint, GLenum, GLint *);
#define glGetShaderiv GLES2GetShaderiv
GL_APICALL void GL_APIENTRY GLES2GetShaderInfoLog(GLuint, GLsizei, GLsizei *, GLchar *);
#define glGetShaderInfoLog GLES2GetShaderInfoLog
GL_APICALL void GL_APIENTRY GLES2GetShaderPrecisionFormat(GLenum, GLenum, GLint *, GLint *);
#define glGetShaderPrecisionFormat GLES2GetShaderPrecisionFormat
GL_APICALL void GL_APIENTRY GLES2GetShaderSource(GLuint, GLsizei, GLsizei *, GLchar *);
#define glGetShaderSource GLES2GetShaderSource
GL_APICALL const GLubyte * GL_APIENTRY GLES2GetString(GLenum);
#define glGetString GLES2GetString
GL_APICALL void GL_APIENTRY GLES2GetTexParameterfv(GLenum, GLenum, GLfloat *);
#define glGetTexParameterfv GLES2GetTexParameterfv
GL_APICALL void GL_APIENTRY GLES2GetTexParameteriv(GLenum, GLenum, GLint *);
#define glGetTexParameteriv GLES2GetTexParameteriv
GL_APICALL void GL_APIENTRY GLES2GetUniformfv(GLuint, GLint, GLfloat *);
#define glGetUniformfv GLES2GetUniformfv
GL_APICALL void GL_APIENTRY GLES2GetUniformiv(GLuint, GLint, GLint *);
#define glGetUniformiv GLES2GetUniformiv
GL_APICALL GLint GL_APIENTRY GLES2GetUniformLocation(GLuint, const GLchar *);
#define glGetUniformLocation GLES2GetUniformLocation
GL_APICALL void GL_APIENTRY GLES2GetVertexAttribfv(GLuint, GLenum, GLfloat *);
#define glGetVertexAttribfv GLES2GetVertexAttribfv
GL_APICALL void GL_APIENTRY GLES2GetVertexAttribiv(GLuint, GLenum, GLint *);
#define glGetVertexAttribiv GLES2GetVertexAttribiv
GL_APICALL void GL_APIENTRY GLES2GetVertexAttribPointerv(GLuint, GLenum, void **);
#define glGetVertexAttribPointerv GLES2GetVertexAttribPointerv
GL_APICALL void GL_APIENTRY GLES2Hint(GLenum, GLenum);
#define glHint GLES2Hint
GL_APICALL GLboolean GL_APIENTRY GLES2IsBuffer(GLuint);
#define glIsBuffer GLES2IsBuffer
GL_APICALL GLboolean GL_APIENTRY GLES2IsEnabled(GLenum);
#define glIsEnabled GLES2IsEnabled
GL_APICALL GLboolean GL_APIENTRY GLES2IsFramebuffer(GLuint);
#define glIsFramebuffer GLES2IsFramebuffer
GL_APICALL GLboolean GL_APIENTRY GLES2IsProgram(GLuint);
#define glIsProgram GLES2IsProgram
GL_APICALL GLboolean GL_APIENTRY GLES2IsRenderbuffer(GLuint);
#define glIsRenderbuffer GLES2IsRenderbuffer
GL_APICALL GLboolean GL_APIENTRY GLES2IsShader(GLuint);
#define glIsShader GLES2IsShader
GL_APICALL GLboolean GL_APIENTRY GLES2IsTexture(GLuint);
#define glIsTexture GLES2IsTexture
GL_APICALL void GL_APIENTRY GLES2LineWidth(GLfloat);
#define glLineWidth GLES2LineWidth
GL_APICALL void GL_APIENTRY GLES2LinkProgram(GLuint);
#define glLinkProgram GLES2LinkProgram
GL_APICALL void GL_APIENTRY GLES2PixelStorei(GLenum, GLint);
#define glPixelStorei GLES2PixelStorei
GL_APICALL void GL_APIENTRY GLES2PolygonOffset(GLfloat, GLfloat);
#define glPolygonOffset GLES2PolygonOffset
GL_APICALL void GL_APIENTRY GLES2ReadPixels(GLint, GLint, GLsizei, GLsizei, GLenum, GLenum, void *);
#define glReadPixels GLES2ReadPixels
GL_APICALL void GL_APIENTRY GLES2ReleaseShaderCompiler(void);
#define glReleaseShaderCompiler GLES2ReleaseShaderCompiler
GL_APICALL void GL_APIENTRY GLES2RenderbufferStorage(GLenum, GLenum, GLsizei, GLsizei);
#define glRenderbufferStorage GLES2RenderbufferStorage
GL_APICALL void GL_APIENTRY GLES2SampleCoverage(GLfloat, GLboolean);
#define glSampleCoverage GLES2SampleCoverage
GL_APICALL void GL_APIENTRY GLES2Scissor(GLint, GLint, GLsizei, GLsizei);
#define glScissor GLES2Scissor
GL_APICALL void GL_APIENTRY GLES2ShaderBinary(GLsizei, const GLuint *, GLenum, const void *, GLsizei);
#define glShaderBinary GLES2ShaderBinary
GL_APICALL void GL_APIENTRY GLES2ShaderSource(GLuint, GLsizei, const GLchar *const*, const GLint *);
#define glShaderSource GLES2ShaderSource
GL_APICALL void GL_APIENTRY GLES2StencilFunc(GLenum, GLint, GLuint);
#define glStencilFunc GLES2StencilFunc
GL_APICALL void GL_APIENTRY GLES2StencilFuncSeparate(GLenum, GLenum, GLint, GLuint);
#define glStencilFuncSeparate GLES2StencilFuncSeparate
GL_APICALL void GL_APIENTRY GLES2StencilMask(GLuint);
#define glStencilMask GLES2StencilMask
GL_APICALL void GL_APIENTRY GLES2StencilMaskSeparate(GLenum, GLuint);
#define glStencilMaskSeparate GLES2StencilMaskSeparate
GL_APICALL void GL_APIENTRY GLES2StencilOp(GLenum, GLenum, GLenum);
#define glStencilOp GLES2StencilOp
GL_APICALL void GL_APIENTRY GLES2StencilOpSeparate(GLenum, GLenum, GLenum, GLenum);
#define glStencilOpSeparate GLES2StencilOpSeparate
GL_APICALL void GL_APIENTRY GLES2TexImage2D(GLenum, GLint, GLint, GLsizei, GLsizei, GLint, GLenum, GLenum, const void *);
#define glTexImage2D GLES2TexImage2D
GL_APICALL void GL_APIENTRY GLES2TexParameterf(GLenum, GLenum, GLfloat);
#define glTexParameterf GLES2TexParameterf
GL_APICALL void GL_APIENTRY GLES2TexParameterfv(GLenum, GLenum, const GLfloat *);
#define glTexParameterfv GLES2TexParameterfv
GL_APICALL void GL_APIENTRY GLES2TexParameteri(GLenum, GLenum, GLint);
#define glTexParameteri GLES2TexParameteri
GL_APICALL void GL_APIENTRY GLES2TexParameteriv(GLenum, GLenum, const GLint *);
#define glTexParameteriv GLES2TexParameteriv
GL_APICALL void GL_APIENTRY GLES2TexSubImage2D(GLenum, GLint, GLint, GLint, GLsizei, GLsizei, GLenum, GLenum, const void *);
#define glTexSubImage2D GLES2TexSubImage2D
GL_APICALL void GL_APIENTRY GLES2Uniform1f(GLint, GLfloat);
#define glUniform1f GLES2Uniform1f
GL_APICALL void GL_APIENTRY GLES2Uniform1fv(GLint, GLsizei, const GLfloat *);
#define glUniform1fv GLES2Uniform1fv
GL_APICALL void GL_APIENTRY GLES2Uniform1i(GLint, GLint);
#define glUniform1i GLES2Uniform1i
GL_APICALL void GL_APIENTRY GLES2Uniform1iv(GLint, GLsizei, const GLint *);
#define glUniform1iv GLES2Uniform1iv
GL_APICALL void GL_APIENTRY GLES2Uniform2f(GLint, GLfloat, GLfloat);
#define glUniform2f GLES2Uniform2f
GL_APICALL void GL_APIENTRY GLES2Uniform2fv(GLint, GLsizei, const GLfloat *);
#define glUniform2fv GLES2Uniform2fv
GL_APICALL void GL_APIENTRY GLES2Uniform2i(GLint, GLint, GLint);
#define glUniform2i GLES2Uniform2i
GL_APICALL void GL_APIENTRY GLES2Uniform2iv(GLint, GLsizei, const GLint *);
#define glUniform2iv GLES2Uniform2iv
GL_APICALL void GL_APIENTRY GLES2Uniform3f(GLint, GLfloat, GLfloat, GLfloat);
#define glUniform3f GLES2Uniform3f
GL_APICALL void GL_APIENTRY GLES2Uniform3fv(GLint, GLsizei, const GLfloat *);
#define glUniform3fv GLES2Uniform3fv
GL_APICALL void GL_APIENTRY GLES2Uniform3i(GLint, GLint, GLint, GLint);
#define glUniform3i GLES2Uniform3i
GL_APICALL void GL_APIENTRY GLES2Uniform3iv(GLint, GLsizei, const GLint *);
#define glUniform3iv GLES2Uniform3iv
GL_APICALL void GL_APIENTRY GLES2Uniform4f(GLint, GLfloat, GLfloat, GLfloat, GLfloat);
#define glUniform4f GLES2Uniform4f
GL_APICALL void GL_APIENTRY GLES2Uniform4fv(GLint, GLsizei, const GLfloat *);
#define glUniform4fv GLES2Uniform4fv
GL_APICALL void GL_APIENTRY GLES2Uniform4i(GLint, GLint, GLint, GLint, GLint);
#define glUniform4i GLES2Uniform4i
GL_APICALL void GL_APIENTRY GLES2Uniform4iv(GLint, GLsizei, const GLint *);
#define glUniform4iv GLES2Uniform4iv
GL_APICALL void GL_APIENTRY GLES2UniformMatrix2fv(GLint, GLsizei, GLboolean, const GLfloat *);
#define glUniformMatrix2fv GLES2UniformMatrix2fv
GL_APICALL void GL_APIENTRY GLES2UniformMatrix3fv(GLint, GLsizei, GLboolean, const GLfloat *);
#define glUniformMatrix3fv GLES2UniformMatrix3fv
GL_APICALL void GL_APIENTRY GLES2UniformMatrix4fv(GLint, GLsizei, GLboolean, const GLfloat *);
#define glUniformMatrix4fv GLES2UniformMatrix4fv
GL_APICALL void GL_APIENTRY GLES2UseProgram(GLuint);
#define glUseProgram GLES2UseProgram
GL_APICALL void GL_APIENTRY GLES2ValidateProgram(GLuint);
#define glValidateProgram GLES2ValidateProgram
GL_APICALL void GL_APIENTRY GLES2VertexAttrib1f(GLuint, GLfloat);
#define glVertexAttrib1f GLES2VertexAttrib1f
GL_APICALL void GL_APIENTRY GLES2VertexAttrib1fv(GLuint, const GLfloat *);
#define glVertexAttrib1fv GLES2VertexAttrib1fv
GL_APICALL void GL_APIENTRY GLES2VertexAttrib2f(GLuint, GLfloat, GLfloat);
#define glVertexAttrib2f GLES2VertexAttrib2f
GL_APICALL void GL_APIENTRY GLES2VertexAttrib2fv(GLuint, const GLfloat *);
#define glVertexAttrib2fv GLES2VertexAttrib2fv
GL_APICALL void GL_APIENTRY GLES2VertexAttrib3f(GLuint, GLfloat, GLfloat, GLfloat);
#define glVertexAttrib3f GLES2VertexAttrib3f
GL_APICALL void GL_APIENTRY GLES2VertexAttrib3fv(GLuint, const GLfloat *);
#define glVertexAttrib3fv GLES2VertexAttrib3fv
GL_APICALL void GL_APIENTRY GLES2VertexAttrib4f(GLuint, GLfloat, GLfloat, GLfloat, GLfloat);
#define glVertexAttrib4f GLES2VertexAttrib4f
GL_APICALL void GL_APIENTRY GLES2VertexAttrib4fv(GLuint, const GLfloat *);
#define glVertexAttrib4fv GLES2VertexAttrib4fv
GL_APICALL void GL_APIENTRY GLES2VertexAttribPointer(GLuint, GLint, GLenum, GLboolean, GLsizei, const void *);
#define glVertexAttribPointer GLES2VertexAttribPointer
GL_APICALL void GL_APIENTRY GLES2Viewport(GLint, GLint, GLsizei, GLsizei);
#define glViewport GLES2Viewport
#endif

/* GL_ANGLE_framebuffer_blit */
#ifndef GL_ANGLE_framebuffer_blit
#define GL_ANGLE_framebuffer_blit 1
GL_APICALL void GL_APIENTRY GLES2BlitFramebufferANGLE(GLint, GLint, GLint, GLint, GLint, GLint, GLint, GLint, GLbitfield, GLenum);
#define glBlitFramebufferANGLE GLES2BlitFramebufferANGLE
#endif

/* GL_ANGLE_framebuffer_multisample */
#ifndef GL_ANGLE_framebuffer_multisample
#define GL_ANGLE_framebuffer_multisample 1
GL_APICALL void GL_APIENTRY GLES2RenderbufferStorageMultisampleANGLE(GLenum, GLsizei, GLenum, GLsizei, GLsizei);
#define glRenderbufferStorageMultisampleANGLE GLES2RenderbufferStorageMultisampleANGLE
#endif

/* GL_ANGLE_instanced_arrays */
#ifndef GL_ANGLE_instanced_arrays
#define GL_ANGLE_instanced_arrays 1
GL_APICALL void GL_APIENTRY GLES2DrawArraysInstancedANGLE(GLenum, GLint, GLsizei, GLsizei);
#define glDrawArraysInstancedANGLE GLES2DrawArraysInstancedANGLE
GL_APICALL void GL_APIENTRY GLES2DrawElementsInstancedANGLE(GLenum, GLsizei, GLenum, const void *, GLsizei);
#define glDrawElementsInstancedANGLE GLES2DrawElementsInstancedANGLE
GL_APICALL void GL_APIENTRY GLES2VertexAttribDivisorANGLE(GLuint, GLuint);
#define glVertexAttribDivisorANGLE GLES2VertexAttribDivisorANGLE
#endif

/* GL_ANGLE_depth_texture */
#ifndef GL_ANGLE_depth_texture
#define GL_ANGLE_depth_texture 1
#endif

/* GL_APPLE_framebuffer_multisample */
#ifndef GL_APPLE_framebuffer_multisample
#define GL_APPLE_framebuffer_multisample 1
GL_APICALL void GL_APIENTRY GLES2RenderbufferStorageMultisampleAPPLE(GLenum, GLsizei, GLenum, GLsizei, GLsizei);
#define glRenderbufferStorageMultisampleAPPLE GLES2RenderbufferStorageMultisampleAPPLE
GL_APICALL void GL_APIENTRY GLES2ResolveMultisampleFramebufferAPPLE(void);
#define glResolveMultisampleFramebufferAPPLE GLES2ResolveMultisampleFramebufferAPPLE
#endif

/* GL_APPLE_texture_max_level */
#ifndef GL_APPLE_texture_max_level
#define GL_APPLE_texture_max_level 1
#endif

/* GL_ARM_rgba8 */
#ifndef GL_ARM_rgba8
#define GL_ARM_rgba8 1
#endif

/* GL_EXT_texture_type_2_10_10_10_REV */
#ifndef GL_EXT_texture_type_2_10_10_10_REV
#define GL_EXT_texture_type_2_10_10_10_REV 1
#endif

/* GL_EXT_discard_framebuffer */
#ifndef GL_EXT_discard_framebuffer
#define GL_EXT_discard_framebuffer 1
GL_APICALL void GL_APIENTRY GLES2DiscardFramebufferEXT(GLenum, GLsizei, const GLenum *);
#define glDiscardFramebufferEXT GLES2DiscardFramebufferEXT
#endif

/* GL_EXT_blend_minmax */
#ifndef GL_EXT_blend_minmax
#define GL_EXT_blend_minmax 1
GL_APICALL void GL_APIENTRY GLES2BlendEquationEXT(GLenum);
#define glBlendEquationEXT GLES2BlendEquationEXT
#endif

/* GL_EXT_shader_texture_lod */
#ifndef GL_EXT_shader_texture_lod
#define GL_EXT_shader_texture_lod 1
#endif

/* GL_EXT_occlusion_query_boolean */
#ifndef GL_EXT_occlusion_query_boolean
#define GL_EXT_occlusion_query_boolean 1
GL_APICALL void GL_APIENTRY GLES2GenQueriesEXT(GLsizei, GLuint *);
#define glGenQueriesEXT GLES2GenQueriesEXT
GL_APICALL void GL_APIENTRY GLES2DeleteQueriesEXT(GLsizei, const GLuint *);
#define glDeleteQueriesEXT GLES2DeleteQueriesEXT
GL_APICALL GLboolean GL_APIENTRY GLES2IsQueryEXT(GLuint);
#define glIsQueryEXT GLES2IsQueryEXT
GL_APICALL void GL_APIENTRY GLES2BeginQueryEXT(GLenum, GLuint);
#define glBeginQueryEXT GLES2BeginQueryEXT
GL_APICALL void GL_APIENTRY GLES2EndQueryEXT(GLenum);
#define glEndQueryEXT GLES2EndQueryEXT
GL_APICALL void GL_APIENTRY GLES2GetQueryivEXT(GLenum, GLenum, GLint *);
#define glGetQueryivEXT GLES2GetQueryivEXT
GL_APICALL void GL_APIENTRY GLES2GetQueryObjectuivEXT(GLuint, GLenum, GLuint *);
#define glGetQueryObjectuivEXT GLES2GetQueryObjectuivEXT
#endif

/* GL_EXT_shadow_samplers */
#ifndef GL_EXT_shadow_samplers
#define GL_EXT_shadow_samplers 1
#endif

/* GL_EXT_texture_rg */
#ifndef GL_EXT_texture_rg
#define GL_EXT_texture_rg 1
#endif

/* GL_EXT_texture_storage */
#ifndef GL_EXT_texture_storage
#define GL_EXT_texture_storage 1
GL_APICALL void GL_APIENTRY GLES2TexStorage1DEXT(GLenum, GLsizei, GLenum, GLsizei);
#define glTexStorage1DEXT GLES2TexStorage1DEXT
GL_APICALL void GL_APIENTRY GLES2TexStorage2DEXT(GLenum, GLsizei, GLenum, GLsizei, GLsizei);
#define glTexStorage2DEXT GLES2TexStorage2DEXT
GL_APICALL void GL_APIENTRY GLES2TexStorage3DEXT(GLenum, GLsizei, GLenum, GLsizei, GLsizei, GLsizei);
#define glTexStorage3DEXT GLES2TexStorage3DEXT
GL_APICALL void GL_APIENTRY GLES2TextureStorage1DEXT(GLuint, GLenum, GLsizei, GLenum, GLsizei);
#define glTextureStorage1DEXT GLES2TextureStorage1DEXT
GL_APICALL void GL_APIENTRY GLES2TextureStorage2DEXT(GLuint, GLenum, GLsizei, GLenum, GLsizei, GLsizei);
#define glTextureStorage2DEXT GLES2TextureStorage2DEXT
GL_APICALL void GL_APIENTRY GLES2TextureStorage3DEXT(GLuint, GLenum, GLsizei, GLenum, GLsizei, GLsizei, GLsizei);
#define glTextureStorage3DEXT GLES2TextureStorage3DEXT
#endif

/* GL_EXT_map_buffer_range */
#ifndef GL_EXT_map_buffer_range
#define GL_EXT_map_buffer_range 1
GL_APICALL void * GL_APIENTRY GLES2MapBufferRangeEXT(GLenum, GLintptr, GLsizeiptr, GLbitfield);
#define glMapBufferRangeEXT GLES2MapBufferRangeEXT
GL_APICALL void GL_APIENTRY GLES2FlushMappedBufferRangeEXT(GLenum, GLintptr, GLsizeiptr);
#define glFlushMappedBufferRangeEXT GLES2FlushMappedBufferRangeEXT
#endif

/* GL_EXT_instanced_arrays */
#ifndef GL_EXT_instanced_arrays
#define GL_EXT_instanced_arrays 1
GL_APICALL void GL_APIENTRY GLES2DrawArraysInstancedEXT(GLenum, GLint, GLsizei, GLsizei);
#define glDrawArraysInstancedEXT GLES2DrawArraysInstancedEXT
GL_APICALL void GL_APIENTRY GLES2DrawElementsInstancedEXT(GLenum, GLsizei, GLenum, const void *, GLsizei);
#define glDrawElementsInstancedEXT GLES2DrawElementsInstancedEXT
GL_APICALL void GL_APIENTRY GLES2VertexAttribDivisorEXT(GLuint, GLuint);
#define glVertexAttribDivisorEXT GLES2VertexAttribDivisorEXT
#endif

/* GL_EXT_draw_instanced */
#ifndef GL_EXT_draw_instanced
#define GL_EXT_draw_instanced 1
#endif

/* GL_NV_draw_buffers */
#ifndef GL_NV_draw_buffers
#define GL_NV_draw_buffers 1
GL_APICALL void GL_APIENTRY GLES2DrawBuffersNV(GLsizei, const GLenum *);
#define glDrawBuffersNV GLES2DrawBuffersNV
#endif

/* GL_NV_fbo_color_attachments */
#ifndef GL_NV_fbo_color_attachments
#define GL_NV_fbo_color_attachments 1
#endif

/* GL_NV_read_buffer */
#ifndef GL_NV_read_buffer
#define GL_NV_read_buffer 1
GL_APICALL void GL_APIENTRY GLES2ReadBufferNV(GLenum);
#define glReadBufferNV GLES2ReadBufferNV
#endif

/* GL_NV_draw_instanced */
#ifndef GL_NV_draw_instanced
#define GL_NV_draw_instanced 1
GL_APICALL void GL_APIENTRY GLES2DrawArraysInstancedNV(GLenum, GLint, GLsizei, GLsizei);
#define glDrawArraysInstancedNV GLES2DrawArraysInstancedNV
GL_APICALL void GL_APIENTRY GLES2DrawElementsInstancedNV(GLenum, GLsizei, GLenum, const void *, GLsizei);
#define glDrawElementsInstancedNV GLES2DrawElementsInstancedNV
#endif

/* GL_NV_framebuffer_blit */
#ifndef GL_NV_framebuffer_blit
#define GL_NV_framebuffer_blit 1
GL_APICALL void GL_APIENTRY GLES2BlitFramebufferNV(GLint, GLint, GLint, GLint, GLint, GLint, GLint, GLint, GLbitfield, GLenum);
#define glBlitFramebufferNV GLES2BlitFramebufferNV
#endif

/* GL_NV_framebuffer_multisample */
#ifndef GL_NV_framebuffer_multisample
#define GL_NV_framebuffer_multisample 1
GL_APICALL void GL_APIENTRY GLES2RenderbufferStorageMultisampleNV(GLenum, GLsizei, GLenum, GLsizei, GLsizei);
#define glRenderbufferStorageMultisampleNV GLES2RenderbufferStorageMultisampleNV
#endif

/* GL_NV_instanced_arrays */
#ifndef GL_NV_instanced_arrays
#define GL_NV_instanced_arrays 1
GL_APICALL void GL_APIENTRY GLES2VertexAttribDivisorNV(GLuint, GLuint);
#define glVertexAttribDivisorNV GLES2VertexAttribDivisorNV
#endif

/* GL_NV_shadow_samplers_array */
#ifndef GL_NV_shadow_samplers_array
#define GL_NV_shadow_samplers_array 1
#endif

/* GL_NV_shadow_samplers_cube */
#ifndef GL_NV_shadow_samplers_cube
#define GL_NV_shadow_samplers_cube 1
#endif

/* GL_OES_depth24 */
#ifndef GL_OES_depth24
#define GL_OES_depth24 1
#endif

/* GL_OES_element_index_uint */
#ifndef GL_OES_element_index_uint
#define GL_OES_element_index_uint 1
#endif

/* GL_OES_rgb8_rgba8 */
#ifndef GL_OES_rgb8_rgba8
#define GL_OES_rgb8_rgba8 1
#endif

/* GL_OES_texture_3D */
#ifndef GL_OES_texture_3D
#define GL_OES_texture_3D 1
GL_APICALL void GL_APIENTRY GLES2TexImage3DOES(GLenum, GLint, GLenum, GLsizei, GLsizei, GLsizei, GLint, GLenum, GLenum, const void *);
#define glTexImage3DOES GLES2TexImage3DOES
GL_APICALL void GL_APIENTRY GLES2TexSubImage3DOES(GLenum, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLenum, GLenum, const void *);
#define glTexSubImage3DOES GLES2TexSubImage3DOES
GL_APICALL void GL_APIENTRY GLES2CopyTexSubImage3DOES(GLenum, GLint, GLint, GLint, GLint, GLint, GLint, GLsizei, GLsizei);
#define glCopyTexSubImage3DOES GLES2CopyTexSubImage3DOES
GL_APICALL void GL_APIENTRY GLES2CompressedTexImage3DOES(GLenum, GLint, GLenum, GLsizei, GLsizei, GLsizei, GLint, GLsizei, const void *);
#define glCompressedTexImage3DOES GLES2CompressedTexImage3DOES
GL_APICALL void GL_APIENTRY GLES2CompressedTexSubImage3DOES(GLenum, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLenum, GLsizei, const void *);
#define glCompressedTexSubImage3DOES GLES2CompressedTexSubImage3DOES
GL_APICALL void GL_APIENTRY GLES2FramebufferTexture3DOES(GLenum, GLenum, GLenum, GLuint, GLint, GLint);
#define glFramebufferTexture3DOES GLES2FramebufferTexture3DOES
#endif

/* GL_OES_texture_half_float_linear */
#ifndef GL_OES_texture_half_float_linear
#define GL_OES_texture_half_float_linear 1
#endif

/* GL_OES_texture_float_linear */
#ifndef GL_OES_texture_float_linear
#define GL_OES_texture_float_linear 1
#endif

/* GL_OES_texture_half_float */
#ifndef GL_OES_texture_half_float
#define GL_OES_texture_half_float 1
#endif

/* GL_OES_texture_float */
#ifndef GL_OES_texture_float
#define GL_OES_texture_float 1
#endif

/* GL_OES_vertex_half_float */
#ifndef GL_OES_vertex_half_float
#define GL_OES_vertex_half_float 1
#endif

/* GL_OES_packed_depth_stencil */
#ifndef GL_OES_packed_depth_stencil
#define GL_OES_packed_depth_stencil 1
#endif

/* GL_OES_depth_texture */
#ifndef GL_OES_depth_texture
#define GL_OES_depth_texture 1
#endif

/* GL_OES_standard_derivatives */
#ifndef GL_OES_standard_derivatives
#define GL_OES_standard_derivatives 1
#endif

/* GL_OES_vertex_array_object */
#ifndef GL_OES_vertex_array_object
#define GL_OES_vertex_array_object 1
GL_APICALL void GL_APIENTRY GLES2BindVertexArrayOES(GLuint);
#define glBindVertexArrayOES GLES2BindVertexArrayOES
GL_APICALL void GL_APIENTRY GLES2DeleteVertexArraysOES(GLsizei, const GLuint *);
#define glDeleteVertexArraysOES GLES2DeleteVertexArraysOES
GL_APICALL void GL_APIENTRY GLES2GenVertexArraysOES(GLsizei, GLuint *);
#define glGenVertexArraysOES GLES2GenVertexArraysOES
GL_APICALL GLboolean GL_APIENTRY GLES2IsVertexArrayOES(GLuint);
#define glIsVertexArrayOES GLES2IsVertexArrayOES
#endif

/* GL_OES_required_internalformat */
#ifndef GL_OES_required_internalformat
#define GL_OES_required_internalformat 1
#endif

/* GL_OES_surfaceless_context */
#ifndef GL_OES_surfaceless_context
#define GL_OES_surfaceless_context 1
#endif

/* GL_APPLE_texture_format_BGRA8888 */
#ifndef GL_APPLE_texture_format_BGRA8888
#define GL_APPLE_texture_format_BGRA8888 1
#endif

/* GL_EXT_texture_filter_anisotropic */
#ifndef GL_EXT_texture_filter_anisotropic
#define GL_EXT_texture_filter_anisotropic 1
#endif

/* GL_EXT_texture_format_BGRA8888 */
#ifndef GL_EXT_texture_format_BGRA8888
#define GL_EXT_texture_format_BGRA8888 1
#endif

/* GL_EXT_read_format_bgra */
#ifndef GL_EXT_read_format_bgra
#define GL_EXT_read_format_bgra 1
#endif

/* GL_EXT_multi_draw_arrays */
#ifndef GL_EXT_multi_draw_arrays
#define GL_EXT_multi_draw_arrays 1
GL_APICALL void GL_APIENTRY GLES2MultiDrawArraysEXT(GLenum, const GLint *, const GLsizei *, GLsizei);
#define glMultiDrawArraysEXT GLES2MultiDrawArraysEXT
GL_APICALL void GL_APIENTRY GLES2MultiDrawElementsEXT(GLenum, const GLsizei *, GLenum, const void *const*, GLsizei);
#define glMultiDrawElementsEXT GLES2MultiDrawElementsEXT
#endif

/* GL_EXT_debug_label */
#ifndef GL_EXT_debug_label
#define GL_EXT_debug_label 1
GL_APICALL void GL_APIENTRY GLES2LabelObjectEXT(GLenum, GLuint, GLsizei, const GLchar *);
#define glLabelObjectEXT GLES2LabelObjectEXT
GL_APICALL void GL_APIENTRY GLES2GetObjectLabelEXT(GLenum, GLuint, GLsizei, GLsizei *, GLchar *);
#define glGetObjectLabelEXT GLES2GetObjectLabelEXT
#endif

/* GL_EXT_debug_marker */
#ifndef GL_EXT_debug_marker
#define GL_EXT_debug_marker 1
GL_APICALL void GL_APIENTRY GLES2InsertEventMarkerEXT(GLsizei, const GLchar *);
#define glInsertEventMarkerEXT GLES2InsertEventMarkerEXT
GL_APICALL void GL_APIENTRY GLES2PushGroupMarkerEXT(GLsizei, const GLchar *);
#define glPushGroupMarkerEXT GLES2PushGroupMarkerEXT
GL_APICALL void GL_APIENTRY GLES2PopGroupMarkerEXT(void);
#define glPopGroupMarkerEXT GLES2PopGroupMarkerEXT
#endif

/* GL_EXT_disjoint_timer_query */
#ifndef GL_EXT_disjoint_timer_query
#define GL_EXT_disjoint_timer_query 1
GL_APICALL void GL_APIENTRY GLES2QueryCounterEXT(GLuint, GLenum);
#define glQueryCounterEXT GLES2QueryCounterEXT
GL_APICALL void GL_APIENTRY GLES2GetQueryObjectivEXT(GLuint, GLenum, GLint *);
#define glGetQueryObjectivEXT GLES2GetQueryObjectivEXT
GL_APICALL void GL_APIENTRY GLES2GetQueryObjecti64vEXT(GLuint, GLenum, GLint64 *);
#define glGetQueryObjecti64vEXT GLES2GetQueryObjecti64vEXT
GL_APICALL void GL_APIENTRY GLES2GetQueryObjectui64vEXT(GLuint, GLenum, GLuint64 *);
#define glGetQueryObjectui64vEXT GLES2GetQueryObjectui64vEXT
#endif

/* GL_EXT_texture_sRGB_decode */
#ifndef GL_EXT_texture_sRGB_decode
#define GL_EXT_texture_sRGB_decode 1
#endif

/* GL_EXT_separate_shader_objects */
#ifndef GL_EXT_separate_shader_objects
#define GL_EXT_separate_shader_objects 1
GL_APICALL void GL_APIENTRY GLES2UseShaderProgramEXT(GLenum, GLuint);
#define glUseShaderProgramEXT GLES2UseShaderProgramEXT
GL_APICALL void GL_APIENTRY GLES2ActiveProgramEXT(GLuint);
#define glActiveProgramEXT GLES2ActiveProgramEXT
GL_APICALL GLuint GL_APIENTRY GLES2CreateShaderProgramEXT(GLenum, const GLchar *);
#define glCreateShaderProgramEXT GLES2CreateShaderProgramEXT
GL_APICALL void GL_APIENTRY GLES2ActiveShaderProgramEXT(GLuint, GLuint);
#define glActiveShaderProgramEXT GLES2ActiveShaderProgramEXT
GL_APICALL void GL_APIENTRY GLES2BindProgramPipelineEXT(GLuint);
#define glBindProgramPipelineEXT GLES2BindProgramPipelineEXT
GL_APICALL GLuint GL_APIENTRY GLES2CreateShaderProgramvEXT(GLenum, GLsizei, const GLchar **);
#define glCreateShaderProgramvEXT GLES2CreateShaderProgramvEXT
GL_APICALL void GL_APIENTRY GLES2DeleteProgramPipelinesEXT(GLsizei, const GLuint *);
#define glDeleteProgramPipelinesEXT GLES2DeleteProgramPipelinesEXT
GL_APICALL void GL_APIENTRY GLES2GenProgramPipelinesEXT(GLsizei, GLuint *);
#define glGenProgramPipelinesEXT GLES2GenProgramPipelinesEXT
GL_APICALL void GL_APIENTRY GLES2GetProgramPipelineInfoLogEXT(GLuint, GLsizei, GLsizei *, GLchar *);
#define glGetProgramPipelineInfoLogEXT GLES2GetProgramPipelineInfoLogEXT
GL_APICALL void GL_APIENTRY GLES2GetProgramPipelineivEXT(GLuint, GLenum, GLint *);
#define glGetProgramPipelineivEXT GLES2GetProgramPipelineivEXT
GL_APICALL GLboolean GL_APIENTRY GLES2IsProgramPipelineEXT(GLuint);
#define glIsProgramPipelineEXT GLES2IsProgramPipelineEXT
GL_APICALL void GL_APIENTRY GLES2ProgramParameteriEXT(GLuint, GLenum, GLint);
#define glProgramParameteriEXT GLES2ProgramParameteriEXT
GL_APICALL void GL_APIENTRY GLES2ProgramUniform1fEXT(GLuint, GLint, GLfloat);
#define glProgramUniform1fEXT GLES2ProgramUniform1fEXT
GL_APICALL void GL_APIENTRY GLES2ProgramUniform1fvEXT(GLuint, GLint, GLsizei, const GLfloat *);
#define glProgramUniform1fvEXT GLES2ProgramUniform1fvEXT
GL_APICALL void GL_APIENTRY GLES2ProgramUniform1iEXT(GLuint, GLint, GLint);
#define glProgramUniform1iEXT GLES2ProgramUniform1iEXT
GL_APICALL void GL_APIENTRY GLES2ProgramUniform1ivEXT(GLuint, GLint, GLsizei, const GLint *);
#define glProgramUniform1ivEXT GLES2ProgramUniform1ivEXT
GL_APICALL void GL_APIENTRY GLES2ProgramUniform2fEXT(GLuint, GLint, GLfloat, GLfloat);
#define glProgramUniform2fEXT GLES2ProgramUniform2fEXT
GL_APICALL void GL_APIENTRY GLES2ProgramUniform2fvEXT(GLuint, GLint, GLsizei, const GLfloat *);
#define glProgramUniform2fvEXT GLES2ProgramUniform2fvEXT
GL_APICALL void GL_APIENTRY GLES2ProgramUniform2iEXT(GLuint, GLint, GLint, GLint);
#define glProgramUniform2iEXT GLES2ProgramUniform2iEXT
GL_APICALL void GL_APIENTRY GLES2ProgramUniform2ivEXT(GLuint, GLint, GLsizei, const GLint *);
#define glProgramUniform2ivEXT GLES2ProgramUniform2ivEXT
GL_APICALL void GL_APIENTRY GLES2ProgramUniform3fEXT(GLuint, GLint, GLfloat, GLfloat, GLfloat);
#define glProgramUniform3fEXT GLES2ProgramUniform3fEXT
GL_APICALL void GL_APIENTRY GLES2ProgramUniform3fvEXT(GLuint, GLint, GLsizei, const GLfloat *);
#define glProgramUniform3fvEXT GLES2ProgramUniform3fvEXT
GL_APICALL void GL_APIENTRY GLES2ProgramUniform3iEXT(GLuint, GLint, GLint, GLint, GLint);
#define glProgramUniform3iEXT GLES2ProgramUniform3iEXT
GL_APICALL void GL_APIENTRY GLES2ProgramUniform3ivEXT(GLuint, GLint, GLsizei, const GLint *);
#define glProgramUniform3ivEXT GLES2ProgramUniform3ivEXT
GL_APICALL void GL_APIENTRY GLES2ProgramUniform4fEXT(GLuint, GLint, GLfloat, GLfloat, GLfloat, GLfloat);
#define glProgramUniform4fEXT GLES2ProgramUniform4fEXT
GL_APICALL void GL_APIENTRY GLES2ProgramUniform4fvEXT(GLuint, GLint, GLsizei, const GLfloat *);
#define glProgramUniform4fvEXT GLES2ProgramUniform4fvEXT
GL_APICALL void GL_APIENTRY GLES2ProgramUniform4iEXT(GLuint, GLint, GLint, GLint, GLint, GLint);
#define glProgramUniform4iEXT GLES2ProgramUniform4iEXT
GL_APICALL void GL_APIENTRY GLES2ProgramUniform4ivEXT(GLuint, GLint, GLsizei, const GLint *);
#define glProgramUniform4ivEXT GLES2ProgramUniform4ivEXT
GL_APICALL void GL_APIENTRY GLES2ProgramUniformMatrix2fvEXT(GLuint, GLint, GLsizei, GLboolean, const GLfloat *);
#define glProgramUniformMatrix2fvEXT GLES2ProgramUniformMatrix2fvEXT
GL_APICALL void GL_APIENTRY GLES2ProgramUniformMatrix3fvEXT(GLuint, GLint, GLsizei, GLboolean, const GLfloat *);
#define glProgramUniformMatrix3fvEXT GLES2ProgramUniformMatrix3fvEXT
GL_APICALL void GL_APIENTRY GLES2ProgramUniformMatrix4fvEXT(GLuint, GLint, GLsizei, GLboolean, const GLfloat *);
#define glProgramUniformMatrix4fvEXT GLES2ProgramUniformMatrix4fvEXT
GL_APICALL void GL_APIENTRY GLES2UseProgramStagesEXT(GLuint, GLbitfield, GLuint);
#define glUseProgramStagesEXT GLES2UseProgramStagesEXT
GL_APICALL void GL_APIENTRY GLES2ValidateProgramPipelineEXT(GLuint);
#define glValidateProgramPipelineEXT GLES2ValidateProgramPipelineEXT
GL_APICALL void GL_APIENTRY GLES2ProgramUniform1uiEXT(GLuint, GLint, GLuint);
#define glProgramUniform1uiEXT GLES2ProgramUniform1uiEXT
GL_APICALL void GL_APIENTRY GLES2ProgramUniform2uiEXT(GLuint, GLint, GLuint, GLuint);
#define glProgramUniform2uiEXT GLES2ProgramUniform2uiEXT
GL_APICALL void GL_APIENTRY GLES2ProgramUniform3uiEXT(GLuint, GLint, GLuint, GLuint, GLuint);
#define glProgramUniform3uiEXT GLES2ProgramUniform3uiEXT
GL_APICALL void GL_APIENTRY GLES2ProgramUniform4uiEXT(GLuint, GLint, GLuint, GLuint, GLuint, GLuint);
#define glProgramUniform4uiEXT GLES2ProgramUniform4uiEXT
GL_APICALL void GL_APIENTRY GLES2ProgramUniform1uivEXT(GLuint, GLint, GLsizei, const GLuint *);
#define glProgramUniform1uivEXT GLES2ProgramUniform1uivEXT
GL_APICALL void GL_APIENTRY GLES2ProgramUniform2uivEXT(GLuint, GLint, GLsizei, const GLuint *);
#define glProgramUniform2uivEXT GLES2ProgramUniform2uivEXT
GL_APICALL void GL_APIENTRY GLES2ProgramUniform3uivEXT(GLuint, GLint, GLsizei, const GLuint *);
#define glProgramUniform3uivEXT GLES2ProgramUniform3uivEXT
GL_APICALL void GL_APIENTRY GLES2ProgramUniform4uivEXT(GLuint, GLint, GLsizei, const GLuint *);
#define glProgramUniform4uivEXT GLES2ProgramUniform4uivEXT
GL_APICALL void GL_APIENTRY GLES2ProgramUniformMatrix2x3fvEXT(GLuint, GLint, GLsizei, GLboolean, const GLfloat *);
#define glProgramUniformMatrix2x3fvEXT GLES2ProgramUniformMatrix2x3fvEXT
GL_APICALL void GL_APIENTRY GLES2ProgramUniformMatrix3x2fvEXT(GLuint, GLint, GLsizei, GLboolean, const GLfloat *);
#define glProgramUniformMatrix3x2fvEXT GLES2ProgramUniformMatrix3x2fvEXT
GL_APICALL void GL_APIENTRY GLES2ProgramUniformMatrix2x4fvEXT(GLuint, GLint, GLsizei, GLboolean, const GLfloat *);
#define glProgramUniformMatrix2x4fvEXT GLES2ProgramUniformMatrix2x4fvEXT
GL_APICALL void GL_APIENTRY GLES2ProgramUniformMatrix4x2fvEXT(GLuint, GLint, GLsizei, GLboolean, const GLfloat *);
#define glProgramUniformMatrix4x2fvEXT GLES2ProgramUniformMatrix4x2fvEXT
GL_APICALL void GL_APIENTRY GLES2ProgramUniformMatrix3x4fvEXT(GLuint, GLint, GLsizei, GLboolean, const GLfloat *);
#define glProgramUniformMatrix3x4fvEXT GLES2ProgramUniformMatrix3x4fvEXT
GL_APICALL void GL_APIENTRY GLES2ProgramUniformMatrix4x3fvEXT(GLuint, GLint, GLsizei, GLboolean, const GLfloat *);
#define glProgramUniformMatrix4x3fvEXT GLES2ProgramUniformMatrix4x3fvEXT
#endif

/* GL_EXT_sRGB */
#ifndef GL_EXT_sRGB
#define GL_EXT_sRGB 1
#endif

/* GL_EXT_multisampled_render_to_texture */
#ifndef GL_EXT_multisampled_render_to_texture
#define GL_EXT_multisampled_render_to_texture 1
GL_APICALL void GL_APIENTRY GLES2RenderbufferStorageMultisampleEXT(GLenum, GLsizei, GLenum, GLsizei, GLsizei);
#define glRenderbufferStorageMultisampleEXT GLES2RenderbufferStorageMultisampleEXT
GL_APICALL void GL_APIENTRY GLES2FramebufferTexture2DMultisampleEXT(GLenum, GLenum, GLenum, GLuint, GLint, GLsizei);
#define glFramebufferTexture2DMultisampleEXT GLES2FramebufferTexture2DMultisampleEXT
#endif

/* GL_EXT_robustness */
#ifndef GL_EXT_robustness
#define GL_EXT_robustness 1
GL_APICALL GLenum GL_APIENTRY GLES2GetGraphicsResetStatusEXT(void);
#define glGetGraphicsResetStatusEXT GLES2GetGraphicsResetStatusEXT
GL_APICALL void GL_APIENTRY GLES2ReadnPixelsEXT(GLint, GLint, GLsizei, GLsizei, GLenum, GLenum, GLsizei, void *);
#define glReadnPixelsEXT GLES2ReadnPixelsEXT
GL_APICALL void GL_APIENTRY GLES2GetnUniformfvEXT(GLuint, GLint, GLsizei, GLfloat *);
#define glGetnUniformfvEXT GLES2GetnUniformfvEXT
GL_APICALL void GL_APIENTRY GLES2GetnUniformivEXT(GLuint, GLint, GLsizei, GLint *);
#define glGetnUniformivEXT GLES2GetnUniformivEXT
#endif

/* GL_KHR_debug */
#ifndef GL_KHR_debug
#define GL_KHR_debug 1
GL_APICALL void GL_APIENTRY GLES2DebugMessageControl(GLenum, GLenum, GLenum, GLsizei, const GLuint *, GLboolean);
#define glDebugMessageControl GLES2DebugMessageControl
GL_APICALL void GL_APIENTRY GLES2DebugMessageInsert(GLenum, GLenum, GLuint, GLenum, GLsizei, const GLchar *);
#define glDebugMessageInsert GLES2DebugMessageInsert
GL_APICALL void GL_APIENTRY GLES2DebugMessageCallback(GLDEBUGPROC, const void *);
#define glDebugMessageCallback GLES2DebugMessageCallback
GL_APICALL GLuint GL_APIENTRY GLES2GetDebugMessageLog(GLuint, GLsizei, GLenum *, GLenum *, GLuint *, GLenum *, GLsizei *, GLchar *);
#define glGetDebugMessageLog GLES2GetDebugMessageLog
GL_APICALL void GL_APIENTRY GLES2PushDebugGroup(GLenum, GLuint, GLsizei, const GLchar *);
#define glPushDebugGroup GLES2PushDebugGroup
GL_APICALL void GL_APIENTRY GLES2PopDebugGroup(void);
#define glPopDebugGroup GLES2PopDebugGroup
GL_APICALL void GL_APIENTRY GLES2ObjectLabel(GLenum, GLuint, GLsizei, const GLchar *);
#define glObjectLabel GLES2ObjectLabel
GL_APICALL void GL_APIENTRY GLES2GetObjectLabel(GLenum, GLuint, GLsizei, GLsizei *, GLchar *);
#define glGetObjectLabel GLES2GetObjectLabel
GL_APICALL void GL_APIENTRY GLES2ObjectPtrLabel(const void *, GLsizei, const GLchar *);
#define glObjectPtrLabel GLES2ObjectPtrLabel
GL_APICALL void GL_APIENTRY GLES2GetObjectPtrLabel(const void *, GLsizei, GLsizei *, GLchar *);
#define glGetObjectPtrLabel GLES2GetObjectPtrLabel
GL_APICALL void GL_APIENTRY GLES2GetPointerv(GLenum, void **);
#define glGetPointerv GLES2GetPointerv
GL_APICALL void GL_APIENTRY GLES2DebugMessageControlKHR(GLenum, GLenum, GLenum, GLsizei, const GLuint *, GLboolean);
#define glDebugMessageControlKHR GLES2DebugMessageControlKHR
GL_APICALL void GL_APIENTRY GLES2DebugMessageInsertKHR(GLenum, GLenum, GLuint, GLenum, GLsizei, const GLchar *);
#define glDebugMessageInsertKHR GLES2DebugMessageInsertKHR
GL_APICALL void GL_APIENTRY GLES2DebugMessageCallbackKHR(GLDEBUGPROCKHR, const void *);
#define glDebugMessageCallbackKHR GLES2DebugMessageCallbackKHR
GL_APICALL GLuint GL_APIENTRY GLES2GetDebugMessageLogKHR(GLuint, GLsizei, GLenum *, GLenum *, GLuint *, GLenum *, GLsizei *, GLchar *);
#define glGetDebugMessageLogKHR GLES2GetDebugMessageLogKHR
GL_APICALL void GL_APIENTRY GLES2PushDebugGroupKHR(GLenum, GLuint, GLsizei, const GLchar *);
#define glPushDebugGroupKHR GLES2PushDebugGroupKHR
GL_APICALL void GL_APIENTRY GLES2PopDebugGroupKHR(void);
#define glPopDebugGroupKHR GLES2PopDebugGroupKHR
GL_APICALL void GL_APIENTRY GLES2ObjectLabelKHR(GLenum, GLuint, GLsizei, const GLchar *);
#define glObjectLabelKHR GLES2ObjectLabelKHR
GL_APICALL void GL_APIENTRY GLES2GetObjectLabelKHR(GLenum, GLuint, GLsizei, GLsizei *, GLchar *);
#define glGetObjectLabelKHR GLES2GetObjectLabelKHR
GL_APICALL void GL_APIENTRY GLES2ObjectPtrLabelKHR(const void *, GLsizei, const GLchar *);
#define glObjectPtrLabelKHR GLES2ObjectPtrLabelKHR
GL_APICALL void GL_APIENTRY GLES2GetObjectPtrLabelKHR(const void *, GLsizei, GLsizei *, GLchar *);
#define glGetObjectPtrLabelKHR GLES2GetObjectPtrLabelKHR
GL_APICALL void GL_APIENTRY GLES2GetPointervKHR(GLenum, void **);
#define glGetPointervKHR GLES2GetPointervKHR
#endif

/* GL_NV_read_buffer_front */
#ifndef GL_NV_read_buffer_front
#define GL_NV_read_buffer_front 1
#endif

/* GL_NV_read_depth */
#ifndef GL_NV_read_depth
#define GL_NV_read_depth 1
#endif

/* GL_NV_read_stencil */
#ifndef GL_NV_read_stencil
#define GL_NV_read_stencil 1
#endif

/* GL_NV_read_depth_stencil */
#ifndef GL_NV_read_depth_stencil
#define GL_NV_read_depth_stencil 1
#endif

/* GL_NV_texture_border_clamp */
#ifndef GL_NV_texture_border_clamp
#define GL_NV_texture_border_clamp 1
#endif

/* GL_OES_depth32 */
#ifndef GL_OES_depth32
#define GL_OES_depth32 1
#endif

/* GL_OES_mapbuffer */
#ifndef GL_OES_mapbuffer
#define GL_OES_mapbuffer 1
GL_APICALL void * GL_APIENTRY GLES2MapBufferOES(GLenum, GLenum);
#define glMapBufferOES GLES2MapBufferOES
GL_APICALL GLboolean GL_APIENTRY GLES2UnmapBufferOES(GLenum);
#define glUnmapBufferOES GLES2UnmapBufferOES
GL_APICALL void GL_APIENTRY GLES2GetBufferPointervOES(GLenum, GLenum, void **);
#define glGetBufferPointervOES GLES2GetBufferPointervOES
#endif

/* GL_OES_stencil1 */
#ifndef GL_OES_stencil1
#define GL_OES_stencil1 1
#endif

/* GL_OES_stencil4 */
#ifndef GL_OES_stencil4
#define GL_OES_stencil4 1
#endif

#ifdef __cplusplus
}
#endif

#endif
