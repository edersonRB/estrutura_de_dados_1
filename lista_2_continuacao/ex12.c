/*
 *Escrever um procedimento que faça a União de dois vetores dinâmicos de tamanho 6 (C = A  B).
 *Lembre-se de liberar a memória dos vetores A e B após a concatenação. A entrada são os valores
 *contidos em A e B. A saída é o conteúdo do vetor C
*/
#include <stdio.h>
#include <stdlib.h>

int *concat(int *A, int *B, int *sizeC)
{
    int *C = NULL;
    int cont = 6;
    int index = 0;
    for (size_t i = 0; i < 6; i++) //
    {
        if ((*(B + i) != *(A + 0)) &&
            (*(B + i) != *(A + 1)) &&
            (*(B + i) != *(A + 2)) &&
            (*(B + i) != *(A + 3)) &&
            (*(B + i) != *(A + 4)) &&
            (*(B + i) != *(A + 5)))
        {
            cont++;
        }
    }

    *sizeC = cont;

    C = (int *)malloc(cont * sizeof(int));

    for (size_t i = 0; i < 6; i++)
    {
        C[i] = *(A + i);
    }

    for (int i = 0; i < (cont - 5); i++)
    {
        //printf("looping pos:%d\n",i);
        if ((*(B + i) != *(C + 0)) &&
            (*(B + i) != *(C + 1)) &&
            (*(B + i) != *(C + 2)) &&
            (*(B + i) != *(C + 3)) &&
            (*(B + i) != *(C + 4)) &&
            (*(B + i) != *(C + 5)))
        {
            //printf("entrou %d\n", index);
            C[i + 6 - index] = *(B + i);
            //printf("added %d to pos %d\n",*(B+i),(i + 6 - index));
        }
        else
        {
            index++;
            //printf("index++\n");
        }
    }

    //printf("cont: %d\n", cont);
    //printf("sizeC: %d\n", *sizeC);

    free(A);
    free(B);
    A=NULL;
    B=NULL;

    return C;
}

int main()
{
    int *A, *B, *C, sizeC;

    A = (int *)malloc(6 * sizeof(int));
    B = (int *)malloc(6 * sizeof(int));

    for (size_t i = 0; i < 6; i++)
    {
        scanf("%d", A + i);
    }
    for (size_t i = 0; i < 6; i++)
    {
        scanf("%d", B + i);
    }

    C = concat(A, B, &sizeC);

    for (size_t i = 0; i < sizeC; i++)
    {
        printf("%d\n", *(C + i));
        //if(i==sizeC)
        //    printf("\n");
    }

    free(C);
    C=NULL;

    return 0;
}
