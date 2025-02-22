#include <stdio.h>

int main()
{   
    char state_1 = 'A';
    char cod_1[3] = "A03";
    char name_1[20] = "SerraVerde";
    unsigned long int population_1 = 150500;
    float area_1 = 620.8;
    float pib_1 = 3450000000;
    int turistic_1 = 7;
    float density_1;
    float per_capita_1;
    float super_1;

    char state_2 = 'B';
    char cod_2[3] = "B02";
    char name_2[20] = "PortoVerde";
    unsigned long int population_2 = 20000;
    float area_2 = 780.8;
    float pib_2 = 50000000;
    int turistic_2 = 10;
    float density_2;
    float per_capita_2;
    float super_2;

    // printf("Enter information of Card 1 \n");
    // printf("Name: ");
    // scanf("%s", &name_1);

    // printf("Population: ");
    // scanf("%d", &population_1);

    // printf("Area: ");
    // scanf("%f", &area_1);

    density_1 = population_1 / area_1;

    // printf("PIB: ");
    // scanf("%f", &pib_1);

    per_capita_1 = pib_1 / population_1;

    super_1 = population_1 + area_1 + pib_1 + per_capita_1 + (1 / density_1) + turistic_1;
    // printf("Turistic: ");
    // scanf("%d", &turistic_1);

    // printf("Enter information of Card 2 \n");
    // printf("Name: ");
    // scanf("%s", &name_2);

    // printf("Population: ");
    // scanf("%d", &population_2);

    // printf("Area: ");
    // scanf("%f", &area_2);

    density_2 = population_2 / area_2;

    // printf("PIB: ");
    // scanf("%f", &pib_2);

    per_capita_2 = pib_2 / population_2;
    super_2 = population_2 + area_2 + pib_2 + per_capita_2 + (1 / density_2) + turistic_2;

    // printf("Turistic: ");
    // scanf("%d", &turistic_2);

    printf("Comparação de Cartas: \n");
    printf("(1) para sim e (0) para não \n");
    printf("População: Carta 1 venceu? (%d) \n", population_1 > population_2);
    printf("Área: Carta 1 venceu? (%d) \n", area_1 > area_2);
    printf("PIB: Carta 1 venceu? (%d) \n", pib_1 > pib_2);
    printf("Turistic: Carta 1 venceu? (%d) \n", turistic_1 > turistic_2);
    printf("Densidade: Carta 1 venceu? (%d) \n", density_1 < density_2);
    printf("PIB per capita: Carta 1 venceu? (%d) \n", per_capita_1 > per_capita_2);
    printf("Super: Carta 1 venceu? (%d) \n", super_1 > super_2);
    return 0;
}
