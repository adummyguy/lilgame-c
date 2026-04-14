#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

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
	if(gamevar2 == gamevar)
	{
		score++;
		system("cls");
		printf("voce acertou! (%c)\n", ugs);
	}
	else
	{
		system("cls");
		printf("voce errou. (correta: %c, sua: %c)\n", (char)gamevar, ugs);
	}
	printf("voce acertou %d perguntas ate agora", score);
	ugs = 'p';
	while(ugs != 'c')
	{
		printf("\ndigite c para continuar: ");
		ugs = getchar();
	}
	ugs = 'p';
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
	if(gamevar2 == gamevar)
	{
		score++;
		system("cls");
		printf("voce acertou! (%c)\n", ugs);
	}
	else
	{
		system("cls");
		printf("voce errou. (correta: %c, sua: %c)\n", (char)gamevar, ugs);
	}
	printf("voce acertou %d perguntas ate agora", score);
	ugs = 'p';
	while(ugs != 'c')
	{
		printf("\ndigite c para continuar: ");
		ugs = getchar();
	}
	ugs = 'p';
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
	if(gamevar2 == gamevar)
	{
		score++;
		system("cls");
		printf("voce acertou! (%c)\n", ugs);
	}
	else
	{
		system("cls");
		printf("voce errou. (correta: %c, sua: %c)\n", (char)gamevar, ugs);
	}
	printf("voce acertou %d perguntas ate agora", score);
	ugs = 'p';
	while(ugs != 'c')
	{
		printf("\ndigite c para continuar: ");
		ugs = getchar();
	}
	ugs = 'p';
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
	if(gamevar2 == gamevar)
	{
		score++;
		system("cls");
		printf("voce acertou! (%c)\n", ugs);
	}
	else
	{
		system("cls");
		printf("voce errou. (correta: %c, sua: %c)\n", (char)gamevar, ugs);
	}
	printf("voce acertou %d perguntas ate agora", score);
	ugs = 'p';
	while(ugs != 'c')
	{
		printf("\ndigite c para continuar: ");
		ugs = getchar();
	}
	ugs = 'p';
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
	if(gamevar2 == gamevar)
	{
		score++;
		system("cls");
		printf("voce acertou! (%c)\n", ugs);
	}
	else
	{
		system("cls");
		printf("voce errou. (correta: %c, sua: %c)\n", (char)gamevar, ugs);
	}
	printf("voce acertou %d perguntas ate agora", score);
	ugs = 'p';
	while(ugs != 'c')
	{
		printf("\ndigite c para continuar: ");
		ugs = getchar();
	}
	ugs = 'p';
	printf("voce acertou %d/5 perguntas\n", score);
	while(ugs != 'f')
	{
		printf("\ndigite f para finalizar: ");
		ugs = getchar();
	}
}

void game2()
{
	// vars:
	char ugs = 'p'; // woo yeah ugs mentioned
	int goodbox = (rand() % 5) + 1;
	int evilbox = goodbox;
	while(goodbox == evilbox)
	{
		evilbox = (rand() % 5) + 1;
	}
	int b1s = 0, b2s = 0, b3s = 0, b4s = 0, b5s = 0; // box status (closed/open)
	int turnof = (rand() % 2) + 1; // whose turn it is
	int turns = 0; //why not
	int p1n = 0;
	int p2n = 0; //player-specific ugs, but as an int
	char p1ns[10], p2ns[10]; // hehe p1ns
	int loopy = 1;
	int loopery = 1;
	int winner = 0;
	char n1[] = "ethan";
	char n2[] = "florian";
	char n3[] = "rei";
	char n4[] = "fulano";
	char n5[] = "serena";
	char n6[] = "hilda";
	char n7[] = "akari";
	char taken[] = "###";
	
	//stuff:
	printf("%d %d %d\n", goodbox, evilbox, turnof);
	printf("player 1, escolha um nome\n");
	printf("1: %s\n", n1);
	printf("2: %s\n", n2);
	printf("3: %s\n", n3);
	printf("4: %s\n", n4);
	printf("5: %s\n", n5);
	printf("6: %s\n", n6);
	printf("7: %s", n7);
	do
	{
		ugs = 'p';
		printf("\nnome de numero: ");
		ugs = getchar();
		p1n = (int)ugs - 48;
	}while((p1n > 7) || (p1n <= 0));
	//printf("%c %d", ugs, p1n);
	switch(p1n)
	{
		case 1:
			strcpy(p1ns, n1);
			strcpy(n1, taken);
			printf("seu nome e %s agora.", p1ns);
			break;
		case 2:
			strcpy(p1ns, n2);
			strcpy(n2, taken);
			printf("seu nome e %s agora.", p1ns);
			break;
		case 3:
			strcpy(p1ns, n3);
			strcpy(n3, taken);
	   	   	printf("seu nome e %s agora.", p1ns);
			break;
		case 4:
			strcpy(p1ns, n4);
			strcpy(n4, taken);
			printf("seu nome e %s agora.", p1ns);
			break;
		case 5:
			strcpy(p1ns, n5);
			strcpy(n5, taken);
			printf("seu nome e %s agora.", p1ns);
			break;
		case 6:
			strcpy(p1ns, n6);
			strcpy(n6, taken);
			printf("seu nome e %s agora.", p1ns);
			break;
		case 7:
			strcpy(p1ns, n7);
			strcpy(n7, taken);
			printf("seu nome e %s agora.", p1ns);
			break;
		default:
			printf("\nisso nao deveria acontecer, se vc ta vendo essa msg ent quebrou o programa\n");
			break;
	}
	while(ugs != 'c')
	{
		printf("\ndigite c para continuar: ");
		ugs = getchar();
	}
	system("cls");
	loopy = 1;
	printf("player 2, escolha um nome\n");
	printf("1: %s\n", n1);
	printf("2: %s\n", n2);
	printf("3: %s\n", n3);
	printf("4: %s\n", n4);
	printf("5: %s\n", n5);
	printf("6: %s\n", n6);
	printf("7: %s", n7);
	while(loopy == 1)
	{
		ugs = 'p';
		do
		{
			ugs = 'p';
			printf("\nnome de numero: ");
			ugs = getchar();
			p2n = (int)ugs - 48;
		}while((p2n > 7) || (p2n <= 0));
		//printf("%c %d", ugs, p2n);
		if(p2n == p1n)
		{
			printf("nome ja tomado. tente de novo.");
		}
		else
		{
			loopy = 0;
		}
	}
	switch(p2n)
	{
		case 1:
			strcpy(p2ns, n1);
			strcpy(n1, taken);
			printf("seu nome e %s agora.", p2ns);
			break;
		case 2:
			strcpy(p2ns, n2);
			strcpy(n2, taken);
			printf("seu nome e %s agora.", p2ns);
			break;
		case 3:
			strcpy(p2ns, n3);
			strcpy(n3, taken);
			printf("seu nome e %s agora.", p2ns);
			break;
		case 4:
			strcpy(p2ns, n4);
			strcpy(n4, taken);
			printf("seu nome e %s agora.", p2ns);
			break;
		case 5:
			strcpy(p2ns, n5);
			strcpy(n5, taken);
			printf("seu nome e %s agora.", p2ns);
			break;
		case 6:
			strcpy(p2ns, n6);
			strcpy(n6, taken);
			printf("seu nome e %s agora.", p2ns);
			break;
		case 7:
			strcpy(p2ns, n7);
			strcpy(n7, taken);
			printf("seu nome e %s agora.", p2ns);
			break;
		default:
			printf("\nisso nao deveria acontecer, se vc ta vendo essa msg ent quebrou o programa\n");
			break;
	}
	while(ugs != 'c')
	{
		printf("\ndigite c para continuar: ");
		ugs = getchar();
	}
	system("cls");
	loopy = 1;
	while(loopy == 1)
	{
		switch(turnof)
		{
			case 1:
				system("cls");
				printf("%s (p1), faca sua escolha.\n\n", p1ns);
				printf("caixa 1 = %d / caixa 2 = %d / caixa 3 = %d / caixa 4 = %d / caixa 5 = %d\n", b1s, b2s, b3s, b4s, b5s);
				printf("(0 = fechada, 1 = aberta)");
				p1n = 0;
				loopery = 1;
				while(loopery == 1)
				{
					p1n = 0;
					while(p1n > 5 || p1n <= 0)
					{
						ugs = 'p';
						printf("\nvoce tenta abrir a caixa: ");
						ugs = getchar();
						p1n = (int)ugs - 48;
					}
						switch(p1n)
						{
							case 1:
								if(b1s == 0)
								{
									b1s = 1;
									loopery = 0;
								}
								else
								{
		 			 	 		  	printf("...mas ja estava aberta.\n");
								}
								break;
							case 2:
								if(b2s == 0)
								{
									b2s = 1;
									loopery = 0;
								}
								else
								{
		 			 	 		  	printf("...mas ja estava aberta.\n");
								}
								break;
							case 3:
								if(b3s == 0)
								{
									b3s = 1;
									loopery = 0;
								}
								else
								{
		 			 	 		  	printf("...mas ja estava aberta.\n");
								}
								break;
							case 4:
								if(b4s == 0)
								{
									b4s = 1;
									loopery = 0;
								}
								else
								{
		 			 	 		  	printf("...mas ja estava aberta.\n");
								}
								break;
							case 5:
								if(b5s == 0)
								{
									b5s = 1;
									loopery = 0;
								}
								else
								{
		 			 	 		  	printf("...mas ja estava aberta.\n");
								}
								break;
							default:
								printf("\nisso nao deveria acontecer, se vc ta vendo essa msg ent quebrou o programa\n");
								break;
						}
				}
				if(p1n == goodbox)
				{
					system("cls");
					printf("dentro da caixa, tinha um botao que abriu uma passagem.\nvoce corre para a sua liberdade, e assim que voce atravessa a passagem,\nela fecha atras de voce, deixando o outro individuo dentro.\n");
					loopy = 0;
					winner = 1;
				}
				else if(p1n == evilbox)
				{
					system("cls");
					printf("dentro da caixa, tinha uma mamba-negra. ela imediatamente pula e morde voce no pescoco.\no outro individuo consegue incapacitar a cobra antes que ela pique ele,\nmas voce sucumbe ao veneno quase instantaneamente.");
					loopy = 0;
					winner = 2;
				}
				else
				{
					printf("dentro da caixa, nao tinha nada. voce deixa o outro tentar uma caixa, como concordaram.");
				}
				while(ugs != 'c')
				{
		   	   	   	printf("\ndigite c para continuar: ");
		   	   	   	ugs = getchar();
				}
				turns++;
				turnof = 2;
				break;
			case 2:
				printf("%s (p2), faca sua escolha.\n\n", p2ns);
				printf("caixa 1 = %d / caixa 2 = %d / caixa 3 = %d / caixa 4 = %d / caixa 5 = %d\n", b1s, b2s, b3s, b4s, b5s);
				printf("(0 = fechada, 1 = aberta)");
				p2n = 0;
				loopery = 1;
				while(loopery == 1)
				{
					p2n = 0;
					while(p2n > 5 || p2n <= 0)
					{
						ugs = 'p';
						printf("\nvoce tenta abrir a caixa: ");
						ugs = getchar();
						p2n = (int)ugs - 48;
					}
						switch(p2n)
						{
							case 1:
								if(b1s == 0)
								{
									b1s = 1;
									loopery = 0;
								}
								else
								{
		 			 	 		  	printf("...mas ja estava aberta\n.");
								}
								break;
							case 2:
								if(b2s == 0)
								{
									b2s = 1;
									loopery = 0;
								}
								else
								{
		 			 	 		  	printf("...mas ja estava aberta.\n");
								}
								break;
							case 3:
								if(b3s == 0)
								{
									b3s = 1;
									loopery = 0;
								}
								else
								{
		 			 	 		  	printf("...mas ja estava aberta.\n");
								}
								break;
							case 4:
								if(b4s == 0)
								{
									b4s = 1;
									loopery = 0;
								}
								else
								{
		 			 	 		  	printf("...mas ja estava aberta.\n");
								}
								break;
							case 5:
								if(b5s == 0)
								{
									b5s = 1;
									loopery = 0;
								}
								else
								{
		 			 	 		  	printf("...mas ja estava aberta.\n");
								}
								break;
							default:
								printf("\nisso nao deveria acontecer, se vc ta vendo essa msg ent quebrou o programa\n");
								break;
						}
				}
				if(p2n == goodbox)
				{
					system("cls");
					printf("dentro da caixa, tinha um botao que abriu uma passagem.\nvoce corre para a sua liberdade, e assim que voce atravessa a passagem,\nela fecha atras de voce, deixando o outro individuo dentro.\n");
					loopy = 0;
					winner = 2;
				}
				else if(p2n == evilbox)
				{
					system("cls");
					printf("dentro da caixa, tinha uma mamba-negra. ela imediatamente pula e morde voce no pescoco.\no outro individuo consegue incapacitar a cobra antes que ela pique ele,\nmas voce sucumbe ao veneno quase instantaneamente.");
					loopy = 0;
					winner = 1;
				}
				else
				{
					printf("dentro da caixa, nao tinha nada. voce deixa o outro tentar uma caixa, como concordaram.");
				}
				while(ugs != 'c')
				{
		   	   	   	printf("\ndigite c para continuar: ");
		   	   	   	ugs = getchar();
				}
				turns++;
				turnof = 1;
				break;
			default:
				printf("\nisso nao deveria acontecer, se vc ta vendo essa msg ent quebrou o programa\n");
				break;
		}
	}
	system("cls");
	if(winner == 1)
	{
		printf("%s (p1) vence. em %d turno(s)", p1ns, turns);
	}
	else if(winner == 2)
	{
		printf("%s (p2) vence. em %d turno(s)", p2ns, turns);
	}
	else
	{
		printf("empate. (algo deu erro, porque empates sao imposiveis)");
	}
	while(ugs != 'f')
	{
		printf("\ndigite f para finalizar: ");
		ugs = getchar();
	}
}

void game3()
{
	//vars:
	char ugs = 'p'; // was that the ugs of 87?
	int turns = 0; //again, why not
	int turnof = (rand() % 2) + 1; // whose turn it is
	int p1g1s, p1g2s, p2g1s, p2g2s; // gousma status (fnt/active)
	int p1g1, p1g2, p2g1, p2g2; // fury count
	int divide; // guess what this one's for
	
}

int main()
{
	srand(time(NULL) % 69420); // haha funny number
	int rngesus = rand() % 10000;
	int loopinator = 1; // loops the whole thing
	int lpr = 1; //loops the individual games
	char usergamesel = 'p';
	int gamesel; // don't forget to convert the char to int, minus 48 since typing '0' would be 48
	// ^ declarortis
	while(loopinator == 1)
	{
		system("cls");
		gamesel = 0;
		printf("[rng test: %d]\n", rngesus);
		while((gamesel > 4) || (gamesel <= 0))
		{
			printf("bem vindo ao hub de minigames\n\n");
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
				lpr = 1;
				while(lpr == 1)
				{
					printf("\ncarregando jogo 1...\n");
			   		game1();
			   		usergamesel = 'p';
			   		while((usergamesel != 'y') && (usergamesel != 'n'))
					{
						system("cls");
						printf("fim de jogo. tentar de novo? (y/n): ");
   						usergamesel = getchar();
   						if(usergamesel == 'n')
						{
			   	   	   	   	lpr = 0;
			   	   	   	   	usergamesel = 'p';
			   	   	   	   	while((usergamesel != 'y') && (usergamesel != 'n'))
							{
			   	   	   	   		system("cls");
								printf("retornar ao hub? (y/n): ");
			   	   	   	   		usergamesel = getchar();
			   	   	   	   		if(usergamesel == 'n')
								{
									loopinator = 0;
								}
								else
								{
									system("cls");
								}
							}
						}
						else
						{
			   		   	   	system("cls");
						}
					}
				}
			   	break;
			case 2:
			   	lpr = 1;
				while(lpr == 1)
				{
					printf("\ncarregando jogo 2...\n");
			   		game2();
			   		usergamesel = 'p';
			   		while((usergamesel != 'y') && (usergamesel != 'n'))
					{
						system("cls");
						printf("fim de jogo. tentar de novo? (y/n): ");
   						usergamesel = getchar();
   						if(usergamesel == 'n')
						{
			   	   	   	   	lpr = 0;
			   	   	   	   	usergamesel = 'p';
			   	   	   	   	while((usergamesel != 'y') && (usergamesel != 'n'))
							{
			   	   	   	   		system("cls");
								printf("retornar ao hub? (y/n): ");
			   	   	   	   		usergamesel = getchar();
			   	   	   	   		if(usergamesel == 'n')
								{
									loopinator = 0;
								}
								else
								{
									system("cls");
								}
							}
						}
						else
						{
			   		   	   	system("cls");
						}
					}
				}
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