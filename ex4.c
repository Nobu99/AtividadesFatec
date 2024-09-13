#include<stdio.h>
#include<stdlib.h>

int main(void){
    int distancia;
    float litros, kmlitro;
    scanf("%d",&distancia);
    scanf("%f",&litros);

    kmlitro = distancia*litros;

    printf("%.2f",kmlitro);


return 0;
}
