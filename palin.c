// exos sur les chaines de caracteres
// cas palindrome
//https://zestedesavoir.com/tutoriels/755/le-langage-c-1/1043_aggregats-memoire-et-fichiers/4281_les-tableaux/

#include  <stdio.h>
#include <stdlib.h>
#include <string.h>

// sizeof() renvoie la taille de l'objet fourni en argument
//sizeof(char) renvoie 1 et sizeof(int) renvoie 4
// pour la variable chaine de type char*, sizeof(chaine) renvoie 4 et sizeof(*chaine) renvoie 1 - à savoir la taille d'un élément pointé pa chaine - qui est de type char

// on utilise cette caratèristique de sizeof pour allouer la mémoire en fonction du nb d'éléments et du type d'éléments
// char *chaine;
//chaine = malloc (N * sizeof (*chaine));

// il n'est plus besoin de se demander si sizeof(char) est utile ou non

// il n'est plus besoin de se demander de quel type est l'élément qui peuple un tableau
//quel que soit le type de la variable tableau, on mulitie le nb d'éléments par
//sizeof (*tableau) et on aura la taille totale à allouer sans erreur due au type des éléments

//NB: la fonction malloc () a besoin de la librairie stdlib.h
//malloc() alloue de la mémoire et revoie un pointeur vers l'esapce réservé

int estPalindrome (char chaine [100])
{  int N,i;
   int result;
   N= strlen (chaine);
    for (i =0; i<N; i++)
    {if (chaine[i]!=chaine [N-1-i])
     return 0;
    }
    return 1;
    
}
int estPalindrome2 (char *s)
{
    size_t len=0;
    size_t i;
    while (s[len]!='\0')
    ++ len;
    
    for (i=0; i<len; ++i)
        if (s[i]!=s[len-1-i])
            return 0;
    return 1;
}
int main (void)
{  char *chaine;
    printf ("lire mot ");
    scanf ("%s", chaine);
    if (estPalindrome2(chaine) ==1)
        printf (" %s est un palindrome \n ", chaine);
    else printf ("%s n'est un palindrome \n ", chaine);

}

/*int main (void) // ou int main()? en CNN
{  char chaine[100]; int N;
    printf ("lire mot:");
    scanf("%s",chaine);
     N= strlen (chaine);
    printf("taille du mot %d : ",N);
    if (estPalindrome(chaine) ==1)
    printf (" %s est un palindrome \n ", chaine);
    else printf ("%s n'est un palindrome \n ", chaine);
    
    return 0;
}
*/
 
