#include <stdio.h>

int main()
{
    char state_1 = 'A';
    char cod_1[4] = "A03";
    char name_1[20] = "SerraVerde";
    unsigned long int population_1 = 150500;
    float area_1 = 620.8;
    float pib_1 = 3450000000;
    int turistic_1 = 7;
    float density_1;
    float per_capita_1;
    float super_1;

    char state_2 = 'B';
    char cod_2[4] = "B02";
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

    // printf("Turistic: ");
    // scanf("%d", &turistic_2);

    printf("Enter a number of the attribute you will compare with first: \n"
           "1 = Population || 2 = Area || 3 = PIB || 4 = Turistic || 5 = Density || 6 = Per Capita \n");

    int option1;
    int result1;
    scanf("%d", &option1);

    switch (option1)
    {
    case 1:
        printf("Card 1 Country name: %s \n", name_1);
        printf("Card 2 Country name: %s \n", name_2);
        printf("Attribute used to compare: Population \n"
               "Population of Card 1: %lu \n"
               "Population of Card 2: %lu \n",
               population_1, population_2);
        result1 = population_1 > population_2 ? 1 : 0;
        break;
    case 2:
        printf("Card 1 Country name: %s \n", name_1);
        printf("Card 2 Country name: %s \n", name_2);
        printf("Attribute used to compare: Area \n"
               "Area of Card 1: %.2f \n"
               "Area of Card 2: %.2f \n",
               area_1, area_2);
        result1 = area_1 > area_2 ? 1 : 0;
        break;
    case 3:
        printf("Card 1 Country name: %s \n", name_1);
        printf("Card 2 Country name: %s \n", name_2);
        printf("Attribute used to compare: PIB \n"
               "PIB of Card 1: %.2f \n"
               "PIB of Card 2: %.2f \n",
               pib_1, pib_2);
        result1 = pib_1 > pib_2 ? 1 : 0;
        break;
    case 4:
        printf("Card 1 Country name: %s \n", name_1);
        printf("Card 2 Country name: %s \n", name_2);
        printf("Attribute used to compare: Turistic \n"
               "Turistic of Card 1: %d \n"
               "Turistic of Card 2: %d \n",
               turistic_1, turistic_2);
        result1 = turistic_1 > turistic_2 ? 1 : 0;
        break;
    case 5:
        printf("Card 1 Country name: %s \n", name_1);
        printf("Card 2 Country name: %s \n", name_2);
        printf("Attribute used to compare: Density \n"
               "Density of Card 1: %.2f \n"
               "Density of Card 2: %.2f \n",
               density_1, density_2);
        result1 = density_1 < density_2 ? 1 : 0;
        break;
    case 6:
        printf("Card 1 Country name: %s \n", name_1);
        printf("Card 2 Country name: %s \n", name_2);
        printf("Attribute used to compare: Per Capita \n"
               "Per Capita of Card 1: %.2f \n"
               "Per Capita of Card 2: %.2f \n",
               per_capita_1, per_capita_2);
        result1 = per_capita_1 > per_capita_2 ? 1 : 0;
        break;
    default:
        printf("Invalid option! \n Try again! \n");
    }

    printf("Enter a number of the attribute with which you will compare last: \n"
           "1 = Population || 2 = Area || 3 = PIB || 4 = Turistic || 5 = Density || 6 = Per Capita \n");

    int option2;
    int result2;
    scanf("%d", &option2);

    if (option1 == option2)
    {
        printf("You can't compare the same attribute twice! \n");
        return 0;
    }
    else
    {

        switch (option2)
        {
        case 1:
            printf("Card 1 Country name: %s \n", name_1);
            printf("Card 2 Country name: %s \n", name_2);
            printf("Attribute used to compare: Population \n"
                   "Population of Card 1: %lu \n"
                   "Population of Card 2: %lu \n",
                   population_1, population_2);
            result2 = population_1 > population_2 ? 1 : 0;
            break;
        case 2:
            printf("Card 1 Country name: %s \n", name_1);
            printf("Card 2 Country name: %s \n", name_2);
            printf("Attribute used to compare: Area \n"
                   "Area of Card 1: %.2f \n"
                   "Area of Card 2: %.2f \n",
                   area_1, area_2);
            result2 = area_1 > area_2 ? 1 : 0;
            break;
        case 3:
            printf("Card 1 Country name: %s \n", name_1);
            printf("Card 2 Country name: %s \n", name_2);
            printf("Attribute used to compare: PIB \n"
                   "PIB of Card 1: %.2f \n"
                   "PIB of Card 2: %.2f \n",
                   pib_1, pib_2);
            result2 = pib_1 > pib_2 ? 1 : 0;
            break;
        case 4:
            printf("Card 1 Country name: %s \n", name_1);
            printf("Card 2 Country name: %s \n", name_2);
            printf("Attribute used to compare: Turistic \n"
                   "Turistic of Card 1: %d \n"
                   "Turistic of Card 2: %d \n",
                   turistic_1, turistic_2);
            result2 = turistic_1 > turistic_2 ? 1 : 0;
            break;
        case 5:
            printf("Card 1 Country name: %s \n", name_1);
            printf("Card 2 Country name: %s \n", name_2);
            printf("Attribute used to compare: Density \n"
                   "Density of Card 1: %.2f \n"
                   "Density of Card 2: %.2f \n",
                   density_1, density_2);
            result2 = density_1 < density_2 ? 1 : 0;
            break;
        case 6:
            printf("Card 1 Country name: %s \n", name_1);
            printf("Card 2 Country name: %s \n", name_2);
            printf("Attribute used to compare: Per Capita \n"
                   "Per Capita of Card 1: %.2f \n"
                   "Per Capita of Card 2: %.2f \n",
                   per_capita_1, per_capita_2);
            result2 = per_capita_1 > per_capita_2 ? 1 : 0;
            break;
        default:
            printf("Invalid option! \n Try again! \n");
        }
    }

    if (result1 && result2)
    {
        printf("Card 1 Won! \n");
    }
    else if (result1 == result2)
    {
        printf("Card 2 Won! \n");
    }
    else
    {
        printf("It's a draw! \n");
    }
    return 0;
}
