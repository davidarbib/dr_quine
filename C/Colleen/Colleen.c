#include <stdio.h>
#include <string.h>
#include <strings.h>
#define LEN_S 1500
/*
    outside
*/

void unescape(const char *s_escaped, char *s_non_escaped)
{
int j = 0;
for(int i = 0; i < LEN_S && s_escaped[i] != 0; i++)
{
switch (s_escaped[i])
{
case '\n':
s_non_escaped[j++] = '\\';
s_non_escaped[j++] = 'n';
break;
case '\\':
s_non_escaped[j++] = '\\';
s_non_escaped[j++] = '\\';
break;
case '\"':
s_non_escaped[j++] = '\\';
s_non_escaped[j++] = '\"';
break;
default:
s_non_escaped[j++] = s_escaped[i];
}
}
}

void internal(const char *in_descr)
{
char s_non_escaped[LEN_S];
bzero(s_non_escaped, LEN_S);
unescape(in_descr, s_non_escaped);
printf("#include <stdio.h>\n#include <string.h>\n#include <strings.h>\n#define LEN_S 1500\n/*\n    outside\n*/\n\nvoid unescape(const char *s_escaped, char *s_non_escaped)\n{\nint j = 0;\nfor(int i = 0; i < LEN_S && s_escaped[i] != 0; i++)\n{\nswitch (s_escaped[i])\n{\ncase '\\n':\ns_non_escaped[j++] = '\\\\';\ns_non_escaped[j++] = 'n';\nbreak;\ncase '\\\\':\ns_non_escaped[j++] = '\\\\';\ns_non_escaped[j++] = '\\\\';\nbreak;\ncase '\\\"':\ns_non_escaped[j++] = '\\\\';\ns_non_escaped[j++] = '\\\"';\nbreak;\ndefault:\ns_non_escaped[j++] = s_escaped[i];\n}\n}\n}\n\n%s",in_descr);
printf("\n\nint main()\n{\n/*\n    inside\n*/\nchar in_descr[LEN_S];\n\nbzero(in_descr, LEN_S);\nstrcpy(in_descr, \"%s\");\ninternal(in_descr);\n}\n", s_non_escaped);
}

int main()
{
/*
    inside
*/
char in_descr[LEN_S];

bzero(in_descr, LEN_S);
strcpy(in_descr, "void internal(const char *in_descr)\n{\nchar s_non_escaped[LEN_S];\nbzero(s_non_escaped, LEN_S);\nunescape(in_descr, s_non_escaped);\nprintf(\"#include <stdio.h>\\n#include <string.h>\\n#include <strings.h>\\n#define LEN_S 1500\\n/*\\n    outside\\n*/\\n\\nvoid unescape(const char *s_escaped, char *s_non_escaped)\\n{\\nint j = 0;\\nfor(int i = 0; i < LEN_S && s_escaped[i] != 0; i++)\\n{\\nswitch (s_escaped[i])\\n{\\ncase '\\\\n':\\ns_non_escaped[j++] = '\\\\\\\\';\\ns_non_escaped[j++] = 'n';\\nbreak;\\ncase '\\\\\\\\':\\ns_non_escaped[j++] = '\\\\\\\\';\\ns_non_escaped[j++] = '\\\\\\\\';\\nbreak;\\ncase '\\\\\\\"':\\ns_non_escaped[j++] = '\\\\\\\\';\\ns_non_escaped[j++] = '\\\\\\\"';\\nbreak;\\ndefault:\\ns_non_escaped[j++] = s_escaped[i];\\n}\\n}\\n}\\n\\n%s\",in_descr);\nprintf(\"\\n\\nint main()\\n{\\n/*\\n    inside\\n*/\\nchar in_descr[LEN_S];\\n\\nbzero(in_descr, LEN_S);\\nstrcpy(in_descr, \\\"%s\\\");\\ninternal(in_descr);\\n}\\n\", s_non_escaped);\n}");
internal(in_descr);
}
