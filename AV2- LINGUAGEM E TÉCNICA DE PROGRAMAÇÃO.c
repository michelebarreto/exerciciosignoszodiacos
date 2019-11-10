//Thamires Oliveira de Azeredo
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
FILE *ponteiro;
char digitado[100];
int main() {
    int dia, mes, opcao, i;

 while (opcao != 3){
    system ("cls");
	printf("\n\n ----------- SIGNOS DO ZODIACO -----------\n\n");
    printf("0 - Cria arquivo com frases motivacionais \n");
    printf("1 - Saber qual o signo \n");
    printf("2 - Frase motivacional do signo \n");
    printf("3 - Sair \n");
    printf("\n*** Entre com uma das opcoes acima: ");
    scanf("%d", &opcao);

    switch (opcao){
		case 1:
    system ("cls");
	printf ("\n*---------------------------------------------*");
      printf ("\n!              SIGNO DO ZODIACO               !");
      printf ("\n!      Entre com o mes do seu aniversario     !");
      printf ("\n!                                             !");
      printf ("\n!  1) Janeiro     5) Maio      9) Setembro    !");
      printf ("\n!  2) Fevereiro   6) Junho    10) Outubro     !");
      printf ("\n!  3) Marco       7) Julho    11) Novembro    !");
      printf ("\n!  4) Abril       8) Agosto   12) Dezembro    !");
      printf ("\n!                                             !");
      printf ("\n*---------------------------------------------*");
      printf ("\n");
      printf ("\n");
      scanf ("%d", &mes);
      printf ("\nEntre com o dia do seu aniversario");
      printf ("\n");
      scanf ("%d", &dia);
      printf ("\n");

      switch (mes)
      {
             case 1:
                  if (dia <= 20)
                  {
                      printf ("Voce e do signo de Capricornio\n");
                  } else
                     printf ("Voce e do signo de Aquario\n");
             break;

             case 2:
                  if (dia <= 19)
                  {
                      printf ("Voce e do signo de Aquario\n");
                  } else
                     printf ("Voce e do signo de Peixes\n");
              break;

              case 3:
                   if (dia <= 20)
                   {
                      printf ("Voce e do signo de Peixes\n");
                   } else
                      printf ("Voce e do signo de Aries\n");
              break;

              case 4:
                   if (dia <= 20)
                   {
                      printf ("Voce e do signo de Aries\n");
                   } else
                      printf ("Voce e do signo de Touro\n");
              break;

              case 5:
                   if (dia <= 20)
                   {
                      printf ("Voce e do signo de Touro\n");
                   } else
                      printf ("Voce e do signo de Gemeos\n");
              break;

              case 6:
                   if (dia <= 20)
                   {
                      printf ("Voce e do signo de Gemeos\n");
                   } else
                      printf ("Voce e do signo de Cancer\n");
              break;

              case 7:
                   if (dia <= 21)
                   {
                      printf ("Voce e do signo de Cancer\n");
                   } else
                      printf ("Voce e do signo de Leao\n");
              break;

              case 8:
                   if (dia <= 22)
                   {
                      printf ("Voce e do signo de Leao\n");
                   } else
                      printf ("Voce e do signo de Virgem\n");
              break;

              case 9:
                   if (dia <= 22)
                   {
                      printf ("Voce e do signo de Virgem\n");
                   } else
                      printf ("Voce e do signo de Libra\n");
               break;

               case 10:
                    if (dia <= 22)
                    {
                       printf ("Voce e do signo de Libra\n");
                    } else
                       printf ("Voce e do signo de Escorpiao\n");
               break;

               case 11:
                    if (dia <= 21)
                    {
                       printf ("Voce e do signo de Escorpiao\n");
                    } else
                       printf ("Voce e do signo de Sagitario\n");
               break;

               case 12:
                    if (dia <= 21)
                    {
                       printf ("Voce e do signo de Sagitario\n");
                    } else
                       printf ("Voce e do signo de Capricornio\n");
               break;

               default:
                       printf ("\n*---------------------------------------*");
                       printf ("\n!            MES INVALIDO               !");
                       printf ("\n!    PRESSIONE UMA TECLA PARA SAIR      !");
                       printf ("\n*---------------------------------------*");
      }
      break;
	case 2:
	system ("cls");
      printf ("\n*---------------------------------------------*");
      printf ("\n!              SIGNO DO ZODIACO               !");
      printf ("\n!            Ler Frase Motivacional           !");
	  printf ("\n!       Entre com o numero do seu signo       !");
      printf ("\n!                                             !");
      printf ("\n!  1) Aries     5) Leao       9) Sagitario    !");
      printf ("\n!  2) Touro     6) Virgem    10) Capricornio  !");
      printf ("\n!  3) Gemeos    7) Libra     11) Aquario      !");
      printf ("\n!  4) Cancer    8) Escorpiao 12) Peixes       !");
      printf ("\n!                                             !");
      printf ("\n*---------------------------------------------*");
      printf ("\n");
      printf ("\n");
      printf ("\nEntre com o numero do seu signo: ");
      scanf ("%d", &mes);

            printf ("\n");

      switch (mes)
      {
             case 1:
                  if (mes = 1)

        {
            ponteiro = fopen("Aries.txt", "r");
            if(ponteiro==NULL)
            {
                printf("\nFrase motivacional Aries ainda nao criada.\n\n");
            }
            else
            {
            fgets(digitado,100,ponteiro);
            fclose(ponteiro);
            printf("\nFrase Motivacional Aries\n\n %s\n", digitado);
            printf("\n");
			i=0;
        }}
			break;

        case 2:
                  if (mes = 2)

        {
            ponteiro = fopen("Touro.txt", "r");
            if(ponteiro==NULL)
            {
                printf("\nFrase motivacional touro ainda nao criada.\n\n");
            }
            else
            {
            fgets(digitado,100,ponteiro);
            fclose(ponteiro);
            printf("\nFrase Motivacional Touro\n\n %s\n", digitado);
            printf("\n");
			i=0;

			}
		}
		break;
		case 3:
                  if (mes = 3)

        {
            ponteiro = fopen("Gemeos.txt", "r");
            if(ponteiro==NULL)
            {
                printf("\nFrase motivacional Gemeos ainda nao criada.\n\n");
            }
            else
            {
            fgets(digitado,100,ponteiro);
            fclose(ponteiro);
            printf("\nFrase Motivacional Gemeos\n\n %s\n", digitado);
            printf("\n");
			i=0;

			}
	}
	break;
	case 4:
                  if (mes = 4)

        {
            ponteiro = fopen("Cancer.txt", "r");
            if(ponteiro==NULL)
            {
                printf("\nFrase motivacional Cancer ainda nao criada.\n\n");
            }
            else
            {
            fgets(digitado,100,ponteiro);
            fclose(ponteiro);
            printf("\nFrase Motivacional Cancer\n\n %s\n", digitado);
            printf("\n");
			i=0;


	}}
	break;
		case 5:
                  if (mes = 5)

        {
            ponteiro = fopen("Leao.txt", "r");
            if(ponteiro==NULL)
            {
                printf("\nFrase motivacional Leao ainda nao criada.\n\n");
            }
            else
            {
            fgets(digitado,100,ponteiro);
            fclose(ponteiro);
            printf("\nFrase Motivacional Leao\n\n %s\n", digitado);
            printf("\n");
			i=0;

			}
	}
	break;
		case 6:
                  if (mes = 6)

        {
            ponteiro = fopen("Virgem.txt", "r");
            if(ponteiro==NULL)
            {
                printf("\nFrase motivacional Virgem ainda nao criada.\n\n");
            }
            else
            {
            fgets(digitado,100,ponteiro);
            fclose(ponteiro);
            printf("\nFrase Motivacional Virgem\n\n %s\n", digitado);
            printf("\n");
			i=0;

			}
	}
	break;
	case 7:
                  if (mes = 7)

        {
            ponteiro = fopen("Libra.txt", "r");
            if(ponteiro==NULL)
            {
                printf("\nFrase motivacional Libra ainda nao criada.\n\n");
            }
            else
            {
            fgets(digitado,100,ponteiro);
            fclose(ponteiro);
            printf("\nFrase Motivacional Libra\n\n %s\n", digitado);
            printf("\n");
			i=0;

			}
	}
	break;
	case 8:
                  if (mes = 8)

        {
            ponteiro = fopen("Escorpiao.txt", "r");
            if(ponteiro==NULL)
            {
                printf("\nFrase motivacional Escorpiao ainda nao criada.\n\n");
            }
            else
            {
            fgets(digitado,100,ponteiro);
            fclose(ponteiro);
            printf("\nFrase Motivacional Escorpiao\n\n %s\n", digitado);
            printf("\n");
			i=0;

			}
	}
	break;
	case 9:
                  if (mes = 9)

        {
            ponteiro = fopen("Sagitario.txt", "r");
            if(ponteiro==NULL)
            {
                printf("\nFrase motivacional Sagitario ainda nao criada.\n\n");
            }
            else
            {
            fgets(digitado,100,ponteiro);
            fclose(ponteiro);
            printf("\nFrase Motivacional Sagitario\n\n %s\n", digitado);
            printf("\n");
			i=0;

			}
	}

	break;
	case 10:
                  if (mes = 10)

        {
            ponteiro = fopen("Capricornio.txt", "r");
            if(ponteiro==NULL)
            {
                printf("\nFrase motivacional Capricornio ainda nao criada.\n\n");
            }
            else
            {
            fgets(digitado,100,ponteiro);
            fclose(ponteiro);
            printf("\nFrase Motivacional Capricornio\n\n %s\n", digitado);
            printf("\n");
			i=0;

			}
	}
	break;
	case 11:
                  if (mes = 11)

        {
            ponteiro = fopen("Aquario.txt", "r");
            if(ponteiro==NULL)
            {
                printf("\nFrase motivacional Aquario ainda nao criada.\n\n");
            }
            else
            {
            fgets(digitado,100,ponteiro);
            fclose(ponteiro);
            printf("\nFrase Motivacional Aquario\n\n %s\n", digitado);
            printf("\n");
			i=0;

			}
	}
	break;
	case 12:
                  if (mes = 12)

        {
            ponteiro = fopen("Peixes.txt", "r");
            if(ponteiro==NULL)
            {
                printf("\nFrase motivacional Peixes ainda nao criada.\n\n");
            }
            else
            {
            fgets(digitado,100,ponteiro);
            fclose(ponteiro);
            printf("\nFrase Motivacional Peixes\n\n %s\n", digitado);
            printf("\n");
			i=0;

			}
	}}
	break;
	case 0:
	//aqui vc vai escrever os codigos para criar frase motivacional
	system ("cls");
      printf ("\n*---------------------------------------------*");
      printf ("\n!              SIGNO DO ZODIACO               !");
      printf ("\n!          Gravar Frase Motivacional          !");
	  printf ("\n!       Entre com o numero do seu signo       !");
      printf ("\n!                                             !");
      printf ("\n!  1) Aries     5) Leao       9) Sagitario    !");
      printf ("\n!  2) Touro     6) Virgem    10) Capricornio  !");
      printf ("\n!  3) Gemeos    7) Libra     11) Aquario      !");
      printf ("\n!  4) Cancer    8) Escorpiao 12) Peixes       !");
      printf ("\n!                                             !");
      printf ("\n*---------------------------------------------*");
      printf ("\n");
      printf ("\n");
      printf ("\nEntre com o numero do seu signo:  ");
            scanf ("%d", &mes);
            printf ("\n");

      switch (mes)
      {
             case 1:
                  if (mes = 1)

        {
        	printf("\nDigite uma frase para Aries:\n");
            printf("\n");
			fflush(stdin);
            gets(digitado);
            fflush(stdin);
            ponteiro = fopen("Aries.txt", "w");
            fprintf(ponteiro, "%s", digitado );
            fclose(ponteiro);
            i=0;
        }
       break;
	   case 2:
                  if (mes = 2)

        {
        	printf("\nDigite uma frase para Touro:\n");
            printf("\n");
			fflush(stdin);
            gets(digitado);
            fflush(stdin);
            ponteiro = fopen("Touro.txt", "w");
            fprintf(ponteiro, "%s", digitado );
            fclose(ponteiro);
            i=0;
        }
       break;
	   case 3:
                  if (mes = 3)

        {
        	printf("\nDigite uma frase para Gemeos:\n");
            printf("\n");
			fflush(stdin);
            gets(digitado);
            fflush(stdin);
            ponteiro = fopen("Gemeos.txt", "w");
            fprintf(ponteiro, "%s", digitado );
            fclose(ponteiro);
            i=0;
        }
	break;
	    case 4:
                  if (mes = 4)

        {
        	printf("\nDigite uma frase para Cancer:\n");
            printf("\n");
			fflush(stdin);
            gets(digitado);
            fflush(stdin);
            ponteiro = fopen("Cancer.txt", "w");
            fprintf(ponteiro, "%s", digitado );
            fclose(ponteiro);
            i=0;
        }
	break;
	case 5:
                  if (mes = 5)

        {
        	printf("\nDigite uma frase para Leao:\n");
            printf("\n");
			fflush(stdin);
            gets(digitado);
            fflush(stdin);
            ponteiro = fopen("Leao.txt", "w");
            fprintf(ponteiro, "%s", digitado );
            fclose(ponteiro);
            i=0;
        }
       break;
	    case 6:
                  if (mes = 6)

        {
        	printf("\nDigite uma frase para Virgem:\n");
            printf("\n");
			fflush(stdin);
            gets(digitado);
            fflush(stdin);
            ponteiro = fopen("Virgem.txt", "w");
            fprintf(ponteiro, "%s", digitado );
            fclose(ponteiro);
            i=0;
        }
        break;
		case 7:
                  if (mes = 7)

        {
        	printf("\nDigite uma frase para Libra:\n");
            printf("\n");
			fflush(stdin);
            gets(digitado);
            fflush(stdin);
            ponteiro = fopen("Libra.txt", "w");
            fprintf(ponteiro, "%s", digitado );
            fclose(ponteiro);
            i=0;
        }
        break;
		case 8:
                  if (mes = 8)

        {
        	printf("\nDigite uma frase para Escorpiao:\n");
            printf("\n");
			fflush(stdin);
            gets(digitado);
            fflush(stdin);
            ponteiro = fopen("Escorpiao.txt", "w");
            fprintf(ponteiro, "%s", digitado );
            fclose(ponteiro);
            i=0;
        }
        break;
		case 9:
                  if (mes = 9)

        {
        	printf("\nDigite uma frase para Sagitario:\n");
            printf("\n");
			fflush(stdin);
            gets(digitado);
            fflush(stdin);
            ponteiro = fopen("Sagitario.txt", "w");
            fprintf(ponteiro, "%s", digitado );
            fclose(ponteiro);
            i=0;
        }
		break;
		case 10:
                  if (mes = 10)

        {
        	printf("\nDigite uma frase para Capricornio:\n");
            printf("\n");
			fflush(stdin);
            gets(digitado);
            fflush(stdin);
            ponteiro = fopen("Capricornio.txt", "w");
            fprintf(ponteiro, "%s", digitado );
            fclose(ponteiro);
            i=0;
        }
		break;
		case 11:
                  if (mes = 11)

        {
        	printf("\nDigite uma frase para Aquario:\n");
            printf("\n");
			fflush(stdin);
            gets(digitado);
            fflush(stdin);
            ponteiro = fopen("Aquario.txt", "w");
            fprintf(ponteiro, "%s", digitado );
            fclose(ponteiro);
            i=0;
        }
        break;
		case 12:
                  if (mes = 12)

        {
        	printf("\nDigite uma frase para Peixes:\n");
            printf("\n");
			fflush(stdin);
            gets(digitado);
            fflush(stdin);
            ponteiro = fopen("Peixes.txt", "w");
            fprintf(ponteiro, "%s", digitado );
            fclose(ponteiro);
            i=0;
        }}
		break;
	case 3:
	system ("cls");
printf ("\n\n----------- Saiu do programa -----------\n\n");
	break;}

	system ("pause");}}
