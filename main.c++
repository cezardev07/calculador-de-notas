#include <iostream>
#include <stdio.h>
#include <string.h>

int main () {

    float nome[20], nota1, nota2;
    int media, total;
    
    printf("\n ============= CALCULAR NOTA: ============\n");

    printf("\n Qual seu nome => ");
    scanf("%s",nome);

    printf("\n Digite sua nota 1: ");
    scanf("%f", & nota1);

    printf("\n Digite sua nota 2: ");
    scanf("%f", & nota2);

    media = (nota1 + nota2) / 2;
    total = (nota1 + nota2);
    //media = (nota1 + nota2);
    
    if(media >= 20){
        // aprovado
        printf("\n ================== NOTA =================\n");

        printf("\n Aluno(a): %s \n",nome);
        printf("\n APROVADO\n");
        printf("\n Media: %d\n",media);
        printf("\n Total: %d\n",total);

        printf("\n ================== NOTA =================\n");
    }else if(media >= 10){
        // recuperção
        printf("\n ================== NOTA =================\n");

        printf("\n Aluno(a): %s \n",nome);
        printf("\n RECUPERACAO\n");
        printf("\n Media: %d\n",media);
        printf("\n Total: %d\n",total);

        printf("\n ================== NOTA =================\n");
    }else{
        // reprovado
        printf("\n ================== NOTA =================\n");

        printf("\n Aluno(a): %s \n",nome);
        printf("\n REPROVADO\n");
        printf("\n Media: %d\n",media);
        printf("\n Total: %d\n",total);

        printf("\n ================== NOTA =================\n");
    };

    return 0;
};
