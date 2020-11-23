#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c;
    FILE * alphabet;
    alphabet = fopen("alphabet.txt","w");

    for(c = 'a';c <= 'z';c++)
    {
        putc(c,alphabet);
        printf("%c",c);
    }
    fclose(alphabet);
    return 0;
}
