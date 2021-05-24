#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <conio.h>
#include <time.h>


int main(){
    //declaração das variaveis necessárias
int comecar;
int dinheiro = 5000;
int aposta;
int escolha;
int numeroRandom = 0;
bool var = true;

//explicação de como jogar
        printf("\t\t*** ROLETA ***\n\n\n");

printf("Como jogar? -> Primeiro ira escolher a cor que deseja [Vermelho = Par][Preto = Impar]\n"
       "\t\tApos isso ira apostar o valor desejado\n\n\n");

//começo do algoritimo do jogo

       printf("\n\nDigite 1 comecar!->");
        scanf("%i", &comecar);

//looping para o jogo continuar mesmo com o fim o if
while(var == true){

    //verificação para o jogo começar
        if(comecar == 1){

            //gereção dos numeros aleatórios
            srand(time(NULL));
            numeroRandom = rand() % 100;

            //Escolhas do jogador
            printf("\n\n->Voce tem R$%i para apostar\n\n", dinheiro);
            printf("Para escolher a cor Vermelha digite 1, para escolher a cor Preta digite 0 ->");
            scanf("%i",&escolha);
            printf("Quanto voce ira apostar?");
            scanf("%i",&aposta);

                //verificação das escolhas do jogador

                if(numeroRandom % 2 == 0){
                    if(escolha == 1){
                        system("cls");
                        dinheiro = dinheiro + aposta;
                        printf("Parabens voce ganhou R$ %i, agora voce esta com R$%i***\n\n", aposta,dinheiro);
                        printf("\t\t\n Numero sorteado foi?-> [%i]",numeroRandom);
                    }

                    if(escolha == 0){
                        system("cls");
                        dinheiro = dinheiro - aposta;
                        printf("Que pena voce perdeu R$%i, agora voce esta com R$%i***\n\n", aposta,dinheiro);
                        printf("\t\t\nNumero sorteado foi?-> [%i]",numeroRandom);
                    }

                    int continuar;
                    printf("\n\nPara continuar digite 1->");
                    scanf("%i",&continuar);
                    if(continuar == 1){
                        system("cls");
                    }

                }


                if(numeroRandom % 2 == 1){
                    if(escolha == 0){
                        system("cls");
                        dinheiro = dinheiro + aposta;
                        printf("Parabens voce ganhou R$ %i, agora voce esta com R$%i***\n\n", aposta,dinheiro);
                        printf("\t\t\n Numero sorteado foi?-> [%i]",numeroRandom);
                    }

                    if(escolha == 1){
                        system("cls");
                        dinheiro = dinheiro - aposta;
                        printf("Que pena voce perdeu R$%i, agora voce esta com R$%i***\n\n", aposta,dinheiro);
                        printf("\t\t\nNumero sorteado foi?-> [%i]",numeroRandom);
                    }

                    int continuar;
                    printf("\n\nPara continuar digite 1->");
                    scanf("%i",&continuar);
                    if(continuar == 1){
                        system("cls");
                    }
                }




        }else{
            printf("Voce precisa digitar 1 para comecar\n\n");
            system("cls");
        }



    //fim do looping
    }





}
