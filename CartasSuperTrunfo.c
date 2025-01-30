#include <stdio.h>

int main() {

    printf("Desafio Super Trunfo - Países\n");

    printf("Brasil\n");

  
    char estadoA[50] = "Minas Gerais\n";
    char MG01;
    char MG02;
    char MG03;
    char MG04;
    int populacao;
    int pontos;

    
    char estadoB[50] = "Sao Paulo\n";
    char SP01;
    char SP02;
    char SP03;
    char SP04;

    
    char estadoC[50] = "Rio de Janeiro\n";
    char RJ01;
    char RJ02;
    char RJ03;
    char RJ04;


    char estadoD[50] = "Goias\n";
    char GO01;
    char GO02;
    char GO03;
    char GO04;


    char estadoE[50] = "Espirito Santo\n";
    char ES01;
    char ES02;
    char ES03;
    char ES04;


    char estadoF[50] = "Bahia\n";
    char BA01;
    char BA02;
    char BA03;
    char BA04;


    char estadoG[50] = "Rio Grande do Sul\n";
    char A01;
    char A02;
    char A03;
    char A04;


    char estadoH[50] = "Alagoas\n";
    char AL01;
    char AL02;
    char AL03;
    char AL04;

    

        printf("Estado: %s\n", estadoA);
        printf("Cidade 01: \n");
        scanf("%s", &MG01);

        printf("Populacao: \n");
        scanf("%d", &populacao);

        printf("Quantidade de pontos turisticos:");
        scanf("%d", &pontos);


    
        printf("Estado: %s\n", estadoB);
        printf("Estado: %s\n", estadoC);
        printf("Estado: %s\n", estadoD);
        printf("Estado: %s\n", estadoE);
        printf("Estado: %s\n", estadoF);
        printf("Estado: %s\n", estadoG);
        printf("Estado: %s\n", estadoH);

    
    return 0;
}
