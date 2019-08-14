#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int choixMenu; 
	
	printf("=== Menu ===\n");
	printf("1. Royal Cheese\n");
	printf("2. Mc Deluxe\n");
	printf("3. Mc Bacon\n");
	printf("4. Big Mac\n");
	printf("Votre choix ?\n");
	scanf("%d", &choixMenu);

	printf("\n\n");

	switch (choixMenu)
{
	case 1:
		printf("ça va sentir booon le fromage");
		printf("Vous souhaitez autre chose avec votre Royal Cheese?");
		scanf("%d", &choixMenu);
		break;
	case 2:
		printf("La version deluxe d'une marque deluxe");
		break;
	case 3: 
		printf("On n'a pas finit de vous faire aimer la viande...");
		break;
	case 4:
		printf("tu n'en a pas marre de faire toujours le même choix ?");
		break;
	default :
		printf("Je n'ai pas compris votre voix ! Vous ne mangerez rien du tout !");
		break;
}

	printf("\n");
	return 0;
}
