#include <stdio.h>
#include <locale.h>

<<<<<<< HEAD
int main(){
    setlocale(LC_ALL, "Portuguese");
    char estado;
    int codigo;
    char cidade[40];
    int populacao;
    float area;
    float pib;
    int turistico;
    float densidade;
    float perCapita;
=======
/**
 * Programa para cadastro de cidades no estilo "Super Trunfo".
 * O usuário insere informações sobre uma cidade e o programa exibe os dados cadastrados.
 *
 * Regras:
 * - Estado deve ser representado por uma letra de 'A' a 'H'.
 * - Código da cidade deve estar entre 01 e 04.
 * - Nome da cidade deve ter até 40 caracteres.
 * - População, área, PIB e número de pontos turísticos devem ser informados.
 */
>>>>>>> ef516b95394348d5b0ac22a849937edb02e6d619


int main(){ 
    setlocale(LC_ALL, "Portuguese"); // Configura o uso de caracteres acentuados no terminal

    // Declaração de variáveis
    char estado; // Representa o estado da cidade (A-H)
    int codigo; // Código numérico da cidade (01-04)
    char cidade[40]; // Nome da cidade
    int populacao; // População da cidade
    float area; // Área da cidade em km²
    float pib; // PIB da cidade em bilhões de reais
    int turistico; // Número de pontos turísticos na cidade

    // Mensagem inicial
    printf("Bem vindo ao Super Trunfo. Cadastre suas cidades seguindo as seguintes regras: \n");

    // Entrada de dados
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

<<<<<<< HEAD
    densidade = (float) populacao / area;
    perCapita =  pib / (float) populacao;

=======
    // Exibição dos dados cadastrados
>>>>>>> ef516b95394348d5b0ac22a849937edb02e6d619
    printf("\n\nCidade cadastrada com sucesso! \n\n");
    printf("Estado: %c \n", estado);
    printf("Código da carta: %c%02d \n", estado, codigo);
    printf("Nome da cidade: %s \n", cidade);
    printf("População: %d de habitantes \n", populacao);
    printf("Área: %.2f km² \n", area);
    printf("PIB: %.2f bilhões de reais \n", pib);
    printf("Número de Pontos Turísticos: %d \n", turistico);
    printf("Densidade Populacional: %.2f hab/km² \n", densidade);
    printf("PIB per Capita: %.2f \n", perCapita);

    return 0;
}
