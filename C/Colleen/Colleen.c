#include <stdio.h>
/*
    outside
*/
void internal(const char *in_descr)
{
printf("#include <stdio.h>\n/*\n    outside\n*/\n%s",in_descr);
printf("\n\nint main()\n{\n/*\n    inside\n*/\ninternal(%c%s%c);\n}",0x22,in_descr,0x22);
}

int main()
{
/*
    inside
*/
internal("void internal(const char *in_descr)\\n{\\nprintf(\"#include <stdio.h>\\n/*\\n    outside\\n*/\\n\%s\",in_descr);\nprintf(\"\\n\\nint main()\\n{\\n/*\\n    inside\\n*/\\ninternal(%c%s%c);\\n}\",0x22,in_descr,0x22);\\n}");
}
