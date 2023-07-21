#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

// https://thehuxley.com/problem/1026?quizId=8319

void lerArray(double operacao[1][2])
{
    int count = 1;

    for (int i = 0; i < count; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            scanf("%lf", &operacao[i][j]);
            if (operacao[0][0] == -1)
            {
                return;
            }
        }
    }
}

int main()
{
    double operacao[1][2];
    double saldo = 0;
    double debito = 0;
    double credito = 0;

    while (operacao[0][0] != -1)
    {
        lerArray(operacao);
        if (operacao[0][0] == 1)
        {
            credito += operacao[0][1];
        }
        if (operacao[0][0] == 0)
        {
            debito += operacao[0][1];
        }
        saldo = credito - debito;
    }

    printf("Creditos: R$ %.2lf\nDebitos: R$ %.2lf\nSaldo: R$ %.2lf\n", credito, debito, saldo);

    return 0;
}