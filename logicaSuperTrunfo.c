#include <stdio.h>
#include <stdlib.h>


int main() {


    char cartaEstado1, cartaEstado2;
    char nomeCidade1[300], nomeCidade2[300], codCarta1[300], codCarta2[300];
    int soma1, soma2, resultado1, resultado2, atributo1, atributo2, vencedor,  nPontosTuristicos1, nPontosTuristicos2;
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
    printf ("ESTADO: %c\n", cartaEstado1);
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
    printf ("ESTADO: %c\n", cartaEstado2);
    printf ("CÓDIGO: %s \n", codCarta2 );
    printf ("NOME DA CIDADE: %s\n", nomeCidade2);
    printf ("POPULAÇÃO: %lu\n", populacao2 );
    printf ("Área: %.2f km² \n", areaKm2);
    printf ("PIB: %.2f\n", pib2);
    printf ("PONTOS TURÍSTICOS: %d\n", nPontosTuristicos2);
    printf("DENSIDADE POPULACIONAL: %.2f hab/km²\n", densidade2);
    printf("PIB PER CAPITA: %.2f \n", pibPerCapita2);
    printf("SUPER PODER: %.2f \n", superPoder2);

    //Inicio do jogo
    printf("\n INÍCIO DA PARTIDA! \n");
    printf("----------------------- \n" );
    printf("Escolha o primeiro atributo que deseja comparar:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turísticos\n");
    printf("5. Densidade Populacional\n");
    scanf(" %d", &atributo1);

    switch(atributo1) {
        case 1:
            printf("Você escolheu comparar a População.\n");
            resultado1 = populacao1 > populacao2 ? 1 : 0;
            break;
        case 2:
            printf("Você escolheu comparar a Área.\n");
            resultado1 = areaKm1 > areaKm2 ? 1 : 0;
            break;
        case 3:
            printf("Você escolheu comparar o PIB.\n");
             resultado1 = pib1 > pib2 ? 1 : 0;
            break;
        case 4:
            printf("Você escolheu comparar os Pontos Turísticos.\n");
             resultado1 = nPontosTuristicos1 > nPontosTuristicos2 ? 1 : 0;
            break;
        case 5:
            printf("Você escolheu comparar a Densidade Populacional.\n");
            resultado1 = densidade1 < densidade2 ? 1 : 0;
            break;
        default:
            printf("Opção inválida.\n");
            break;
    } 
   do {
    printf("Escolha o segundo atributo (diferente do primeiro):\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turísticos\n");
    printf("5. Densidade Populacional\n");
    scanf(" %d", &atributo2);
        if (atributo2 == atributo1) {
        printf("Você não pode escolher o mesmo atributo. Tente novamente.\n");
        }
    } while (atributo2 == atributo1);
         switch(atributo2) {
                case 1:
            printf("Você escolheu comparar a População.\n");
            resultado2 = populacao1 > populacao2 ? 1 : 0;
            break;
            case 2:
            printf("Você escolheu comparar a Área.\n");
            resultado2 = areaKm1 > areaKm2 ? 1 : 0;
            break;
        case 3:
            printf("Você escolheu comparar o PIB.\n");
             resultado2 = pib1 > pib2 ? 1 : 0;
            break;
        case 4:
            printf("Você escolheu comparar os Pontos Turísticos.\n");
             resultado2 = nPontosTuristicos1 > nPontosTuristicos2 ? 1 : 0;
            break;
        case 5:
            printf("Você escolheu comparar a Densidade Populacional.\n");
            resultado2 = densidade1 < densidade2 ? 1 : 0;
            break;
        default:
            printf("Opção inválida.\n");
            break;
        }                  
    printf("Cidades: %s e %s \n", nomeCidade1, nomeCidade2);
    printf("Os atributo comparados foram: %d e %d\n", atributo1, atributo2);
    printf("O valor do atributo de cada carta é: \n");
    if (atributo1 == 1 && atributo2 == 1) {
    printf("População - Carta 1: %lu, Carta 2: %lu\n", populacao1, populacao2);
    } else if (atributo1 == 2 && atributo2 == 2) {
    printf("Área - Carta 1: %.2f km², Carta 2: %.2f km²\n", areaKm1, areaKm2);
    } else if (atributo1 == 3 && atributo2 == 3) {
    printf("PIB - Carta 1: %.2f, Carta 2: %.2f\n", pib1, pib2);
    } else if (atributo1 == 4 && atributo2 == 4) {
    printf("Pontos Turísticos - Carta 1: %d, Carta 2: %d\n", nPontosTuristicos1, nPontosTuristicos2);
    } else if (atributo1 == 5 && atributo2 == 5) {
    printf("Densidade Populacional - Carta 1: %.2f hab/km², Carta 2: %.2f hab/km²\n", densidade1, densidade2);
    }
    printf("A soma dos atributos da Carta 1 é: %.2f \n", superPoder1);
    printf("A soma dos atributos da Carta 2 é: %.2f \n", superPoder2);

    if (resultado1 == 1 && resultado2 == 1) {
        printf("🏆 Carta 1 venceu ambas as comparações!\n");
    } else if ((resultado1 == 1 && resultado2 == 0) || (resultado1 == 0 && resultado2 == 1)) {
        printf("🤝 Cada carta venceu uma comparação. Empate!\n");   
    } else {
        printf("💀 Carta 2 venceu ambas as comparações!\n");
    }

    printf("\n Pressione ENTER para sair...");
    getchar();
    getchar();
    
return 0;
}