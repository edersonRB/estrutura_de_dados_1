/*
*Escreva uma função double* max(double* a, int size) que retorne um ponteiro para o maior valor
*contido em um array de 8 elementos do tipo double, se o array estiver vazio, retorne NULL.
*O usuário deve informar como entrada os valores a serem armazenados no array.   
*A saída deverá imprimir na main() o conteúdo da posição de memória retornado pela função.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

double *max(double *a, int size);

int main()
{
    double v[8];
    char aux[15];
    int nullCount = 0;

    for (int i = 0; i < 8; i++)
    {
        scanf("%s", aux);
        if (!strcmp(aux, "NULL"))
        {
            //printf("null \n");
            v[i] = 0;
            nullCount++;
        }
        else
        {
            //printf("not null %lf\n", strtod(aux, NULL));
            v[i] = strtod(aux, NULL);
        }
    }
    if (nullCount >= 8)
        printf("NULL\n");
    else
        printf("%g", *max(v, 8));
    return 0;
}

double *max(double *a, int size)
{
    double *max = NULL;
    //printf("K:%lf",*max);
    //printf("K:%p",max);
    for (int i = 0; i < size; i++)
    {
        if (i == 0)
        {
            max = a;
            //printf("primeiro valor\n");
        }
        else if (*(a + i) > *max)
        {
            max = a + i;
        }
    }
    return max;
}
/*
*Escreva uma função double* max(double* a, int size) que retorne um ponteiro para o maior valor
*contido em um array de 8 elementos do tipo double, se o array estiver vazio, retorne NULL.
*O usuário deve informar como entrada os valores a serem armazenados no array.   
*A saída deverá imprimir na main() o conteúdo da posição de memória retornado pela função.
*/

/*
#include <stdio.h>
#include <stdlib.h>

double *max(double *a, int size);

int main()
{
    double v[8];

    for (int i = 0; i < 8; i++)
        scanf("%lf", (v + i));
    if (max(v, 8) != NULL)
        printf("%g\n", *max(v, 8));
    else
        printf("NULL\n");
    return 0;
}

double *max(double *a, int size)
{
    double *max = NULL;
    for (int i = 0; i < size; i++)
    {
        if (i == 0 && a != NULL)
            max = a;
        else if ((a + i) != NULL && *(a + i) > *max)
            max = a + i;
    }
    return max;
}
*/