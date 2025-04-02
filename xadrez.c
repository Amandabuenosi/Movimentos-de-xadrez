#include <stdio.h>

int main(){/* Criando simulação de alguns movimentos de 3 peças de xadrez:*/



int option; // variavel menu inicial



printf("Seja bem vindo ao simulador do jogo de Xadrez.\n");
printf("1.  INICIAR JOGO.\n");
printf("2.  SAIR DO JOGO.\n");
scanf("%d", &option);

switch (option) //inserindo menu inicial, para jogar ou sair do jogo.
{
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
    case 1: //Movimento Bispo usando > While <*******************************************
        int bispo = 1;//variavel local
        while (bispo<=5)
        {
            printf("Cima, Direita\n");
            bispo++;
        }
        

    break;
    case 2: // Movimento Torre usando > for <*******************************************
    
        for (int torre = 0; torre <= 4 ; torre++) //variavel com nome da peça.
        {
            printf("Direita\n");
        }
            

    break;
    case 3: //Movimento Rainha usando > Do while <*******************************************
        int rainha=1; //variavel local

        do
        {
            printf("Esquerda\n");
            rainha++;

        } while (rainha<=8);
            

    break;
    case 4: //Movimento do Cavalo usando >while e for <***************************************
       
        int vertical, horizontal; //variaveis locais
        vertical =1;
        horizontal=1;

        while (vertical == horizontal)
        
            for (int horinzontal; horizontal <=2 ; horizontal++) { //executar 2x interno e finaliza com o externo.
                printf("Baixo\n");
            }
            vertical++;
            printf("Esquerda\n");
        }
        
        

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