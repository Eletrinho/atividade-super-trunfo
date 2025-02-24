#include <stdio.h>

int main(int argc, char const *argv[])
{
    int mapa[10][10] = {{0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                        {0, 0, 0, 3, 3, 3, 0, 0, 0, 0},
                        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                        {0, 3, 0, 0, 0, 0, 0, 0, 0, 0},
                        {0, 3, 0, 0, 0, 0, 0, 0, 0, 0},
                        {0, 3, 0, 0, 0, 0, 0, 0, 0, 0}};

    // Navio diagonal 1
    mapa[1][0] = 3;
    mapa[2][1] = 3;
    mapa[3][2] = 3;

    // Navio diagonal 2
    mapa[7][8] = 3;
    mapa[8][7] = 3;
    mapa[9][6] = 3;

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf("%d ", mapa[i][j]);
        }
        printf("\n");
    }
    return 0;
}
