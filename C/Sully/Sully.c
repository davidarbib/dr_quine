#include <stdio.h>
#include <string.h>
#include <strings.h>
#include <unistd.h>
#include <stdlib.h>

#define CC "gcc"
#define CMDSIZE 100
#define SULLYSIZE 6
#define NAMESIZE 15
#define INITSIZE 15
#define SULLYNAME "Sully_"
#define DIGIT(x)'0'+x
#define ADDLF()fputc(10, handler);
#define PRINT_DECLARE_I()fputs(initbuf, handler);ADDLF()
#define OPEN(f)FILE *handler = fopen(f, "w");if(!handler){return 1;}

int i = 5;

//beware of i value when making files
//
void make_exe_name(char *buf)
{
bzero(buf, NAMESIZE);
strcpy(buf, SULLYNAME);
buf[SULLYSIZE] = DIGIT(i);
}

void make_src_name(char *buf)
{
make_exe_name(buf);
strcat(buf, ".c");
}

void make_declare_str(char *buf)
{
bzero(buf, INITSIZE);
strcpy(buf, "int i = ");
buf[strlen(buf)] = DIGIT(i);
strcat(buf, ";");
}

void make_compile_command(char* buf)
{
char srcbuf[NAMESIZE];
char exebuf[NAMESIZE];
bzero(buf, INITSIZE);
strcpy(buf, CC);
strcat(buf, " -o ");
make_exe_name(exebuf);
make_src_name(srcbuf);
strcat(buf, exebuf);
strcat(buf, " ");
strcat(buf, srcbuf);
}

#define FT(b)int main(){OPEN("Grace_kid.c")fputs("#include <stdio.h>", handler);ADDLF()ADDLF()fputs(" /*", handler);ADDLF()fputs("    What a comment !", handler);ADDLF()fputs(" */", handler);ADDLF()ADDLF()fputs("#define ADDLF()fputc(10, handler);", handler);ADDLF()fputs("#define OPEN(f)FILE *handler = fopen(f, \"w\");if(!handler){return 1;}", handler);ADDLF()fputs(b, handler);ADDLF()fputs("FT("#b")", handler);ADDLF()fclose(handler);return 0;}
FT("#define FT(b)int main(){OPEN(\"Grace_kid.c\")fputs(\"#include <stdio.h>\", handler);ADDLF()ADDLF()fputs(\" /*\", handler);ADDLF()fputs(\"    What a comment !\", handler);ADDLF()fputs(\" */\", handler);ADDLF()ADDLF()fputs(\"#define ADDLF()fputc(10, handler);\", handler);ADDLF()fputs(\"#define OPEN(f)FILE *handler = fopen(f, \\\"w\\\");if(!handler){return 1;}\", handler);ADDLF()fputs(b, handler);ADDLF()fputs(\"FT(\"#b\")\", handler);ADDLF()fclose(handler);return 0;}")
