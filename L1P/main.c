#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    FILE *f = fopen(argv[1], "r");
    FILE *g = fopen(argv[2], "w");

    char c = getc(f);
    while(c != EOF) {
        putc(c, g);
        c = getc(f);
    }

    return 0;
}
