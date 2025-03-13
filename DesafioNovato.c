#include <stdio.h>

int main(){
    printf("Desafio Super Trunfo \n");  
    
    int populacao;
    int pontosturisticos;
    float areakm;
    float pib;
    char estado[2];  
    char codcarta[4];
    char cidade[50];

    printf("Digite a letra do Estado entre A e H:\n");   
    scanf("%s", &estado);

   
    printf("Digite o codigo da carta entre 01 e 04 (ex:A01):\n");
    scanf("%s", &codcarta);

    
    printf("Digite o nome da Cidade:\n");
    scanf("%s", &cidade);

    while (getchar() != '\n');
    printf("Digite a População da Cidade:\n");
    scanf("%d", &populacao);
        
    printf("Digite a area em km²:\n")
    scanf("%d", &areakm);

    

    return 0;
}
