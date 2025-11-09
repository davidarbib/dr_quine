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
"-o",
"%s%c",
"%c%s%c%c%c",
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
"int i = ",
"char *tape[] = {",
"};",
"int main(){",
"    if (i < 0) {return 0;}",
"    char lf[1] = {10};",
"    int a = i - 1;",
"    char namebuf[SULLYSIZE + 4];",
"    bzero(namebuf, SULLYSIZE + 4);",
"    strcpy(namebuf, tape[1]);",
"    namebuf[SULLYSIZE] = DIGIT(a);",
"    strcat(namebuf, tape[2]);",
"    FILE *handler = fopen(namebuf, tape[0]);if(!handler){return 1;}",
"    for (int i = 7; i < 17; i++) {",
"        fprintf(handler, tape[5], tape[i], 10);",
"    }",
"    fwrite(lf, 1, 1, handler);",
"    fprintf(handler, tape[66], tape[17], DIGIT(a), 59, 10);",
"    fwrite(lf, 1, 1, handler);",
"    fprintf(handler, tape[5], tape[18], 10);",
"    for (int i = 0; i < 68; i++) {",
"        fprintf(handler, tape[6], 34, tape[i], 34, 44, 10);",
"    }",
"    fprintf(handler, tape[5], tape[19], 10);",
"    fwrite(lf, 1, 1, handler);",
"    for (int i = 20; i < 64; i++) {",
"        fprintf(handler, tape[5], tape[i], 10);",
"    }",
"    if (fclose(handler)) {return 1;}",
"    char cmdbuf[CMDSIZE];",
"    bzero(cmdbuf, CMDSIZE);",
"    strcpy(cmdbuf, tape[3]);",
"    strcat(cmdbuf, tape[64]);",
"    strcat(cmdbuf, namebuf);",
"    strcat(cmdbuf, tape[64]);",
"    strcat(cmdbuf, tape[4]);",
"    strcat(cmdbuf, tape[64]);",
"    namebuf[7] = 0;",
"    namebuf[8] = 0;",
"    strcat(cmdbuf, namebuf);",
"    if (system(cmdbuf)) {return 1;}",
"    bzero(cmdbuf, CMDSIZE);",
"    strcpy(cmdbuf, tape[65]);",
"    strcat(cmdbuf, namebuf);",
"    if (system(cmdbuf)) {return 1;}",
"    return 0;",
"}",
" ",
"./",
"%s%c%c%c",
";",
};

int main(){
    if (i < 0) {return 0;}
    char lf[1] = {10};
    int a = i - 1;
    char namebuf[SULLYSIZE + 4];
    bzero(namebuf, SULLYSIZE + 4);
    strcpy(namebuf, tape[1]);
    namebuf[SULLYSIZE] = DIGIT(a);
    strcat(namebuf, tape[2]);
    FILE *handler = fopen(namebuf, tape[0]);if(!handler){return 1;}
    for (int i = 7; i < 17; i++) {
        fprintf(handler, tape[5], tape[i], 10);
    }
    fwrite(lf, 1, 1, handler);
    fprintf(handler, tape[66], tape[17], DIGIT(a), 59, 10);
    fwrite(lf, 1, 1, handler);
    fprintf(handler, tape[5], tape[18], 10);
    for (int i = 0; i < 68; i++) {
        fprintf(handler, tape[6], 34, tape[i], 34, 44, 10);
    }
    fprintf(handler, tape[5], tape[19], 10);
    fwrite(lf, 1, 1, handler);
    for (int i = 20; i < 64; i++) {
        fprintf(handler, tape[5], tape[i], 10);
    }
    if (fclose(handler)) {return 1;}
    char cmdbuf[CMDSIZE];
    bzero(cmdbuf, CMDSIZE);
    strcpy(cmdbuf, tape[3]);
    strcat(cmdbuf, tape[64]);
    strcat(cmdbuf, namebuf);
    strcat(cmdbuf, tape[64]);
    strcat(cmdbuf, tape[4]);
    strcat(cmdbuf, tape[64]);
    namebuf[7] = 0;
    namebuf[8] = 0;
    strcat(cmdbuf, namebuf);
    if (system(cmdbuf)) {return 1;}
    bzero(cmdbuf, CMDSIZE);
    strcpy(cmdbuf, tape[65]);
    strcat(cmdbuf, namebuf);
    if (system(cmdbuf)) {return 1;}
    return 0;
}
