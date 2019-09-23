#ifndef __TINYOPENGL__
#define __TINYOPENGL__

#define GL_DEBUG 1

//These are windows specific
#define WGL_CONTEXT_MAJOR_VERSION               0x2091
#define WGL_CONTEXT_MINOR_VERSION               0x2092
#define WGL_CONTEXT_LAYER_PLANE                 0x2093
#define WGL_CONTEXT_FLAGS                       0x2094
#define WGL_CONTEXT_PROFILE_MASK                0x9126
#define WGL_CONTEXT_DEBUG_BIT                   0x0001
#define WGL_CONTEXT_FORWARD_COMPATIBLE_BIT      0x0002
#define WGL_CONTEXT_CORE_PROFILE_BIT            0x00000001
#define WGL_CONTEXT_COMPATIBILITY_PROFILE_BIT   0x00000002
#define WGL_CONTEXT_PROFILE_MASK_ARB            0x9126
#define WGL_CONTEXT_CORE_PROFILE_BIT_ARB        0x00000001

//Other GL defs
#define GL_NUM_EXTENSIONS                         0x821D
#define GL_STATIC_DRAW                            0x88E4
#define GL_DYNAMIC_DRAW                           0x88E8
#define GL_STREAM_DRAW                            0x88E0
#define DEBUG_OUTPUT_SYNCHRONOUS                  0x8242
        
#define DEBUG_SEVERITY_HIGH                       0x9146
#define DEBUG_SEVERITY_MEDIUM                     0x9147
#define DEBUG_SEVERITY_LOW                        0x9148
#define DEBUG_SEVERITY_NOTIFICATION               0x826B 

#define DEBUG_SOURCE_API                          0x8246
#define DEBUG_SOURCE_WINDOW_SYSTEM                0x8247
#define DEBUG_SOURCE_SHADER_COMPILER              0x8248
#define DEBUG_SOURCE_THIRD_PARTY                  0x8249
#define DEBUG_SOURCE_APPLICATION                  0x824A
#define DEBUG_SOURCE_OTHER                        0x824B
#define DEBUG_SOURCE_API                          0x8246
#define DEBUG_SOURCE_WINDOW_SYSTEM                0x8247
#define DEBUG_SOURCE_SHADER_COMPILER              0x8248
#define DEBUG_SOURCE_THIRD_PARTY                  0x8249
#define DEBUG_SOURCE_APPLICATION                  0x824A
#define DEBUG_SOURCE_OTHER                        0x824B
#define DEBUG_TYPE_ERROR                          0x824C
#define DEBUG_TYPE_DEPRECATED_BEHAVIOR            0x824D
#define GL_INVALID_INDEX                          0xFFFFFFFFu
#define DEBUG_TYPE_UNDEFINED_BEHAVIOR             0x824E
#define DEBUG_TYPE_PORTABILITY                    0x824F
#define DEBUG_TYPE_PERFORMANCE                    0x8250
#define DEBUG_TYPE_OTHER                          0x8251
#define DEBUG_TYPE_MARKER                         0x8268
#define DEBUG_TYPE_PUSH_GROUP                     0x8269  
#define DEBUG_TYPE_POP_GROUP                      0x826A
#define GL_FRAMEBUFFER_COMPLETE                   0x8CD5  
#define WGL_CONTEXT_FORWARD_COMPATIBLE_BIT_ARB    0x0002
#define GL_ARRAY_BUFFER                           0x8892
#define GL_ELEMENT_ARRAY_BUFFER                   0x8893
#define GL_UNIFORM_BUFFER                         0x8A11
#define GL_FRAGMENT_SHADER                        0x8B30
#define GL_VERTEX_SHADER                          0x8B31
#define GL_COMPILE_STATUS                         0x8B81
#define GL_LINK_STATUS                            0x8B82

#define GL_TEXTURE_2D_ARRAY                       0x8C1A
#define GL_MAX_ARRAY_TEXTURE_LAYERS               0x88FF
#define GL_MAX_TEXTURE_IMAGE_UNITS                0x8872
#define GL_TEXTURE_CUBE_MAP                       0x8513
#define GL_TEXTURE_CUBE_MAP_POSITIVE_X            0x8515
#define GL_TEXTURE_WRAP_R                         0x8072

#define GL_FRAMEBUFFER_COMPLETE                   0x8CD5
#define GL_FRAMEBUFFER_INCOMPLETE_ATTACHMENT      0x8CD6
#define GL_FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT 0x8CD7
#define GL_FRAMEBUFFER_INCOMPLETE_DRAW_BUFFER     0x8CDB
#define GL_FRAMEBUFFER_INCOMPLETE_READ_BUFFER     0x8CDC
#define GL_FRAMEBUFFER_UNSUPPORTED                0x8CDD

#define GL_TEXTURE0                               0x84C0
#define GL_TEXTURE1                               0x84C1
#define GL_TEXTURE2                               0x84C2
#define GL_TEXTURE3                               0x84C3
#define GL_TEXTURE4                               0x84C4
#define GL_TEXTURE5                               0x84C5
#define GL_TEXTURE6                               0x84C6
#define GL_TEXTURE7                               0x84C7
#define GL_TEXTURE8                               0x84C8
#define GL_TEXTURE9                               0x84C9
#define GL_TEXTURE10                              0x84CA
#define GL_TEXTURE11                              0x84CB
#define GL_TEXTURE12                              0x84CC
#define GL_TEXTURE13                              0x84CD
#define GL_TEXTURE14                              0x84CE
#define GL_TEXTURE15                              0x84CF
#define GL_TEXTURE16                              0x84D0
#define GL_TEXTURE17                              0x84D1
#define GL_TEXTURE18                              0x84D2
#define GL_TEXTURE19                              0x84D3
#define GL_TEXTURE20                              0x84D4
#define GL_TEXTURE21                              0x84D5
#define GL_TEXTURE22                              0x84D6
#define GL_TEXTURE23                              0x84D7
#define GL_TEXTURE24                              0x84D8
#define GL_TEXTURE25                              0x84D9
#define GL_TEXTURE26                              0x84DA
#define GL_TEXTURE27                              0x84DB
#define GL_TEXTURE28                              0x84DC
#define GL_TEXTURE29                              0x84DD
#define GL_TEXTURE30                              0x84DE
#define GL_TEXTURE31                              0x84DF

#define GL_COLOR_ATTACHMENT0              0x8CE0
#define GL_COLOR_ATTACHMENT1              0x8CE1
#define GL_COLOR_ATTACHMENT2              0x8CE2
#define GL_COLOR_ATTACHMENT3              0x8CE3
#define GL_COLOR_ATTACHMENT4              0x8CE4
#define GL_COLOR_ATTACHMENT5              0x8CE5
#define GL_COLOR_ATTACHMENT6              0x8CE6
#define GL_COLOR_ATTACHMENT7              0x8CE7
#define GL_COLOR_ATTACHMENT8              0x8CE8
#define GL_COLOR_ATTACHMENT9              0x8CE9
#define GL_COLOR_ATTACHMENT10             0x8CEA
#define GL_COLOR_ATTACHMENT11             0x8CEB
#define GL_COLOR_ATTACHMENT12             0x8CEC
#define GL_COLOR_ATTACHMENT13             0x8CED
#define GL_COLOR_ATTACHMENT14             0x8CEE
#define GL_COLOR_ATTACHMENT15             0x8CEF
#define GL_COLOR_ATTACHMENT16             0x8CF0
#define GL_COLOR_ATTACHMENT17             0x8CF1
#define GL_COLOR_ATTACHMENT18             0x8CF2
#define GL_COLOR_ATTACHMENT19             0x8CF3
#define GL_COLOR_ATTACHMENT20             0x8CF4
#define GL_COLOR_ATTACHMENT21             0x8CF5
#define GL_COLOR_ATTACHMENT22             0x8CF6
#define GL_COLOR_ATTACHMENT23             0x8CF7
#define GL_COLOR_ATTACHMENT24             0x8CF8
#define GL_COLOR_ATTACHMENT25             0x8CF9
#define GL_COLOR_ATTACHMENT26             0x8CFA
#define GL_COLOR_ATTACHMENT27             0x8CFB
#define GL_COLOR_ATTACHMENT28             0x8CFC
#define GL_COLOR_ATTACHMENT29             0x8CFD
#define GL_COLOR_ATTACHMENT30             0x8CFE
#define GL_COLOR_ATTACHMENT31             0x8CFF

#define GL_CLAMP_TO_EDGE                  0x812F
#define GL_FRAMEBUFFER                    0x8D40
#define GL_READ_FRAMEBUFFER               0x8CA8
#define GL_DRAW_FRAMEBUFFER               0x8CA9
#define GL_DEPTH_ATTACHMENT               0x8D00
#define GL_DEPTH_COMPONENT32              0x81A7
#define GL_FRAMEBUFFER_SRGB               0x8DB9
#define GL_GEOMETRY_SHADER                0x8DD9

#define GL_RENDERBUFFER                   0x8D41
#define GL_DEPTH24_STENCIL8               0x88F0
#define GL_DEPTH_STENCIL_ATTACHMENT       0x821A
#define GL_MULTISAMPLE                    0x809D
#define GL_SAMPLE_ALPHA_TO_COVERAGE       0x809E
#define GL_SAMPLE_ALPHA_TO_ONE            0x809F
#define GL_SAMPLE_COVERAGE                0x80A0
#define GL_SAMPLE_BUFFERS                 0x80A8
#define GL_SAMPLES                        0x80A9
#define GL_TEXTURE_2D_MULTISAMPLE         0x9100

typedef ptrdiff_t GLsizeiptr;

struct opengl_info{
  char* vendor;
  char* renderer;
  char* version;
  char* shadingLanguageVersion;
  char* extensions; 

  int32_t EXT_texture_sRGB_decode;
  int32_t GL_ARB_framebuffer_sRGB;
};

//GL types
typedef char GLchar;
typedef ptrdiff_t GLintptr;

//loaded inline
typedef BOOL WINAPI wgl_swap_interval_ext (int interval);
typedef GLubyte* WINAPI gl_get_stringi (GLenum name, GLuint index);

//loaded by getWin32GLFunc
typedef HGLRC WINAPI wgl_create_context_attribs_arb (HDC hDC, HGLRC hShareContext, const int *attribList);

//loaded by loadGLCoreFunctions
typedef void WINAPI gl_gen_buffers ( GLsizei n, GLuint * buffers);
typedef void WINAPI gl_bind_buffer (GLenum target, GLuint buffer);
typedef void WINAPI gl_delete_buffers(GLsizei n, const GLuint *buffers);
typedef void WINAPI gl_buffer_data(GLenum target, GLintptr size, const void *data, GLenum usage);
typedef GLuint WINAPI gl_create_shader (GLenum type);
typedef void WINAPI gl_shader_source (GLuint shader, GLsizei count, const char** string, const GLint *length);
typedef void WINAPI gl_compile_shader (GLuint shader);
typedef void WINAPI gl_get_shader_iv (GLuint shader, GLenum pname, GLint *params);
typedef void WINAPI gl_get_shader_info_log (GLuint shader, GLsizei bufSize, GLsizei *length, GLchar *infoLog);
typedef GLuint WINAPI gl_create_program ();
typedef void WINAPI gl_attach_shader(GLuint program, GLuint shader);
typedef void WINAPI gl_bind_frag_data_location(GLuint program, GLuint color, const GLchar *name);
typedef void WINAPI gl_link_program(GLuint program);
typedef void WINAPI gl_use_program(GLuint program);
typedef GLint WINAPI gl_get_attrib_location (GLuint program, const GLchar *name);
typedef void WINAPI gl_vertex_attrib_pointer(GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride, const void *pointer);
typedef void WINAPI gl_enable_vertex_attrib_array(GLuint index);
typedef void WINAPI gl_gen_vertex_arrays(GLsizei n, GLuint *arrays);
typedef void WINAPI gl_bind_vertex_array(GLuint array);
typedef GLint WINAPI gl_get_uniform_location(GLuint program, const GLchar *name);
typedef void WINAPI gl_uniform_1f (GLint location, GLfloat v0);
typedef void WINAPI gl_uniform_1i (GLint location, GLint v0);
typedef void WINAPI gl_uniform_2f (GLint location, GLfloat v0, GLfloat v1);
typedef void WINAPI gl_uniform_3f (GLint location, GLfloat v0, GLfloat v1, GLfloat v2);
typedef void WINAPI gl_uniform_3fv (GLint location, GLsizei count, const GLfloat *value);
typedef void WINAPI gl_uniform_4f (GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3);
typedef void WINAPI gl_uniform_4fv (GLint location, GLsizei count, const GLfloat *value);
typedef void WINAPI gl_get_programiv (GLuint program, GLenum pname, GLint *params);
typedef void WINAPI gl_get_program_info_log (GLuint program, GLsizei bufSize, GLsizei *length, GLchar *infoLog);
typedef void WINAPI gl_delete_shader (GLuint shader);
typedef void WINAPI gl_active_texture(GLenum texture);
typedef void WINAPI gl_uniform_matrix4fv (GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
typedef void WINAPI gl_buffer_sub_data  (GLenum target, GLintptr offset, GLsizeiptr size, const void *data);
typedef void WINAPI gl_debug_message_callback_arb (void* callback, void * userParam);
typedef void WINAPI gl_tex_storage_3d (GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth);
typedef void WINAPI gl_tex_sub_image_3d (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void *pixels);
typedef void WINAPI gl_generate_mipmap (GLenum target);
typedef void WINAPI gl_bind_buffer_range (GLenum target, GLuint index, GLuint buffer, GLintptr offset, GLsizeiptr size);
typedef void WINAPI gl_gen_framebuffers (GLsizei n, GLuint *framebuffers);
typedef void WINAPI gl_framebuffer_texture2D (GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level);
typedef void WINAPI gl_bind_framebuffer (GLenum target, GLuint framebuffer);
typedef GLenum WINAPI gl_check_framebuffer_status (GLenum target);
typedef void WINAPI gl_framebuffer_texture (GLenum target, GLenum attachment, GLuint texture, GLint level);
typedef void WINAPI gl_copy_image_subdata (GLuint srcName, GLenum srcTarget, GLint srcLevel, GLint srcX, GLint srcY, GLint srcZ, GLuint dstName, GLenum dstTarget, GLint dstLevel, GLint dstX, GLint dstY, GLint dstZ, GLsizei srcWidth, GLsizei srcHeight, GLsizei srcDepth);
typedef void WINAPI gl_tex_image_2d_multisample (GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLboolean fixedsamplelocations);
typedef void WINAPI gl_render_buffer_storage_multisample(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height);

typedef void WINAPI gl_gen_renderbuffers (GLsizei n, GLuint *renderbuffers);
typedef void WINAPI gl_bind_renderbuffer (GLenum target, GLuint renderbuffer);
typedef void WINAPI gl_renderbuffer_storage_multisample (GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height);
typedef void WINAPI gl_framebuffer_renderbuffer (GLenum target, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer);
typedef void WINAPI gl_blit_framebuffer (GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield mask, GLenum filter);


typedef void WINAPI gl_uniform_block_binding (GLuint program, GLuint uniformBlockIndex, GLuint uniformBlockBinding);
typedef GLuint WINAPI gl_get_uniform_block_index (GLuint program, const GLchar *uniformBlockName);
typedef GLuint WINAPI gl_get_debug_message_log (GLuint count, GLsizei bufSize, GLenum *sources, GLenum *types, GLuint *ids, GLenum *severities, GLsizei *lengths, GLchar *messageLog);

extern wgl_swap_interval_ext* wglSwapInterval;
extern wgl_create_context_attribs_arb* wglCreateContextAttribsARB;

extern gl_get_stringi* glGetStringi;

extern gl_gen_buffers* glGenBuffers;
extern gl_bind_buffer* glBindBuffer;
extern gl_delete_buffers* glDeleteBuffers;
extern gl_buffer_data* glBufferData;
extern gl_create_shader* glCreateShader;
extern gl_shader_source* glShaderSource;
extern gl_compile_shader* glCompileShader;
extern gl_get_shader_iv* glGetShaderiv;
extern gl_get_shader_info_log* glGetShaderInfoLog;
extern gl_create_program* glCreateProgram;
extern gl_attach_shader* glAttachShader;
extern gl_bind_frag_data_location* glBindFragDataLocation;
extern gl_link_program* glLinkProgram;
extern gl_use_program* glUseProgram;
extern gl_get_attrib_location* glGetAttribLocation;
extern gl_vertex_attrib_pointer* glVertexAttribPointer;
extern gl_enable_vertex_attrib_array* glEnableVertexAttribArray;
extern gl_gen_vertex_arrays* glGenVertexArrays;
extern gl_bind_vertex_array* glBindVertexArray;
extern gl_get_uniform_location* glGetUniformLocation;
extern gl_uniform_1f* glUniform1f;
extern gl_uniform_1i* glUniform1i;
extern gl_uniform_2f* glUniform2f;
extern gl_uniform_3f* glUniform3f;
extern gl_uniform_3fv* glUniform3fv;
extern gl_uniform_4f* glUniform4f;
extern gl_uniform_4fv* glUniform4fv;


extern gl_get_programiv* glGetProgramiv;
extern gl_get_program_info_log* glGetProgramInfoLog;
extern gl_delete_shader* glDeleteShader;
extern gl_active_texture* glActiveTexture;
extern gl_uniform_matrix4fv* glUniformMatrix4fv;
extern gl_buffer_sub_data* glBufferSubData;
extern gl_tex_storage_3d* glTexStorage3D;
extern gl_tex_sub_image_3d* glTexSubImage3D;
extern gl_generate_mipmap* glGenerateMipmap;
extern gl_uniform_block_binding* glUniformBlockBinding;
extern gl_get_uniform_block_index* glGetUniformBlockIndex;
extern gl_bind_buffer_range* glBindBufferRange;
extern gl_gen_framebuffers* glGenFramebuffers;
extern gl_check_framebuffer_status* glCheckFramebufferStatus;

extern gl_framebuffer_texture2D* glFramebufferTexture2D;
extern gl_bind_framebuffer* glBindFramebuffer;
extern gl_framebuffer_texture* glFramebufferTexture;
extern gl_copy_image_subdata* glCopyImageSubData;
extern gl_tex_image_2d_multisample* glTexImage2DMultisample;
extern gl_get_debug_message_log* glGetDebugMessageLog;

extern gl_gen_renderbuffers* glGenRenderbuffers;
extern gl_bind_renderbuffer* glBindRenderbuffer;
extern gl_renderbuffer_storage_multisample* glRenderbufferStorageMultisample;
extern gl_framebuffer_renderbuffer* glFramebufferRenderbuffer;
extern gl_blit_framebuffer* glBlitFramebuffer;

void win32InitOpenGL(HWND window);
#endif //__TINYOPENGL__