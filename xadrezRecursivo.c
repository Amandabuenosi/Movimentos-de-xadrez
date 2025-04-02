#include <stdio.h>

//declarando as recursividades ::: VOID

void bispo (int numBispo){ // variavel local Bispo
        if (numBispo > 0){     

            bispo(numBispo - 1);
            printf("Cima, direita\n");}// printf nessa posição conta crescente.

    }

void torre (int numTorre){ // variavel local Torre
        if (numTorre > 0){     
    
            torre(numTorre - 1);
            printf("Direita. \n");}

        }

void rainha (int numRainha){ // variavel local Rainha
        if (numRainha > 0){     

            rainha(numRainha - 1);
            printf("Esquerda \n");}
    }

int main (){/* Criando simulação de alguns movimentos de 4 peças de xadrez:*/


int option; // variavel menu inicial



printf("Seja bem vindo ao simulador do jogo de Xadrez.\n");
printf("1.  INICIAR JOGO.\n");
printf("2.  SAIR DO JOGO.\n");
scanf("%d", &option);

switch (option){ //inserindo menu inicial, para jogar ou sair do jogo.

case 1:

    int selectPart;
    printf("Escolha uma peça para simulador o movimento: \n");
    printf("1. Bispo\n");
    printf("2. Torre\n");
    printf("3. Rainha\n");
    printf("4. Cavalo\n");
    scanf("%d", &selectPart);// variavel local

    switch (selectPart) // Inserindo menu para escolher peça
    {
    case 1: //Movimento Bispo usando > recursividade void e if <*******************************************
    
        int quantidadeBispo = 5; // quantidade de vezes que vai andar a peça;

        printf("O movimento do Bispo é: \n");
        bispo (quantidadeBispo);
        printf("\n");//espaçamento
                

    break;
    case 2: // Movimento Torre usando > recursividade void e if <*******************************************
    
        int quantidadeTorre = 5; // quantidade de vezes que vai andar a peça;

        printf("O movimento da Torre é: \n");
        torre (quantidadeTorre);
        printf("\n"); //espaçamento   


    break;
    case 3: //Movimento Rainha usando > recursividade void e if <*******************************************

        int quantidadeRainha = 8; // quantidade de vezes que vai andar a peça;

        printf("O movimento da Rainha é: \n");
        rainha (quantidadeRainha);
        printf("\n");//espaçamento


    break;
    case 4: //Movimento do Cavalo usando > múltiplas variáveis e condições <***************************************
        printf("O movimento do Cavalo é: \n");
        int vertical, horizontal; //variaveis locais
        
        for (vertical = 2, horizontal = 0; vertical > horizontal ; vertical--, horizontal++) { // direita até o valor vertical. externo
            for (vertical=0 , horizontal=3; vertical < horizontal ; vertical++, horizontal--) // cima até o valor da horizontal. interno
                {
                    printf("Cima\n");
                }
                               
            printf("Direita\n");
        }
        printf("\n");      //espaçamento

    break;
    default:
    printf("Opção inválida!\n");
    break;
    }

break;
case 2: // menu inicial opção 2
    printf("Saindo do jogo...\n");

break;
default:
        printf("Opção inválida\n");

break;
}
    return 0;

}