#include <stdio.h>
int main() {
    FILE *f;
    char ch;
    int ln = 0, t = 0, w = 0, c = 0;

    f = fopen("text.txt", "r");

    if (f == NULL) {
        printf("Error opening file\n");
        return 1;
    }

    ch = getc(f);
    while (ch != EOF) {
        if (ch == '\n') {
            ln++;
        } else if (ch == '\t') {
            t++;
        } else if (ch == ' ') {
            w++;
        } else {
            c++;
        }
        ch = getc(f);
    }
    fclose(f);
    printf("lines=%d, tabs=%d, words=%d, characters=%d\n", ln, t, w, c);
    return 0;
}