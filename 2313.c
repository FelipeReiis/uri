#include <stdio.h>
#include <math.h>

main()
{
    int vetor[3], i, j, pit;

    scanf("%d %d %d", &vetor[0], &vetor[1], &vetor[2]);
    for (i = 1; i < 3; i++)
    {
        int aux = vetor[i];
        for (j = i - 1; j >= 0 && vetor[j] > aux; j--)
        {
            vetor[j + 1] = vetor[j];
        }
        vetor[j + 1] = aux;
    }
    int hipo = pow(vetor[2], 2);
    pit = pow(vetor[0], 2) + pow(vetor[1], 2);
    if (vetor[0] + vetor[1] > vetor[2] && vetor[0] != vetor[1] && vetor[0] != vetor[2] && vetor[1] != vetor[2])
    {
        if (hipo == pit)
        {
            printf("Valido-Escaleno\n");
            printf("Retangulo: S\n");
        }
        else
        {
            printf("Valido-Escaleno\n");
            printf("Retangulo: N\n");
        }
    }
    else if (vetor[0] + vetor[1] > vetor[2] && vetor[0] == vetor[1] && vetor[0] != vetor[2] || vetor[1] == vetor[2] && vetor[2] != vetor[0])
    {
        if (hipo == pit)
        {
            printf("Valido-Isoceles\n");
            printf("Retangulo: S\n");
        }
        else
        {
            printf("Valido-Isoceles\n");
            printf("Retangulo: N\n");
        }
    }
    else if (vetor[0] + vetor[1] > vetor[2] && vetor[0] == vetor[1] && vetor[0] == vetor[2] && vetor[1] == vetor[2])
    {
        printf("Valido-Equilatero\nRetangulo: N\n");
    }
    else
    {
        printf("Invalido\n");
    }

    return 0;
}