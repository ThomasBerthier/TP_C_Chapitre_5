#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    FILE * source ;
    source = fopen("source.txt","r") ;

    int getc(FILE *source);
    char c=0;
    while(1){
        c = getc(source);
        if(feof(source)){
            break;
        }
        printf("%c",c);
    }
    fclose(source);


    return 0;
}
