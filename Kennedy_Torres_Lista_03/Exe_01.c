#include <stdio.h>

// 1. Programa que calcule a média de 5 notas de um aluno. 

int main(){

    float nota[5] ={};

    printf("Informe a sua nota de matematica:\n");
    scanf("%f",&nota[0]);

    printf("Informe a sua nota de portugues:\n");
    scanf("%f",&nota[1]);

    printf("Informe a sua nota de geografia:\n");
    scanf("%f",&nota[2]);

    printf("Informe a sua nota de historia:\n");
    scanf("%f",&nota[3]);

    printf("Informe a sua nota de ingles:\n");
    scanf("%f",&nota[4]);



    printf("A media aritmetica das 5 notas do aluno eh: %.2f", (nota[0]+nota[1]+nota[2]+nota[3]+nota[4])/5);
    return 0;
}