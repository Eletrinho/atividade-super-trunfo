#include <stdio.h>

// Função recursiva para movimentos da torre
void torre(int n)
{
    if (n > 0)
    {
        printf("Direita \n");
        torre(n - 1);
    }
}
// Função recursiva para movimentos do bispo
void bispo(int n)
{
    if (n > 0)
    {
        for (int i = 0; i < 1; i++)
        {
            printf("Cima, ");
            int j = 0;
            while (i == 0 && j < 1)
            {
                printf("Direita \n");
                j++;
            }
        }
        bispo(n - 1);
    }
}
// Função recursiva para movimentos da rainha
void rainha(int n)
{
    if (n > 0)
    {
        printf("Esquerda \n");
        rainha(n - 1);
    }
}
int main(int argc, char const *argv[])
{
    // Movimentos da Torre
    printf("Movimento da Torre: \n");
    torre(5);

    // Movimento do Bispo
    printf("\n");
    printf("Movimento do Bispo: \n");
    bispo(5);

    // Movimento da Rainha
    printf("\n");
    printf("Movimento da Rainha: \n");
    rainha(8);

    // Movimento do Cavalo com loop complexo
    printf("\n");
    printf("Movimento do Cavalo: \n");
    for (int i = 0, j = 0; i < 2; i++)
    {
        printf("Cima \n");
        if (j == 1)
        {
            printf("Direita \n");
        }
        j++;
    }

    return 0;
}
