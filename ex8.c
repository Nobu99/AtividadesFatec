#include<stdio.h>
#include<stdlib.h>

int main(void){
int valor, num1, num2,res;

printf("1: adicao / 2: subtracao / 3: multiplicacao / 4: divisao");
scanf("%d",&valor);
scanf("%d",&num1);
scanf("%d",&num2);
    switch (valor){
    case 1:
    res = num1 + num2;
    printf("\nA adicao eh: %d",res);
    break;
    case 2:
    res = num1 - num2;
    printf("\nA subtracao eh:%d",res);
    break;
    case 3:
    res = num1 * num2;
    printf("\nA multiplicacao eh:%d",res);
    break;
    case 4:
    res = num1 / num2;
    printf("\nA divisao eh:%d",res);
    break;
}


return 0;
}
