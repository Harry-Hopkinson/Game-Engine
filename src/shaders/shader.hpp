#include <GL/gL.h>

// int glGetUniformLocation(int program, const char* name);
// void glUniform1i(int location, int v0);
// void glUniform1f(int location, float v0, float v1);

// int glCreateShader(int type);
// void glShaderSource(int shader, int count, char** string, int* length);
// void glCompileShader(int shader);
// void glAttachShader(int program, int shader);

// // char* shader_fragment[] = {
// // };

// void shader(char** src, int type, int program) {
//   int shader = glCreateShader(type);
//   glShaderSource(shader, 1, src, 0);
//   glCompileShader(shader);
//   glAttachShader(program, shader);
// }