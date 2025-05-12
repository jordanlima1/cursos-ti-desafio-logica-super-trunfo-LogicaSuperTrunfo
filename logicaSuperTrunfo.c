#include <stdio.h>
#include <string.h>

struct Cidade {
    char estado[50];
    char nome[50];
    char codigocarta[5];
    int pontos_turisticos;
    int codigo_cidade;
    int populacao;
    float pib;
    float area_km2;
    double ppc;
    double forca;
};

void cadastrar_cidade(struct Cidade *c) {
    printf("Digite o estado: ");
    scanf(" %[^\n]", c->estado);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", c->nome);

    printf("Digite o código da carta: ");
    scanf(" %s", c->codigocarta);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &c->pontos_turisticos);

    printf("Digite o código da cidade: ");
    scanf("%d", &c->codigo_cidade);

    printf("Digite a população: ");
    scanf("%d", &c->populacao);

    printf("Digite o PIB: ");
    scanf("%f", &c->pib);

    printf("Digite a área em km²: ");
    scanf("%f", &c->area_km2);

    printf("Digite o PPC (Produto per capita): ");
    scanf("%lf", &c->ppc);

    printf("Digite a força econômica/militar: ");
    scanf("%lf", &c->forca);
}

void comparar_atributo(struct Cidade c1, struct Cidade c2, int escolha) {
    printf("\nComparando cartas com base no atributo escolhido...\n");

    switch (escolha) {
        case 1:
            printf("População:\n");
            if (c1.populacao > c2.populacao)
                printf("%s venceu!\n", c1.nome);
            else if (c1.populacao < c2.populacao)
                printf("%s venceu!\n", c2.nome);
            else
                printf("Empate!\n");
            break;

        case 2:
            printf("Área:\n");
            if (c1.area_km2 > c2.area_km2)
                printf("%s venceu!\n", c1.nome);
            else if (c1.area_km2 < c2.area_km2)
                printf("%s venceu!\n", c2.nome);
            else
                printf("Empate!\n");
            break;

        case 3:
            printf("PIB:\n");
            if (c1.pib > c2.pib)
                printf("%s venceu!\n", c1.nome);
            else if (c1.pib < c2.pib)
                printf("%s venceu!\n", c2.nome);
            else
                printf("Empate!\n");
            break;

        case 4:
            printf("PPC:\n");
            if (c1.ppc > c2.ppc)
                printf("%s venceu!\n", c1.nome);
            else if (c1.ppc < c2.ppc)
                printf("%s venceu!\n", c2.nome);
            else
                printf("Empate!\n");
            break;

        case 5:
            printf("Força:\n");
            if (c1.forca > c2.forca)
                printf("%s venceu!\n", c1.nome);
            else if (c1.forca < c2.forca)
                printf("%s venceu!\n", c2.nome);
            else
                printf("Empate!\n");
            break;

        default:
            printf("Atributo inválido.\n");
    }
}

int main() {
    struct Cidade cidade1, cidade2;

    printf("Cadastro da Carta 1:\n");
    cadastrar_cidade(&cidade1);

    printf("\nCadastro da Carta 2:\n");
    cadastrar_cidade(&cidade2);

    int escolha;
    printf("\nEscolha o atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - PPC\n");
    printf("5 - Força\n");
    printf("Digite sua escolha: ");
    scanf("%d", &escolha);

    comparar_atributo(cidade1, cidade2, escolha);

    return 0;
}
