#ifdef I
# if(I == 5)
int i = 5;
#  undef I
#  define I 4
# elif(I == 4)
int i = 4;
#  undef I
#  define I 3
# elif(I == 3)
int i = 3;
#  undef I
#  define I 2
# elif(I == 2)
int i = 2;
#  undef I
#  define I 1
# elif(I == 1)
int i = 1;
#  undef I
#  define I 0
# else
int i = 0;
#  undef I
# endif
#else
# define I 5 
int i = 5;
#endif

#include <stdio.h>

#define SULLYNAME "Sully_"
#define CAT(a,b)a##b
#define ADDLF()fputc(10, handler);
#define PRINT_DECLARE_I(d)fputs(CAT("int i = ", d), handler);fputs(";");ADDLF()
#define CHECK_

#define COMPILE(i)system("gcc -o  ");
#define OPEN(f)FILE *handler = fopen(f, "w");if(!handler){return 1;}
#define FT(b)int main(){OPEN("Grace_kid.c")fputs("#include <stdio.h>", handler);ADDLF()ADDLF()fputs(" /*", handler);ADDLF()fputs("    What a comment !", handler);ADDLF()fputs(" */", handler);ADDLF()ADDLF()fputs("#define ADDLF()fputc(10, handler);", handler);ADDLF()fputs("#define OPEN(f)FILE *handler = fopen(f, \"w\");if(!handler){return 1;}", handler);ADDLF()fputs(b, handler);ADDLF()fputs("FT("#b")", handler);ADDLF()fclose(handler);return 0;}
FT("#define FT(b)int main(){OPEN(\"Grace_kid.c\")fputs(\"#include <stdio.h>\", handler);ADDLF()ADDLF()fputs(\" /*\", handler);ADDLF()fputs(\"    What a comment !\", handler);ADDLF()fputs(\" */\", handler);ADDLF()ADDLF()fputs(\"#define ADDLF()fputc(10, handler);\", handler);ADDLF()fputs(\"#define OPEN(f)FILE *handler = fopen(f, \\\"w\\\");if(!handler){return 1;}\", handler);ADDLF()fputs(b, handler);ADDLF()fputs(\"FT(\"#b\")\", handler);ADDLF()fclose(handler);return 0;}")
