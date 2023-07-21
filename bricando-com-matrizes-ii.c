#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

// soma de matrizes
// https://thehuxley.com/problem/1302?quizId=8319
// brincando com matrizes

int main()
{
    int matriz[3][3];
    double media;
    int menorValor;
    int somaMatriz = 0;
    int nsomaDig = 0;
    int delta;
    int i, j, conta_positivo = 0;
    for (int i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &matriz[i][j]);
            if (matriz[i][j] > 0)
            {
                somaMatriz += matriz[i][j];
            }

            menorValor = matriz[i][j];
        }

    for (i = 0; i < 3; i++) // menor vlor
        for (j = 0; j < 3; j++)
        {
            if (matriz[i][j] < menorValor)
            {
                menorValor = matriz[i][j];
            }
            if (matriz[i][j] > 0)
            {
                media += matriz[i][j];
                conta_positivo++;
            }
        }
    media = media / conta_positivo;

    if (menorValor % 2 == 0)
        delta = 1;
    else if (menorValor % 2 == 1)
        delta = 0;

    else
    {
        delta = 0;
    }

    // somar menos dig
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (i != j)
            {
                nsomaDig += matriz[i][j];
            }
        }
    }

    printf("%.2lf %d %d %d", media, menorValor, delta, nsomaDig);

    return 0;
}