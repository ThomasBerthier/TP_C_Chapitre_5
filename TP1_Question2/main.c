#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    FILE * source;
    source = fopen("source.txt","r") ;

    FILE * dest;
    dest = fopen("dest1.txt","w");

    char c;

    while((c = getc(source)) != EOF){
        putc(c,dest);
    }

    fclose(source);
    fclose(dest);

    return 0;
}
