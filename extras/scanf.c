#include <stdio.h>
#include <string.h>

int main ()
{
//    signed char prenom[25555];
//    
//    printf("Comment tu t'appelles ?");
//    scanf("%s", prenom);
//    
//    printf("ton prenom -> %s\n", prenom);
	
	
	
    
//    char	texte[] = "Boule et Bill";
//	char	mot[] = "bill";
//	
//	if(strstr(texte, mot) != NULL)
//		printf("Texte trouve! \n");
//	else
//		printf("introuvable");
	
	
	char texte[] = "Yin-Yang";
	char c = '-';
	
	char *resultat = strchr(texte, c);
	
	printf("%s\n", resultat);
	
	
	
	return (0);
}