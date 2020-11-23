#include <stdio.h>
#include <stdlib.h>

int lireDonnees(char * fichier, int * T);
void afficherTableau(int * T, int nb);
void triABulles(int * T,int nb);
void enregistrerDonnees(char * fichier, int * T, int nb);

int lireDonnees(char * fichier, int * T)
{
    int i,
        size;
    fseek(fichier, 0, 2);
    size = ftell(fichier);
    rewind(fichier);
    if(T != 0)
    {
        for(i = 0; i <= size-1; i++)
        {

            T[i] = getc(fichier);
        }
        return size;
    }
    return size;
}

void afficherTableau(int * T, int nb)
{
    int i;
    for(i = 0; i < nb; i++)
    {
        printf("%c",T[i]);
    }
}

void triABulles(int * T,int nb){
    int temp;
    int j,
        i;

    for(j = 0; j < nb; j++)
    {
        for(i = 1; i < nb; i++)
        {
            if(T[i-1]>T[i])
            {
                temp = T[i-1];
                T[i-1] = T[i];
                T[i] = temp;
            }

        }
    }
}

void enregistrerDonnees(char * fichier, int * T, int nb)
{
    int i;
    for(i = 0; i < nb; i++)
    {
        putc(T[i], fichier);
    }
}

int main()
{
    int *T = NULL,
        nb;
    FILE * entiers;
    FILE * entiersTri;
    entiers = fopen("entiers.txt","r");
    entiersTri = fopen("entiersTri.txt","w");

    nb = lireDonnees(entiers,T);
    T = (int)malloc(nb * sizeof(int));
    nb = lireDonnees(entiers,T);
    afficherTableau(T,nb);
    triABulles(T,nb);
    enregistrerDonnees(entiersTri, T, nb);
    fclose(entiers);
    fclose(entiersTri);
    return 0;
}
