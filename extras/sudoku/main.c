#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

void	affichage (int grille[9][9])
{
    for (int i=0; i<9; i++)
    {
        for (int j=0; j<9; j++)
        {
            printf( ((j+1)%3) ? "%d " : "%d|", grille[i][j]);
        }
        putchar('\n');
        if (!((i+1)%3))
            puts("------------------");
    }
    puts("\n\n");
}

bool absentDeLigne (int k, int grille[9][9], int i)
{
    for (int j=0; j < 9; j++)
        if (grille[i][j] == k)
            return false;
    return true;
}

bool absentDeColonne (int k, int grille[9][9], int j)
{
    for (int i=0; i < 9; i++)
        if (grille[i][j] == k)
            return false;
    return true;
}

bool absentDeBloc (int k, int grille[9][9], int i, int j)
{
    int _i = i-(i%3), _j = j-(j%3);  // ou encore : _i = 3*(i/3), _j = 3*(j/3);
    for (i=_i; i < _i+3; i++)
        for (j=_j; j < _j+3; j++)
            if (grille[i][j] == k)
                return false;
    return true;
}

bool estValide (int grille[9][9], LIST* position)
{
    // Si la liste est vide (fin de liste)
    if (position == NULL)
        return true;

    int i = position->i, j = position->j;

    for (int k=1; k <= 9; k++)
    {
        if ( absentDeLigne(k,grille,i) && absentDeColonne(k,grille,j) && absentDeBloc(k,grille,i,j) )
        {
            grille[i][j] = k;

            if ( estValide(grille, position->next) )
                return true;
        }
    }
    grille[i][j] = 0;

    return false;
}

int main (void)
{
    int grille[9][9] =
    {
        {9,0,0,1,0,0,0,0,5},
        {0,0,5,0,9,0,2,0,1},
        {8,0,0,0,4,0,0,0,0},
        {0,0,0,0,8,0,0,0,0},
        {0,0,0,7,0,0,0,0,0},
        {0,0,0,0,2,6,0,0,9},
        {2,0,0,3,0,0,0,0,6},
        {0,0,0,2,0,0,9,0,0},
        {0,0,1,9,0,4,5,7,0}
    };

    printf("Grille avant\n");
    affichage(grille);

    estValide(grille,0);

    printf("Grille apres\n");
    affichage(grille);
}

