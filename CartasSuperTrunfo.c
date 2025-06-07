#include <stdio.h>
main() {
    //dados da primeira carta
    int populacao1, pontos_turisticos1;
    float area1, pib1;
    int populacao2, pontos_turisticos2;
    float area2, pib2;
    
    //entada de dados da primeira carta
    printf("Digite a populacao da primeira carta:\n");
    scanf("%d", &populacao1);

    printf("Digite a area da primeira carta:\n");
    scanf("%f", &area1);

    printf("Digite o PIB da primeira carta:\n");
    scanf("%f", &pib1);

    printf("Digiete o numero de pontos turisticos da primeira carta:\n");
    scanf("%d", &pontos_turisticos1);

    //entrada de dados da seguanda carta
    pintf("Digite a populacao da segunda carta:\n");
    scanf("%d", &populacao2);

    printf("Digite a area da segunda carta:\n");
    scanf("%f", &area2);

    printf("Digite o PIB da segunda carta:\n");
    scanf("%f", &pib2);

    printf("Digiete o numero de pontos turisticos da segunda carta:\n");
    scanf("%d", &pontos_turisticos2);

    //Saida de dados da pirmeira carta
    Printf("\nDados da prmeira carta:\n");
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos turisticos: %d\n", pontos_turisticos1);

    //Saida de dados da segunda carta
    printf("\nDados da segunda carta:\n");
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos turisticos: %d\n", pontos_turisticos2);

    return 0;
}
