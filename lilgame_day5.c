#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void g1qcheck(char ug, int gv, int gv2, int* scr, int scd)
{
	if(gv2 == gv)
	{
		*scr++;
		while(ug != 'c')
		{
			system("cls");
			printf("voce acertou! (%c)\n", ug);
			ug = 'p';
			scd = *scr;
			printf("voce acertou %d perguntas ate agora\n", scd);
			printf("digite c para continuar ");
			ug = getchar();
		}
	}
	else
	{
		while(ug != 'c')
		{
			system("cls");
			printf("voce errou. (correta: %c, sua: %c", (char)gv, ug);
			ug = 'p';
			scd = *scr;
			printf("voce acertou %d perguntas ate agora\n", scd);
			printf("digite c para continuar: ");
			ug = getchar();
		}
	}
}

void game1()
{
	char ugs = 'p';
	int score = 0;
	int gamevar = 0;
	int gamevar2 = 0;
	while((gamevar2 > 100) || (gamevar2 <= 96))
	{
		system("cls");
		printf("pergunta 1\n\n");
		printf("a - \n");
		printf("b - \n");
		printf("c - (certa)\n");
		printf("d - \n\n");
		gamevar = 99;
		printf("sua resposta - ");
		ugs = getchar();
		gamevar2 = (int)ugs;
	}
	g1qcheck(ugs, gamevar, gamevar2, &score, score);
	gamevar2 = 0;
	while((gamevar2 > 100) || (gamevar2 <= 96))
	{
		system("cls");
		printf("pergunta 2\n\n");
		printf("a - (certa)\n");
		printf("b - \n");
		printf("c - \n");
		printf("d - \n\n");
		gamevar = 97;
		printf("sua resposta - ");
		ugs = getchar();
		gamevar2 = (int)ugs;
	}
	g1qcheck(ugs, gamevar, gamevar2, &score, score);
	gamevar2 = 0;
	while((gamevar2 > 100) || (gamevar2 <= 96))
	{
		system("cls");
		printf("pergunta 3\n\n");
		printf("a - \n");
		printf("b - (certa)\n");
		printf("c - \n");
		printf("d - \n\n");
		gamevar = 98;
		printf("sua resposta - ");
		ugs = getchar();
		gamevar2 = (int)ugs;
	}
	g1qcheck(ugs, gamevar, gamevar2, &score, score);
	gamevar2 = 0;
	while((gamevar2 > 100) || (gamevar2 <= 96))
	{
		system("cls");
		printf("pergunta 4\n\n");
		printf("a - (certa)\n");
		printf("b - \n");
		printf("c - \n");
		printf("d - \n\n");
		gamevar = 97;
		printf("sua resposta - ");
		ugs = getchar();
		gamevar2 = (int)ugs;
	}
	g1qcheck(ugs, gamevar, gamevar2, &score, score);
	gamevar2 = 0;
	while((gamevar2 > 100) || (gamevar2 <= 96))
	{
		system("cls");
		printf("pergunta 5\n\n");
		printf("a - \n");
		printf("b - \n");
		printf("c - \n");
		printf("d - (certa)\n\n");
		gamevar = 100;
		printf("sua resposta - ");
		ugs = getchar();
		gamevar2 = (int)ugs;
	}
	g1qcheck(ugs, gamevar, gamevar2, &score, score);
	printf("voce acertou %d/5 perguntas\n", score);
}

void resetcheck(char ugs, int* lpr)
{
	printf("fim de jogo. retornar para hub? (Y/n): ");
   	ugs = getchar();
   	if(ugs == 'n')
	{
	   	*lpr = 0;
	}
	else
	{
		ugs = 'p';
		system("cls");
	}
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
			system("cls");
		}
		switch(gamesel)
		{
			case 1:
			   	printf("\ncarregando jogo 1...\n");
			   	game1();
			   	resetcheck('p', &loopinator);
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