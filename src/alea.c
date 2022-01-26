//
//  alea.c
//  
//
//  Created by Claudine Piau-Toffolon on 01/11/2016.
//
//
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main(int argc, char * argv[]) {
    int i ;
        float nb_alea;
        float bMIN=0;
        float bMAX=11;
        printf ("CE PROGRAMME PERMET DE GENERER DES NB ALEATOIRES COMPRIS entre 2 bornes: ");
        printf("\n\n Choisir la borne min: ");
        scanf("%f",&bMIN);
        printf("\n\n Choisir la borne max :");
        scanf("%f",&bMAX);
        printf("\n\n\n");
        srand(time(NULL)); //initialisation du generateur de nb aleatoires
       
        //int tronque donc il faut ajouter 1 à la valeur max pour avoir les deux valeurs dans la liste de nombres aléatoires
        for (i=0; i<100; i++)
        {
         nb_alea= rand();
        printf ("%d\t", (int)(nb_alea * (bMAX +1 - bMIN) / RAND_MAX + bMIN));
        }
        printf("\n\n\n");
        return 0;
    }