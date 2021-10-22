/*
*Escreva uma função que calcule o perímetro de um retângulo (P=2b+2h). 
*A função deverá retornar o valor do perímetro calculado. Após o cálculo
* do perímetro altere o valor das variáveis base e altura para: b=2*b e h=2*h. No programa principal imprima o valor do perímetro calculado e os novos valores da base e da altura. OBS: Utilize passagem de parâmetros por referência. Protótipo: float perímetro(float *a, float *b)
*
*Entrada
*Base Altura
* 10 16
*Saída
*Base Altura Perímetro
*
*20 32 52
*
*/

#include <stdio.h>
#include <stdlib.h>

float perimetro(float *b, float *h)
{
    float P=(2 * (*b + *h));
    *b*=2;
    *h*=2;
    return P;
}

int main()
{
    float b,h,P;
    
    scanf("%f %f",&b,&h);

    P=perimetro(&b,&h);

    printf("%g %g %g\n",b,h,P);
    
    return 0;
}