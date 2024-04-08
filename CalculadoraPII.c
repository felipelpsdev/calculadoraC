#include <stdio.h>
#include <stdlib.h>

float num1;
float num2;
float num3;
float result;

void num();
void numf();
void somar();
void subtrair();
void multiplicar();
void dividir();
void fatorial();
void exponenciacao();

void main(){
    int menu;
    do{
        printf(":::::: Calculadora ::::::: \n\n");
        printf("1 - SOMAR\n");
        printf("2 - SUBTRAIR \n");
        printf("3 - MULTIPLICAR\n");
        printf("4 - DIVIDIR \n");
        printf("5 - FATORIAL \n");
        printf("6 - EXPONENCIACAO \n");
        printf("7 - RESULTADO ATUAL \n");
        printf("0 - SAIR \n");
        printf(">>> ");
        scanf("%d", &menu);
        switch(menu){
            case 1:
                num();
                somar();
                break;
            case 2:
                num();
                subtrair();
                break;
            case 3:
                num();
                multiplicar();
                break;
            case 4:
                num();
                dividir();
                break;
            case 5:
                numf();
                fatorial();
                break;
            case 6:
                num();
                exponenciacao();
                break;
            case 7:
                printf("Resultado atual: %.2f\n", result);
                break;
            case 0:
                break;
            default:
                printf("Opçao invalida! ");
        }
    } while(menu != 0);
    return 0;
}

void num(){
    printf("Digite um numero: ");
    scanf("%f", &num1);
    printf("Digite outro numero: ");
    scanf("%f", &num2);
    
    return 0;
}

void numf(){
    printf("Digite um numero: ");
    scanf("%f", &num3);
    
    return 0;
}

void somar(){
    result = num1 + num2;
    printf("A SOMA E: %.2f\n", result);
    
    return 0;
}

void subtrair(){
    result = num1 - num2;
    printf("A SUBTRACAO E: %.2f\n", result);
    
    return 0;
}

void multiplicar(){
    result = num1 * num2;
    printf("A multiplicacao E: %.2f\n", result);
    
    return 0;
}

void dividir(){
    if(num2 != 0) {
        result = num1 / num2;
        printf("A DIVISAO E: %.2f\n", result);
    } else {
        printf("Erro: Divisao por zero!\n");
    }
    
    return 0;
}

void fatorial(){
    float fat = 1;
    int i;
    for(i = 1; i <= num3; ++i) {
        fat *= i;
    }
    printf("Fatorial calculado: %.2f\n", fat);
    result = fat;
    
    return 0;
}

void exponenciacao(){
    result = 1;
    int i;
    for(i = 0; i < num2; ++i) {
        result *= num1;
    }
    printf("%.2f elevado a %.2f e: %.2f\n", num1, num2, result);
    
    return 0;
}
