#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    char estado;
    int codigo;
    char cidade[40];
    int populacao;
    float area;
    float pib;
    int turistico;

    printf("Bem vindo ao Super Trunfo. Cadastre suas cidades seguindo as seguintes regras: \n");

    printf("Digite o estado usando letras A a H: \n");
    scanf(" %c", &estado);

    printf("Digite o número da cidade usando numerais de 01 a 04: \n");
    scanf(" %d", &codigo);

    printf("Digite o nome da cidade: \n");
    scanf(" %s", cidade);

    printf("Digite o tamanho da população da cidade: \n");
    scanf(" %d", &populacao);

    printf("Digite a área da cidade em Km²: \n");
    scanf(" %f", &area);

    printf("Digite o valor do PIB da cidade: \n");
    scanf(" %f", &pib);

    printf("Digite a quantidade de locais turísticos da cidade: \n");
    scanf(" %d", &turistico);


    printf("\n\nCidade cadastrada com sucesso! \n\n");

    printf("Estado: %c \n", estado);
    printf("Código da carta: %c%02d \n", estado, codigo);
    printf("Nome da cidade: %s \n", cidade);
    printf("População: %d de habitantes \n", populacao);
    printf("Área: %.2f km² \n", area);
    printf("PIB: %.2f bilhões de reais \n", pib);
    printf("Número de Pontos Turísticos: %d \n", turistico);

    return 0;
}
