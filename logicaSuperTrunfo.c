

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.


#include <stdio.h>
#include <stdlib.h>


int main(){
            
    char cartaEstado1, cartaEstado2;
    char nomeCidade1[50], nomeCidade2[50], codCarta1[50], codCarta2[50];
    int nPontosTuristicos1, nPontosTuristicos2, resultadoPopulacao, resultadoArea, resultadoPib, resultadoPturisticos, resultadoDensidade, resultadoPibPerCapita, resultadoSuperPoder;
    float areaKm1, pib1, areaKm2, pib2, densidade1, densidade2, pibPerCapita1, pibPerCapita2, superPoder1, superPoder2;
    unsigned long int populacao1, populacao2; 

    printf ("Digite o estado (CARTA 1):\n");
    scanf (" %c", &cartaEstado1);

    printf ("Digite o código (CARTA 1):\n");
    scanf (" %s", &codCarta1);

    printf ("Digite o nome da Cidade (CARTA 1):\n");
    scanf (" %s", &nomeCidade1);

    printf ("Digite a população da Cidade (CARTA 1):\n");
    scanf (" %lu", &populacao1);

    printf ("Digite a Área em km² (CARTA 1):\n");
    scanf (" %f", &areaKm1);

    printf ("Digite o PIB da Cidade (CARTA 1):\n");
    scanf (" %f", &pib1);

    printf ("Digite o número de pontos turísticos (CARTA 1):\n");
    scanf (" %d", &nPontosTuristicos1);

    densidade1 = populacao1 / areaKm1;
    pibPerCapita1 = pib1 / populacao1;
    superPoder1 = populacao1 + areaKm1 + pib1 + pibPerCapita1 + (1.0f / densidade1) + nPontosTuristicos1;

    printf ("\n CARTA 1: \n");
    printf ("ESTADO: %c \n", cartaEstado1 );
    printf ("CÓDIGO: %s \n", codCarta1 );
    printf ("NOME DA CIDADE: %s \n", nomeCidade1);
    printf ("POPULAÇÃO: %lu\n", populacao1 );
    printf ("Área: %.2f km² \n", areaKm1);
    printf ("PIB: %.2f\n", pib1);
    printf ("PONTOS TURÍSTICOS: %d\n", nPontosTuristicos1);
    printf("DENSIDADE POPULACIONAL: %.2f hab/km²\n", densidade1);
    printf("PIB PER CAPITA: %.2f\n", pibPerCapita1);
    printf("SUPER PODER: %.2f\n", superPoder1);

    printf ("\n Digite o estado (CARTA 2):\n");
    scanf (" %c", &cartaEstado2);

    printf ("Digite o código (CARTA 2):\n");
    scanf (" %s", &codCarta2);

    printf ("Digite o nome da Cidade (CARTA 2):\n");
    scanf (" %s", &nomeCidade2);

    printf ("Digite a população da Cidade (CARTA 2):\n");
    scanf (" %lu", &populacao2);

    printf ("Digite a Área em km² (CARTA 2):\n");
    scanf (" %f", &areaKm2);

    printf ("Digite o PIB da Cidade (CARTA 2):\n");
    scanf (" %f", &pib2);

    printf ("Digite o número de pontos turísticos (CARTA 2):\n");
    scanf (" %d", &nPontosTuristicos2);

    densidade2 = populacao2 / areaKm2;
    pibPerCapita2 = pib2 / populacao2;
    superPoder2 = populacao2 + areaKm2 + pib2 + pibPerCapita2 + (1.0f / densidade2) + nPontosTuristicos2;

    printf ("\n CARTA 2: \n");
    printf ("ESTADO: %c \n", cartaEstado2 );
    printf ("CÓDIGO: %s \n", codCarta2 );
    printf ("NOME DA CIDADE: %s\n", nomeCidade2);
    printf ("POPULAÇÃO: %lu\n", populacao2 );
    printf ("Área: %.2f km² \n", areaKm2);
    printf ("PIB: %.2f\n", pib2);
    printf ("PONTOS TURÍSTICOS: %d\n", nPontosTuristicos2);
    printf("DENSIDADE POPULACIONAL: %.2f hab/km²\n", densidade2);
    printf("PIB PER CAPITA: %.2f\n", pibPerCapita2);
    printf("SUPER PODER: %.2f\n", superPoder2);

    printf("\nRESULTADOS DA PARTIDA:\n");

    int pontosCarta1 = 0, pontosCarta2 = 0;

    if (populacao1 > populacao2) {
        printf("POPULAÇÃO: Carta 1 venceu (%lu > %lu)\n", populacao1, populacao2);
        pontosCarta1++;
    } else if (populacao2 > populacao1) {
        printf("POPULAÇÃO: Carta 2 venceu (%lu > %lu)\n", populacao2, populacao1);
        pontosCarta2++;
    } else {
        printf("POPULAÇÃO: Empate (%lu = %lu)\n", populacao1, populacao2);
    }

    if (areaKm1 > areaKm2) {
        printf("ÁREA: Carta 1 venceu (%.2f > %.2f)\n", areaKm1, areaKm2);
        pontosCarta1++;
    } else if (areaKm2 > areaKm1) {
        printf("ÁREA: Carta 2 venceu (%.2f > %.2f)\n", areaKm2, areaKm1);
        pontosCarta2++;
    } else {
        printf("ÁREA: Empate (%.2f = %.2f)\n", areaKm1, areaKm2);
    }

    if (pib1 > pib2) {
        printf("PIB: Carta 1 venceu (%.2f > %.2f)\n", pib1, pib2);
        pontosCarta1++;
    } else if (pib2 > pib1) {
        printf("PIB: Carta 2 venceu (%.2f > %.2f)\n", pib2, pib1);
        pontosCarta2++;
    } else {
        printf("PIB: Empate (%.2f = %.2f)\n", pib1, pib2);
    }

    if (nPontosTuristicos1 > nPontosTuristicos2) {
        printf("PONTOS TURÍSTICOS: Carta 1 venceu (%d > %d)\n", nPontosTuristicos1, nPontosTuristicos2);
        pontosCarta1++;
    } else if (nPontosTuristicos2 > nPontosTuristicos1) {
        printf("PONTOS TURÍSTICOS: Carta 2 venceu (%d > %d)\n", nPontosTuristicos2, nPontosTuristicos1);
        pontosCarta2++;
    } else {
        printf("PONTOS TURÍSTICOS: Empate (%d = %d)\n", nPontosTuristicos1, nPontosTuristicos2);
    }

    if (densidade1 > densidade2) {
        printf("DENSIDADE POPULACIONAL: Carta 1 venceu (%.2f > %.2f)\n", densidade1, densidade2);
        pontosCarta1++;
    } else if (densidade2 > densidade1) {
        printf("DENSIDADE POPULACIONAL: Carta 2 venceu (%.2f > %.2f)\n", densidade2, densidade1);
        pontosCarta2++;
    } else {
        printf("DENSIDADE POPULACIONAL: Empate (%.2f = %.2f)\n", densidade1, densidade2);
    }

    if (pibPerCapita1 > pibPerCapita2) {
        printf("PIB PER CAPITA: Carta 1 venceu (%.2f > %.2f)\n", pibPerCapita1, pibPerCapita2);
        pontosCarta1++;
    } else if (pibPerCapita2 > pibPerCapita1) {
        printf("PIB PER CAPITA: Carta 2 venceu (%.2f > %.2f)\n", pibPerCapita2, pibPerCapita1);
        pontosCarta2++;
    } else {
        printf("PIB PER CAPITA: Empate (%.2f = %.2f)\n", pibPerCapita1, pibPerCapita2);
    }

    if (superPoder1 > superPoder2) {
        printf("SUPER PODER: Carta 1 venceu (%.2f > %.2f)\n", superPoder1, superPoder2);
        pontosCarta1++;
    } else if (superPoder2 > superPoder1) {
        printf("SUPER PODER: Carta 2 venceu (%.2f > %.2f)\n", superPoder2, superPoder1);
        pontosCarta2++;
    } else {
        printf("SUPER PODER: Empate (%.2f = %.2f)\n", superPoder1, superPoder2);
    }

    printf("\nPLACAR FINAL:\n");
    printf("Carta 1: %d pontos\n", pontosCarta1);
    printf("Carta 2: %d pontos\n", pontosCarta2);

    if (pontosCarta1 > pontosCarta2) {
        printf("🏆 Carta 1 é a vencedora!\n");
    } else if (pontosCarta2 > pontosCarta1) {
        printf("🏆 Carta 2 é a vencedora!\n");
    } else {
        printf("🤝 Empate geral!\n");
    }

    printf("\nPressione ENTER para sair...");
    getchar();
    getchar();

return 0;
}
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio

    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

   
