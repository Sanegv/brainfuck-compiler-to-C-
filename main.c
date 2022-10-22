#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv){
    FILE* in = fopen(argv[1], "r");
    FILE* out = fopen(argv[2], "w");
    if(in == NULL || out == NULL) exit(1);

    fprintf(out, "#include <stdio.h>\n#include <stdlib.h>\n\nint main(){\n\tint i = 0;\n\tint* table = calloc(30000, sizeof(int));\n\tif(table == NULL) exit(1);\n\n");

    char c = 0;
    while(c != EOF){
        c = fgetc(in);
        if(c == '>') fprintf(out, "\ti++;\n");
        if(c == '<') fprintf(out, "\ti--;\n");
        if(c == '+') fprintf(out, "\ttable[i]++;\n");
        if(c == '-') fprintf(out, "\ttable[i]--;\n");
        if(c == '.') fprintf(out, "\tprintf(\"%%c\", table[i]);\n");
        if(c == ',') fprintf(out, "\ttable[i] = scanf(\"%%c\");\n");
        if(c == '[') fprintf(out, "\n\twhile(table[i]){\n");
        if(c == ']') fprintf(out, "\t}\n\n");
    }

    fprintf(out, "\n\treturn 0;\n}");

    fclose(in);
    fclose(out);
    return 0;
}