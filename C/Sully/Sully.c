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
"int i = 5;",
"int main(){",
"}"
};

int main(){
    int a = i - 1;
    char buf[SULLYSIZE];
    bzero(buf, SULLYSIZE);
    strcpy(buf, tape[1]);
    strcat()
    FILE *handler = fopen(f, tape[0]);if(!handler){return 1;}
    for (int i = 0; i <= )


}
