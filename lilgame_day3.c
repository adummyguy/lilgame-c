#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void game1()
{
	
}

int main()
{
	srand(time(NULL) % 69420); // haha funny number
	int rngesus = rand() % 10000;
	int loopinator = 1;
	char usergamesel = 'p';
	int gamesel; // don't forget to convert the char to int, minus 48 since typing '0' would be 48 in ascii
	// ^ declarortis
	while(loopinator == 1)
	{
		gamesel = 0;
		printf("[rng test: %d]\n", rngesus);
		while((gamesel > 4) || (gamesel <= 0))
		{
			printf("bem vindo ao hubzin de minigame\n\n");
			printf("1: pergunta e resposta\n");
			printf("2: cobra na caixa\n");
			printf("3: gousmas war\n");
			printf("4: sair\n");
			printf("selecione (numero do jogo): ");
			usergamesel = getchar();
			gamesel = usergamesel - 48;
			system("clear" && "cls");
		}
		switch(gamesel)
		{
			case 1:
			   	printf("\nTBD: jogo 1\n");
			   	break;
			case 2:
			   	printf("\nTBD: jogo 2\n");
	  			break;
			case 3:
				printf("\nTBD: jogo 3\n");
				break;
			case 4:
				loopinator = 0;
				break;
			default:
				printf("\nisso nao deveria acontecer, se vc ta vendo essa msg ent quebrou o programa\n");
				break;
		}
	}
	printf("encerrando programa...");
	return 0;
}