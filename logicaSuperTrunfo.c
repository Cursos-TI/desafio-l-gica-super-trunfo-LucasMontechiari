#include <stdio.h>
#include <stdlib.h>

int main() {
         
    char cartaEstado1, cartaEstado2;
    char nomeCidade1[50], nomeCidade2[50], codCarta1[50], codCarta2[50];
    int opcao, vencedor, nPontosTuristicos1, nPontosTuristicos2, resultadoPopulacao, resultadoArea, resultadoPib, resultadoPturisticos, resultadoDensidade, resultadoPibPerCapita, resultadoSuperPoder;
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

    printf ("Digite o estado (CARTA 2):\n");
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

    printf("Escolha qual atributo deseja comparar:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turísticos\n");
    printf("5. Densidade Populacional\n");
    scanf(" %d", &opcao);

    switch(opcao) {
        case 1:
            printf("Você escolheu comparar a População.\n");
            if (populacao1 > populacao2) {
                vencedor = 1;
                printf("Carta 1 é a vencedora na População!\n");
            } else if (populacao2 > populacao1) {
                vencedor = 2;
                printf("Carta 2 é a vencedora na População!\n");
            } else {
                vencedor = 0;
                printf("Empate na População!\n");
            }
            break;
        case 2:
            printf("Você escolheu comparar a Área.\n");
            if (areaKm1 > areaKm2) {
                vencedor = 1;
                printf("Carta 1 é a vencedora na Área!\n");
            } else if (areaKm2 > areaKm1) {
                vencedor = 2;
                printf("Carta 2 é a vencedora na Área!\n");
            } else {
                vencedor = 0;
                printf("Empate na Área!\n");
            }
            break;
        case 3:
            printf("Você escolheu comparar o PIB.\n");
            if (pib1 > pib2) {
                vencedor = 1;
                printf("Carta 1 é a vencedora no PIB!\n");
            } else if (pib2 > pib1) {
                vencedor = 2;  
                printf("Carta 2 é a vencedora no PIB!\n");
            } else {
                vencedor = 0;
                printf("Empate no PIB!\n");
            }
            break;
        case 4:
            printf("Você escolheu comparar os Pontos Turísticos.\n");
            if (nPontosTuristicos1 > nPontosTuristicos2) {
                vencedor = 1;
                printf("Carta 1 é a vencedora nos Pontos Turísticos!\n");
            } else if (nPontosTuristicos2 > nPontosTuristicos1) {
                vencedor = 2;
                printf("Carta 2 é a vencedora nos Pontos Turísticos!\n");
            } else {
                vencedor = 0;
                printf("Empate nos Pontos Turísticos!\n");
            }
            break;
        case 5:
            printf("Você escolheu comparar a Densidade Populacional.\n");
            if (densidade1 < densidade2) {
                vencedor = 1;
                printf("Carta 1 é a vencedora na Densidade Populacional!\n");
            } else if (densidade2 < densidade1) {
                vencedor = 2;
                printf("Carta 2 é a vencedora na Densidade Populacional!\n");
            } else {
                vencedor = 0;
                printf("Empate na Densidade Populacional!\n");
            }
            break;
        default:
            printf("Opção inválida.\n");
            break;
    }

    printf("\nRESULTADOS DA PARTIDA:\n");

    printf("Cidades: %s e %s \n", nomeCidade1, nomeCidade2);
    printf("O atributo comparado foi: %d\n", opcao);
    printf("O valor do atributo de cada carta é: \n");
    if(opcao == 1) {
        printf("População - Carta 1: %lu, Carta 2: %lu\n", populacao1, populacao2);
    } else if(opcao == 2) {
        printf("Área - Carta 1: %.2f km², Carta 2: %.2f km²\n", areaKm1, areaKm2);
    } else if(opcao == 3) {
        printf("PIB - Carta 1: %.2f, Carta 2: %.2f\n", pib1, pib2);
    } else if(opcao == 4) {
        printf("Pontos Turísticos - Carta 1: %d, Carta 2: %d\n", nPontosTuristicos1, nPontosTuristicos2);
    } else if(opcao == 5) {
        printf("Densidade Populacional - Carta 1: %.2f hab/km², Carta 2: %.2f hab/km²\n", densidade1, densidade2);
    }
        
        if (vencedor == 1){
            printf("🏆 Carta 1 venceu!");
        } else if (vencedor == 2){
            printf("🏆 Carta 2 venceu!");
        } else 
            printf("🤝 Empate!");
             

    printf("\n Pressione ENTER para sair...");
    getchar();
    getchar();

return 0;
}