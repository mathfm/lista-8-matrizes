#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

// https://thehuxley.com/problem/479?quizId=8319

int main()
{

    int n, m, c, x, y;
    scanf("%d %d", &n, &m);
    int mapa[n][m];

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            scanf("%d", &mapa[i][j]);

    scanf("%d", &c);
    char movimentos[c];

    for (int i = 0; i < c; i++)
        scanf(" %c", &movimentos[i]);

    scanf("%d %d", &x, &y);

    for (int i = 0; i < c; i++)
    {
        if (movimentos[i] == 'D')
        { // direita
            if (y + 1 < m && mapa[x][y + 1] == 1)
                y++;
        }

        else if (movimentos[i] == 'E')
        { // esquerda
            if (y - 1 >= 0 && mapa[x][y - 1] == 1)
                y--;
        }

        else if (movimentos[i] == 'C')
        { // cima
            if (x - 1 >= 0 && mapa[x - 1][y] == 1)
                x--;
        }
        else if (movimentos[i] == 'B')
        { // baixo
            if (x + 1 < n && mapa[x + 1][y] == 1)
                x++;
        }
    }

    printf("(%d,%d)\n", x, y);

    return 0;
}