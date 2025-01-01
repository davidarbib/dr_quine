#include <stdio.h>

 /*
    What a comment !
 */

#define ADDLF()fputc(10, handler);
#define OPEN(f)FILE *handler = fopen(f, "w");if(!handler){return 1;}
#define FT(b)int main(){OPEN("Grace_kid.c")fputs("#include <stdio.h>", handler);ADDLF()ADDLF()fputs(" /*", handler);ADDLF()fputs("    What a comment !", handler);ADDLF()fputs(" */", handler);ADDLF()ADDLF()fputs("#define ADDLF()fputc(10, handler);", handler);ADDLF()fputs("#define OPEN(f)FILE *handler = fopen(f, \"w\");if(!handler){return 1;}", handler);ADDLF()fputs(b, handler);ADDLF()fputs("FT("#b")", handler);ADDLF()fclose(handler);return 0;}
FT("#define FT(b)int main(){OPEN(\"Grace_kid.c\")fputs(\"#include <stdio.h>\", handler);ADDLF()ADDLF()fputs(\" /*\", handler);ADDLF()fputs(\"    What a comment !\", handler);ADDLF()fputs(\" */\", handler);ADDLF()ADDLF()fputs(\"#define ADDLF()fputc(10, handler);\", handler);ADDLF()fputs(\"#define OPEN(f)FILE *handler = fopen(f, \\\"w\\\");if(!handler){return 1;}\", handler);ADDLF()fputs(b, handler);ADDLF()fputs(\"FT(\"#b\")\", handler);ADDLF()fclose(handler);return 0;}")
