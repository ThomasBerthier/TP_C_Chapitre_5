#include <stdio.h>
#include <stdlib.h>

int size(FILE * fichier);

int main()
{
    FILE * source;
    source = fopen("source.txt","r") ;

    FILE * dest;
    dest = fopen("dest1.txt","r");

    FILE * dest2;
    dest2 = fopen("dest2.txt","r");


    printf("%d\n",size(source));
    printf("%d\n",size(dest));
    printf("%d",size(dest2));

    fclose(source);
    fclose(dest);
    fclose(dest2);
    return 0;
}
 int size(FILE * fichier){
    int size;
    fseek(fichier, 0, 2);
    size = ftell(fichier);
    return size;
 }
