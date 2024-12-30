#include <stdio.h>

 /*
    What a comment !
 */

#define FILENAME "Grace_kid.c"
#define FT(b)int main(){puts("#include <stdio.h>");puts("");puts(" /*");puts("    What a comment !");puts(" */");puts("");puts(b);puts("FT("#b")");return 0;}
FT("#define FT(b)int main(){puts(\"#include <stdio.h>\");puts(\"\");puts(\" /*\");puts(\"    What a comment !\");puts(\" */\");puts(\"\");puts(b);puts(\"FT(\"#b\")\");return 0;}")
