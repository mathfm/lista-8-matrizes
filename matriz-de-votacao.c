#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

// https://thehuxley.com/problem/2131?quizId=8319

void arrayZ(int array[], int qarray)
{
    int i;
    for (i = 0; i <= qarray; i++)
    {
        array[i] = 0;
    }
}

int main()
{
    int qPrincesa;
    int quantiaVotos;
    scanf("%d%d", &qPrincesa, &quantiaVotos);
    int i, j;
    int princesa[qPrincesa];
    int votoPrincesa[qPrincesa];
    arrayZ(votoPrincesa, qPrincesa);
    for (j = 0; j < quantiaVotos; j++)
    {
        for (i = 1; i <= qPrincesa; i++)
        {
            scanf("%d", &princesa[i]);
            if (princesa[i] < 0 || princesa[i] > 1)
                return 0;
            votoPrincesa[i] += princesa[i];
        }
    }
    for (i = 1; i <= qPrincesa; i++)
        printf("Princesa %d: %d voto(s)\n", i, votoPrincesa[i]);

    return 0;
}

/*/

typedef struct Pessoa{
    int idade;
    char nome[50];
    double altura;
} Pessoa;

scanf("%^\n")

void inverter_string(char str[])
{
    int len = strlen(str);
    int i = 0, j = len - 1;

    while(i < j)
    {
        char aux = str[i];
        str[i] = str[j];
        str[j] = aux;

        i++;
        j--;
    }
}


    int numero_de_digitos_do_primeiro =  strlen(primeiro);
    int numero_de_digitos_do_segundo =  strlen(segundo);

    inverter_string(primeiro);
    inverter_string(segundo);

    for(int i = 0; i < 10003; i++)
    {
        resultado[i] = '\0';
    }

    int i = 0;
    int vai_um = 0;
    while(i < numero_de_digitos_do_primeiro || i < numero_de_digitos_do_segundo)
    {
        int digito_um = i < numero_de_digitos_do_primeiro ? primeiro[i] - '0' : 0;
        int digito_dois = i < numero_de_digitos_do_segundo ? segundo[i] - '0' : 0;

        resultado[i] = ((digito_um + digito_dois + vai_um) % 10) + '0';
        vai_um = (digito_um + digito_dois + vai_um) / 10;

        i++;
    }
    if (vai_um == 1)
    {
        resultado[i] = '1';
    }



/*/