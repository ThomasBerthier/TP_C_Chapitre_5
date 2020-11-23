#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE * source;
    source = fopen("source.txt","r") ;

    FILE * dest;
    dest = fopen("dest2.txt","w");

    char c;

    while((c = getc(source)) != EOF){
        if(c != 'a'){
            putc(c,dest);
        }

    }

    fclose(source);
    fclose(dest);
    return 0;
}
