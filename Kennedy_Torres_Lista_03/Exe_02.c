#include <stdio.h>

/*
2. Faça um programa que receba a idade de uma pessoa 
e se idade menor que 30 aparece a mensagem "Você é muito jovem". 
Caso idade maior que 30 anos, o programa não fará nada.
*/

int main(){

    int idade=0;

    printf("Informe a sua idade:\n");
    scanf("%d",&idade);

    if(idade < 30){
        printf("Voce eh muito jovem");
    }
    else{
        // o programa nao farah nada
    }


    return 0;
}