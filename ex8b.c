#include<stdio.h>
#include<stdlib.h>
 int main() {
float valor, num1, num2,res;
printf("1: adicao / 2: subtracao / 3: multiplicacao / 4: divisao");
scanf("%f",&valor);
scanf("%f",&num1);
scanf("%f",&num2);

 if(valor == 1){
    res = num1 + num2;
    printf("\nA adicao eh: %.2f",res);
   }
    if (valor == 2){
    res = num1 - num2;
    printf("\nA subtracao eh: %.2f",res);
    }
    if(valor == 3){
    res = num1 * num2;
    printf("\nA multiplicacao eh: %.2f",res);
    }
   if(valor == 4){
    res = num1 / num2;
    printf("\nA divisao eh: %.2f",res);
   }

 }
