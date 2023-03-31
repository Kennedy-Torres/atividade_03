#include <stdio.h>

/*
4. Elabore um programa para verificação de situação eleitoral,
 onde será informada somente a idade do eleitor, considere as situações abaixo:
*/



int main(){

    int idade=0;

    printf("-------Verificacao de situacao eleitoral-------\n\n");
    printf("Informe a idade do eleitor:\n");
    scanf("%d",&idade);

    if( idade < 0){
        printf(" nao nasceu");
    }
    
    if(idade > -1){
        if(idade < 16){
            printf("nao vota");
        }
    }

    if(idade > 15){
        if(idade < 18){
            printf("opcional");
        }
    }

    if(idade > 17){
        if(idade < 66){
            if( idade !=41){
                printf("obrigatorio");
            }
        }
    }

    if(idade == 41){
        printf("Somente ganha premio, nao vota.");
    }

    if(idade > 65){
        if(idade != 88){
            printf("opcional");
        }
    }

    if(idade == 88){
        printf("Somente ganha premio, nao vota.");
    }

    return 0;
}