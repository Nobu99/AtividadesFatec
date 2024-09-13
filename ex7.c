#include<stdio.h>
#include<stdlib.h>

int main(void){

int numero;

scanf("%d",&numero);
if(numero % 2 == 0){
    printf("par");
}else{
    printf("impar");
}

return 0;
}
