#include <stdio.h>
#define quine(b) int main(){puts("#include <stdio.h>");puts(b);puts("quine("#b")");return 0;}
quine("#define quine(b) int main(){puts(\"#include <stdio.h>\");puts(b);puts(\"quine(\"#b\")\");return 0;}")
