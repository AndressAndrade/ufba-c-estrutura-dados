#include <stdio.h>

int main(void)
{
    int vetor[5] = {1,2,3,4,5};
    int *ponteiro = vetor;
    int i;

    for(i = 0; i < 5; i++)
    {
        ponteiro = &vetor[i] + 1;
        printf("%p ", ponteiro);

    }

}