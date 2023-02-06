#include <stdio.h>
#include <string.h>

main()
{
  int n, tamanho, i, j;
  char aux;

  scanf("%i", &n);
  char linhas[n][1000];
  getchar();
  for (i = 0; i < n; i++)
  {
    scanf("%[^\n]s", linhas[i]);
    getchar();

    tamanho = strlen(linhas[i]);

    for (j = 0; j < tamanho; j++)
    {
      if ((linhas[i][j] >= 'a' && linhas[i][j] <= 'z') || (linhas[i][j] >= 'A' && linhas[i][j] <= 'Z'))
        linhas[i][j] += 3;
    }

    for (j = 0; j < (tamanho) / 2; j++)
    {
      aux = linhas[i][j];
      linhas[i][j] = linhas[i][tamanho - 1 - j];
      linhas[i][tamanho - 1 - j] = aux;
    }

    for (j = tamanho / 2; j < tamanho; j++)
    {
      linhas[i][j] -= 1;
    }
  }

  for (i = 0; i < n; i++)
    printf("%s\n", linhas[i]);

  return 0;
}