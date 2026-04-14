#include <stdio.h>
#include <stdlib.h>

int main()
{
	srand(69420); //haha funnny seed number
	int loopinator = 1;
	int gamesel;
	// ^ declarortis
	while(loopinator == 1)
	{
		gamesel = 0;
		while((gamesel > 4) || (gamesel <= 0))
		{
			printf("bem vindo ao hubzin de minigame\n\n");
			printf("1: pergunta e resposta\n");
			printf("2: cobra na caixa\n");
			printf("3: gousmas war\n");
			printf("4: sair\n");
			printf("selecione (numero do jogo): ");
			scanf("%d", &gamesel);
		}
		switch(gamesel)
		{
			case 1:
			   	printf("TBD: jogo 1\n");
			   	break;
			case 2:
			   	printf("TBD: jogo 2\n");
	  			break;
			case 3:
				printf("TBD: jogo 3\n");
				break;
			case 4:
				loopinator = 0;
				break;
			default:
				printf("isso nao deveria acontecer, se vc ta vendo essa msg ent vc cagou o programa, quite forcado agr");
				break;
		}
	}
	printf("encerrando programa...");
	return 0;
}