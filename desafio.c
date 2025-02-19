/**
 * Programa para cadastro e comparação de cidades no estilo "Super Trunfo".
 *
 * O programa permite que o usuário cadastre duas cidades fornecendo informações como estado,
 * código da cidade, nome, população, área, PIB e número de pontos turísticos. Após o cadastro,
 * as cidades são comparadas em diferentes atributos e um "Super Poder" é calculado para cada uma.
 *
 */

 #include <stdio.h>
 #include <locale.h>
 

 int main() {
     setlocale(LC_ALL, "Portuguese"); // Permite o uso de caracteres acentuados no terminal
 
     // Declaração de variáveis para a Cidade 1
     char estado1; ///< Estado representado por uma letra de 'A' a 'H'
     int codigo1; ///< Código da cidade (01 a 04)
     char cidade1[40]; ///< Nome da cidade (até 40 caracteres)
     int populacao1; ///< População da cidade
     float area1; ///< Área da cidade em Km²
     float pib1; ///< PIB da cidade
     int turistico1; ///< Número de pontos turísticos
     float densidade1; ///< Densidade populacional
     float perCapita1; ///< PIB per capita
     float super1; ///< Super Poder calculado
 
     // Declaração de variáveis para a Cidade 2
     char estado2;
     int codigo2;
     char cidade2[40];
     int populacao2;
     float area2;
     float pib2;
     int turistico2;
     float densidade2;
     float perCapita2;
     float super2;
 
     // Mensagem inicial
     printf("Bem-vindo ao Super Trunfo. Cadastre suas cidades seguindo as seguintes regras:\n");
 
     // Entrada de dados para a Cidade 1
     printf("Digite o estado usando letras A a H:\n");
     scanf(" %c", &estado1);
 
     printf("Digite o número da cidade usando numerais de 01 a 04:\n");
     scanf(" %d", &codigo1);
 
     printf("Digite o nome da cidade:\n");
     scanf(" %s", cidade1);
 
     printf("Digite o tamanho da população da cidade:\n");
     scanf(" %d", &populacao1);
 
     printf("Digite a área da cidade em Km²:\n");
     scanf(" %f", &area1);
 
     printf("Digite o valor do PIB da cidade:\n");
     scanf(" %f", &pib1);
 
     printf("Digite a quantidade de locais turísticos da cidade:\n");
     scanf(" %d", &turistico1);
 
     // Entrada de dados para a Cidade 2
     printf("\nAgora realize o cadastro da segunda cidade:\n");
 
     printf("Digite o estado usando letras A a H:\n");
     scanf(" %c", &estado2);
 
     printf("Digite o número da cidade usando numerais de 01 a 04:\n");
     scanf(" %d", &codigo2);
 
     printf("Digite o nome da cidade:\n");
     scanf(" %s", cidade2);
 
     printf("Digite o tamanho da população da cidade:\n");
     scanf(" %d", &populacao2);
 
     printf("Digite a área da cidade em Km²:\n");
     scanf(" %f", &area2);
 
     printf("Digite o valor do PIB da cidade:\n");
     scanf(" %f", &pib2);
 
     printf("Digite a quantidade de locais turísticos da cidade:\n");
     scanf(" %d", &turistico2);
 
     // Cálculo dos indicadores para a Cidade 1
     densidade1 = (float) populacao1 / area1; ///< Calcula a densidade populacional
     perCapita1 = pib1 / (float) populacao1; ///< Calcula o PIB per capita
     super1 = (float)populacao1 + area1 + pib1 + (float)turistico1 + (1.0 / densidade1) + perCapita1; ///< Calcula o Super Poder
 
     // Cálculo dos indicadores para a Cidade 2
     densidade2 = (float) populacao2 / area2;
     perCapita2 = pib2 / (float) populacao2;
     super2 = (float)populacao2 + area2 + pib2 + (float)turistico2 + (1.0 / densidade2) + perCapita2;
 
     // Exibição dos resultados da comparação
     printf("\nVamos dar uma olhada na cidade vencedora. (Lembrando que resultado 1 representa a primeira cidade cadastrada e resultado 0 representa a segunda cidade cadastrada.)\n");
     printf("População: %d\n", populacao1 > populacao2);
     printf("Área: %d\n", area1 > area2);
     printf("PIB: %d\n", pib1 > pib2);
     printf("Pontos turísticos: %d\n", turistico1 > turistico2);
     printf("Densidade Populacional: %d\n", (1.0 / densidade1) > (1.0 / densidade2));
     printf("PIB per Capita: %d\n", perCapita1 > perCapita2);
     printf("Super Poder: %d\n", super1 > super2);
 
     return 0;
 }
 
 