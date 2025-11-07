#include <stdio.h>
#include <string.h>
#include <strings.h>
#include <unistd.h>
#include <stdlib.h>

#define CC "clang -Wall -Werror -Wextra"
#define CMDSIZE 100
#define SULLYSIZE 6
#define NAMESIZE 15
#define INITSIZE 15
#define SULLYNAME "Sully_"
#define DIGIT(x)'0'+x
#define ADDLF()fputc(10, handler);
#define OPEN(f)FILE *handler = fopen(f, "w");if(!handler){return 1;}
#define FPUTS(s)fputs(s, handler);

int i = 5;

void make_exe_name(char *buf, int a){
bzero(buf, NAMESIZE);
strcpy(buf, SULLYNAME);
buf[SULLYSIZE] = DIGIT(a);}

void make_src_name(char *buf, int a){
make_exe_name(buf, a);
strcat(buf, ".c");}

void make_declare_str(char *buf, int a){
bzero(buf, INITSIZE);
strcpy(buf, "int i = ");
buf[strlen(buf)] = DIGIT(a);
strcat(buf, ";");}

void make_compile_command(char* buf, int a){
char srcbuf[NAMESIZE];char exebuf[NAMESIZE];
bzero(buf, INITSIZE);
strcpy(buf, CC);strcat(buf, " -o ");
make_exe_name(exebuf, a);make_src_name(srcbuf, a);
strcat(buf, exebuf);strcat(buf, " ");strcat(buf, srcbuf);}

void make_launch_command(char* buf, int a){
bzero(buf, NAMESIZE);
strcpy(buf, "./"); strcat(buf, SULLYNAME);
buf[strlen(buf)] = DIGIT(a);}


#define FT(b)int main(){char declare_buf[INITSIZE]; char src_buf[NAMESIZE]; char cmd_buf[CMDSIZE]; char launch_buf[CMDSIZE]; int a = i-1; if (i >= 0) { make_src_name(src_buf, a); OPEN(src_buf); FPUTS("#include <stdio.h>")ADDLF() FPUTS("#include <string.h>")ADDLF() FPUTS("#include <strings.h>")ADDLF() FPUTS("#include <unistd.h>")ADDLF() FPUTS("#include <stdlib.h>")ADDLF()ADDLF() FPUTS("#define CC \"clang -Wall -Werror -Wextra\"")ADDLF() FPUTS("#define CMDSIZE 100")ADDLF() FPUTS("#define SULLYSIZE 6")ADDLF() FPUTS("#define NAMESIZE 15")ADDLF() FPUTS("#define INITSIZE 15")ADDLF() FPUTS("#define SULLYNAME \"Sully_\"")ADDLF() FPUTS("#define DIGIT(x)'0'+x")ADDLF() FPUTS("#define ADDLF()fputc(10, handler);")ADDLF()ADDLF() FPUTS("#define OPEN(f)FILE *handler = fopen(f, \"w\");if(!handler){return 1;}")ADDLF() ADDLF() FPUTS("#define FPUTS(s)fputs(s, handler);")ADDLF() make_declare_str(declare_buf, a); FPUTS(declare_buf)ADDLF()ADDLF() FPUTS("void make_exe_name(char *buf, int a){")ADDLF() FPUTS("bzero(buf, NAMESIZE);")ADDLF() FPUTS("strcpy(buf, SULLYNAME);")ADDLF() FPUTS("buf[SULLYSIZE] = DIGIT(a);}")ADDLF()ADDLF() FPUTS("void make_src_name(char *buf, int a){")ADDLF() FPUTS("make_exe_name(buf, a);")ADDLF() FPUTS("strcat(buf, \".c\");}")ADDLF()ADDLF() FPUTS("void make_declare_str(char *buf, int a){")ADDLF() FPUTS("bzero(buf, INITSIZE);")ADDLF() FPUTS("strcpy(buf, \"int i = \");")ADDLF() FPUTS("buf[strlen(buf)] = DIGIT(a);")ADDLF() FPUTS("strcat(buf, \";\");}")ADDLF()ADDLF() FPUTS("void make_compile_command(char* buf, int a){")ADDLF() FPUTS("char srcbuf[NAMESIZE];char exebuf[NAMESIZE];")ADDLF() FPUTS("bzero(buf, INITSIZE);")ADDLF() FPUTS("strcpy(buf, CC);strcat(buf, \" -o \");")ADDLF() FPUTS("make_exe_name(exebuf, a);make_src_name(srcbuf, a);")ADDLF() FPUTS("strcat(buf, exebuf);strcat(buf, \" \");strcat(buf, srcbuf);}")ADDLF()ADDLF() FPUTS("void make_launch_command(char* buf, int a){")ADDLF() FPUTS("bzero(buf, NAMESIZE);")ADDLF() FPUTS("strcpy(buf, \"./\"); strcat(buf, SULLYNAME);")ADDLF() FPUTS("buf[strlen(buf)] = DIGIT(a);}")ADDLF() FPUTS(b)ADDLF()FPUTS("FT("#b")")ADDLF() make_compile_command(cmd_buf, a); make_launch_command(launch_buf, a); system(cmd_buf); system(launch_buf);}}
FT("#define FT(b)int main(){char declare_buf[INITSIZE]; char src_buf[NAMESIZE]; char cmd_buf[CMDSIZE]; char launch_buf[CMDSIZE]; int a = i-1; if (i >= 0) { make_src_name(src_buf, a); OPEN(src_buf); FPUTS(\"#include <stdio.h>\")ADDLF() FPUTS(\"#include <string.h>\")ADDLF() FPUTS(\"#include <strings.h>\")ADDLF() FPUTS(\"#include <unistd.h>\")ADDLF() FPUTS(\"#include <stdlib.h>\")ADDLF()ADDLF() FPUTS(\"#define CC \\\"clang -Wall -Werror -Wextra\\\"\")ADDLF() FPUTS(\"#define CMDSIZE 100\")ADDLF() FPUTS(\"#define SULLYSIZE 6\")ADDLF() FPUTS(\"#define NAMESIZE 15\")ADDLF() FPUTS(\"#define INITSIZE 15\")ADDLF() FPUTS(\"#define SULLYNAME \\\"Sully_\\\"\")ADDLF() FPUTS(\"#define DIGIT(x)'0'+x\")ADDLF() FPUTS(\"#define ADDLF()fputc(10, handler);\")ADDLF()ADDLF() FPUTS(\"#define OPEN(f)FILE *handler = fopen(f, \\\"w\\\");if(!handler){return 1;}\")ADDLF() ADDLF() FPUTS(\"#define FPUTS(s)fputs(s, handler);\")ADDLF() make_declare_str(declare_buf, a); FPUTS(declare_buf)ADDLF()ADDLF() FPUTS(\"void make_exe_name(char *buf, int a){\")ADDLF() FPUTS(\"bzero(buf, NAMESIZE);\")ADDLF() FPUTS(\"strcpy(buf, SULLYNAME);\")ADDLF() FPUTS(\"buf[SULLYSIZE] = DIGIT(a);}\")ADDLF()ADDLF() FPUTS(\"void make_src_name(char *buf, int a){\")ADDLF() FPUTS(\"make_exe_name(buf, a);\")ADDLF() FPUTS(\"strcat(buf, \\\".c\\\");}\")ADDLF()ADDLF() FPUTS(\"void make_declare_str(char *buf, int a){\")ADDLF() FPUTS(\"bzero(buf, INITSIZE);\")ADDLF() FPUTS(\"strcpy(buf, \\\"int i = \\\");\")ADDLF() FPUTS(\"buf[strlen(buf)] = DIGIT(a);\")ADDLF() FPUTS(\"strcat(buf, \\\";\\\");}\")ADDLF()ADDLF() FPUTS(\"void make_compile_command(char* buf, int a){\")ADDLF() FPUTS(\"char srcbuf[NAMESIZE];char exebuf[NAMESIZE];\")ADDLF() FPUTS(\"bzero(buf, INITSIZE);\")ADDLF() FPUTS(\"strcpy(buf, CC);strcat(buf, \\\" -o \\\");\")ADDLF() FPUTS(\"make_exe_name(exebuf, a);make_src_name(srcbuf, a);\")ADDLF() FPUTS(\"strcat(buf, exebuf);strcat(buf, \\\" \\\");strcat(buf, srcbuf);}\")ADDLF()ADDLF() FPUTS(\"void make_launch_command(char* buf, int a){\")ADDLF() FPUTS(\"bzero(buf, NAMESIZE);\")ADDLF() FPUTS(\"strcpy(buf, \\\"./\\\"); strcat(buf, SULLYNAME);\")ADDLF() FPUTS(\"buf[strlen(buf)] = DIGIT(a);}\")ADDLF() FPUTS(b)ADDLF()FPUTS(\"FT(\"#b\")\")ADDLF() make_compile_command(cmd_buf, a); make_launch_command(launch_buf, a); system(cmd_buf); system(launch_buf);}}")
