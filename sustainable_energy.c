#include <stdio.h>

int main()
{
    int choice;

    printf("\n================================\n");
    printf(" SUSTAINABLE ENERGY RESOURCES\n");
    printf("================================\n");

    printf("\n1. Solar Energy");
    printf("\n2. Wind Energy");
    printf("\n3. Hydro Energy");
    printf("\n4. Biomass Energy");
    printf("\n5. Exit");

    printf("\n\nEnter your choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            printf("\nSolar Energy");
            printf("\nEnergy obtained from sunlight.");
            printf("\nUsed in solar panels.");
            break;

        case 2:
            printf("\nWind Energy");
            printf("\nEnergy obtained from moving air.");
            printf("\nUsed in wind turbines.");
            break;

        case 3:
            printf("\nHydro Energy");
            printf("\nEnergy obtained from flowing water.");
            printf("\nUsed in hydroelectric power plants.");
            break;

        case 4:
            printf("\nBiomass Energy");
            printf("\nEnergy obtained from organic waste.");
            printf("\nUsed to produce biogas.");
            break;

        case 5:
            printf("\nThank you for using this program!");
            break;

        default:
            printf("\nInvalid Choice!");
    }

    return 0;
}
