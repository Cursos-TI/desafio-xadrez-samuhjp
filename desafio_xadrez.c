#include <stdio.h>

int main(){
    int torre, t;
    int bispo, b;
    int rainha, r;
    int cavalo, c;

      printf("DESAFIO DO XADREZ!!\n");

    printf("\n"); 

    printf("***Torre***\n");
    printf("Digite quantas casas a Torre deve ir verticalmente: \n");
    scanf("%d", &torre);
    
     for (t = 1; t <= 5; t++){
        printf("Direita\n");
    } 
    
    printf("\n"); 
    
    printf("***Bispo***\n");
    printf("Digite quantas casas o Bispo deve ir na diagonal: \n");
    scanf("%d", &bispo);

        for (b = 1; b <= 5; b++){
            printf("Cima\n");
        } 
        printf("Direita\n");

    
    printf("\n"); 

    printf("***Rainha***\n");
    printf("Digite quantas casas a Rainha deve ir horizontalmente: \n");
    scanf("%d", &rainha);

    for (r = 1; r <= 8; r++){
        printf("Esquerda\n");
    } 

    printf("\n"); 

    printf("***Cavalo***\n");
    printf("Digite quantas casas o Cavalo deve ir horizontalmente: \n");
    scanf("%d", &cavalo);

    while (cavalo--){

        for (int c = 0; c <= 5; c++){
        if (c == 1) continue;
       
        if (c == 3) break;
        printf("Cima\n"); 
      }
      printf("Direita\n");
    }

    return 0;
}