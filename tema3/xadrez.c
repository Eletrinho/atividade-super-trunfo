#include <stdio.h>

int main(int argc, char const *argv[])
{
    // Movimentos da Torre
    printf("Movimento da Torre: \n");
    for (int i = 0; i < 5; i++)
    {
        printf("Direita \n");
    }

    // Movimento do Bispo
    printf("\n");
    printf("Movimento do Bispo: \n");
    int bispo = 0;
    while (bispo < 5)
    {
        printf("Cima, Direita \n", bispo+1);
        bispo++;
    }
    

    // Movimento da Rainha
    printf("\n");
    printf("Movimento da Rainha: \n");
    int rainha = 0;
    do
    {
        printf("Esquerda %d \n", rainha+1);
        rainha++;
    } while (rainha < 8);
    
    return 0;
}
