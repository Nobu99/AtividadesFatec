#include<stdio.h>
#include<stdlib.h>

int main(void){
float nota1, nota2, media;
scanf("%f",&nota1);
scanf("%f",&nota2);
media = (nota1*2+nota2*3)/(2+3);
printf("%.2f",media);

return 0;
}
