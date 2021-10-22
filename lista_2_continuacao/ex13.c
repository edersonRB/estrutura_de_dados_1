/*
Fazer um programa contendo as seguintes funções: 

 Leitura: lê um vetor de números inteiros positivos com 10 elementos

 Separa: separa os elementos do vetor em dois vetores, sendo que um deles
conterá os números pares e o outro os números ímpares. 

Todos os vetores dinâmicos. Não esqueça de liberar memória quando possível. 

 Imprime: exibe na tela os elementos contidos no vetor passado por parâmetro.
*/

#include <stdio.h>
#include <stdlib.h>

int *Leitura()
{
    int *vet;
    vet = (int *)malloc(10 * sizeof(int));
    for (size_t i = 0; i < 10; i++)
    {
        scanf("%d", (vet + i));
    }
    return vet;
}
void Separa(int *vet, int **par, int **impar)
{
    int contPar = 0, contImpar = 0;   //qtd de numeros pares e impares
    int indexPar = 0, indexImpar = 0; //loop em 3 vetores ao mesmo tempo

    for (int i = 0; i < 10; i++)
    {
        if (*(vet + i) % 2 == 0)
        {
            contPar++;
            printf("contPar:%d\n", contPar);
        }
    }

    contImpar = 10 - contPar;
    printf("contImpar:%d\n", contImpar);

    *par = (int *)malloc(contPar * sizeof(int));
    *impar = (int *)malloc(contImpar * sizeof(int));

    printf("mallocated\n");

    for (int i = 0; i < contPar; i++)
    {
        if (*(vet + i) % 2 == 0)
        {
            (*(*par+indexPar))= *(vet + i);
            indexPar++;
            printf("-----index par %d\n", indexPar);
        }
        else
        {
        }
    }
    for (int i = 0; i < contImpar; i++)
    {
        if (*(vet + i) % 2 != 0)
        {
            impar[indexImpar] = (vet + i);
            indexImpar++;
            printf("-----index impar %d\n", indexPar);
        }
        else
        {
        }
    }
}
void Imprime(int *par, int *impar)
{
    //for (size_t i = 0; i < 0; i++)
    //{
    /* code */
    //}
}

int main()
{
    int *par, *impar, *vet = Leitura();

    /*
    for (size_t i = 0; i < 10; i++)
    {
        printf("%d\n",*(vet+i));
    }
    */

    Separa(vet, &par, &impar);
    Imprime(par, impar);

    return 0;
}