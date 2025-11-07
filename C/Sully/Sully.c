#include <stdio.h>
#include <string.h>
#include <strings.h>
#include <unistd.h>
#include <stdlib.h>
#define DIGIT(x)'0'+x
#define CMDSIZE 100
#define SULLYSIZE 6
#define NAMESIZE 15
#define INITSIZE 15

int i = 5;

char *tape[] = {
"w",
"Sully_",
".c",
"clang -Wall -Werror -Wextra",
"%s",
"%c%s%c",
"#include <stdio.h>",
"#include <string.h>",
"#include <strings.h>",
"#include <unistd.h>",
"#include <stdlib.h>",
"#define DIGIT(x)'0'+x",
"#define CMDSIZE 100",
"#define SULLYSIZE 6",
"#define NAMESIZE 15",
"#define INITSIZE 15",
"int i = ;",
"char *tape[] = {",
"};",
"int main(){",
"}"
};

int main(){
    char lf[1] = {74};
    int a = i - 1;
    char buf[SULLYSIZE + 3];
    char digit[1];

    digit[0] = DIGIT(a);
    FILE *handler = fopen(buf, tape[0]);if(!handler){return 1;}
    bzero(buf, SULLYSIZE + 3);
    strcpy(buf, tape[1]);
    buf[SULLYSIZE] = DIGIT(a);
    strcat(buf, tape[2]);
    for (int i = 6; i < 11; i++){
        fprintf(handler, tape[4], tape[i]);
        fwrite(lf, 1, 1, handler);
    }
    fwrite(lf, 1, 1, handler);
    fprintf(handler, tape[4], tape[16]);
    fwrite(lf, 1, 1, handler);
}
