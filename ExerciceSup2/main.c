#include <stdio.h>
#include <stdlib.h>
int size(FILE * fichier);

int main()
{
    int length;
    char c;
    FILE * alphabet;
    alphabet = fopen("alphabet.txt","r");
    length = size(alphabet);
    rewind(alphabet);
    for(int i = 0; i <= length; i++)
    {
        c = (char)getc(alphabet);
        printf("%c",c);

    }
    fclose(alphabet);

    return 0;
}

int size(FILE * fichier)
{
    int size;
    fseek(fichier, 0, 2);
    size = ftell(fichier);
    return size;
}
