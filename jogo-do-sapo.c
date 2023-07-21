#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define MAX_JOGADORES 1000

// https://thehuxley.com/problem/709?quizId=8319

int main()
{

    int casas_tabuleiro, n_jogadores, n_rodadas, vez = 0;

    scanf("%d%d%d", &casas_tabuleiro, &n_jogadores, &n_rodadas);

    int tabuleiro[casas_tabuleiro], posicoes[n_jogadores], jogadores[MAX_JOGADORES];

    for (int i = 0; i < casas_tabuleiro; i++)
    {
        scanf("%d", &tabuleiro[i]);
    }

    for (int i = 0; i < n_jogadores * n_rodadas; i++)
    {
        scanf("%d", &jogadores[i]);
    }
    for (int i = 0; i < n_jogadores; i++)
    {
        posicoes[i] = 0;
    }
    for (int i = 0; i < n_jogadores * n_rodadas; i++)
    {
        int avanco = jogadores[i];
        posicoes[vez] = (posicoes[vez] + avanco) % casas_tabuleiro;
        int valor_casa = tabuleiro[posicoes[vez]];
        if (valor_casa < 0)
        {
            int retornar = -valor_casa;
            posicoes[vez] = (posicoes[vez] - retornar + casas_tabuleiro) % casas_tabuleiro;
        }
        else if (valor_casa > 0)
        {
            posicoes[vez] = (posicoes[vez] + valor_casa) % casas_tabuleiro;
        }
        vez = (vez + 1) % n_jogadores;
    }

    for (int i = 0; i < n_jogadores; i++)
    {
        printf("%d\n", posicoes[i]);
    }

    return 0;
}
