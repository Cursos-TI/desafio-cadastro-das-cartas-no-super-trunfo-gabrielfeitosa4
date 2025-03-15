#include <stdio.h>

int main() {
    char Estado1[100];
    char Cidade1[100];
    int Populacao1;
    float km1;
    float Pib1;
    int Pturistico1;
    
    char estado2[100];
    char cidade2[100];
    int populacao2;
    float km2;
    float pib2;
    int pturistico2;

    printf("Bem-vindo ao Jogo de Trunfo de Estados\n");

    // Informações do primeiro estado
    printf("Digite as informações do Estado que deseja, começando pelo Estado: ");
    scanf("%99s", Estado1); 

    printf("Cidade: ");
    scanf("%99s", Cidade1);

    printf("População: ");
    scanf("%d", &Populacao1);

    printf("Área (km²): ");
    scanf("%f", &km1);

    printf("PIB: ");
    scanf("%f", &Pib1);

    printf("Quantidade de pontos turísticos: ");
    scanf("%d", &Pturistico1);

    printf("\nInformações do Estado 1:\n");
    printf("Estado: %s\n", Estado1);
    printf("Cidade: %s\n", Cidade1);
    printf("População: %d\n", Populacao1);
    printf("Área (km²): %.2f\n", km1);
    printf("PIB: %.2f\n", Pib1);
    printf("Pontos turísticos: %d\n", Pturistico1);

    // Informações do segundo estado
    printf("\nAgora digite os dados do segundo estado:\n");

    printf("Estado: ");
    scanf("%99s", estado2);

    printf("Cidade: ");
    scanf("%99s", cidade2);

    printf("População: ");
    scanf("%d", &populacao2);

    printf("Área (km²): ");
    scanf("%f", &km2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Pontos turísticos: ");
    scanf("%d", &pturistico2);

    printf("\nInformações do Estado 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área (km²): %.2f\n", km2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos turísticos: %d\n", pturistico2);

    return 0;
}
