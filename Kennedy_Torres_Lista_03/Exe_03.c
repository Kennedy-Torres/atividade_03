#include <stdio.h>

/*
3. Faça um programa que entra com a idade de uma pessoa
 e se idade maior que 70 anos, aparece a mensagem "Novos 50". 
 Se idade maior que 21 anos, Adulto. Se idade menor que 21 anos, Jovem. 
*/


int main(){

    int idade=0;

    printf("Informe a sua idade:\n");
    scanf("%d",&idade);

    if( idade < 21){
        printf("Jovem");
    }

    if( idade > 21){ //  idade serah maior que 21 e menor que 70 ... forma de fazer sem usar &&
        if(idade <70){
            printf("Adulto");
        }
    }

    if( idade > 70){
        printf("Novos 50");
    }
    
    return 0;
}