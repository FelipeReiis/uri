#include <stdio.h>

main()
{
  char abc[26];
  int nLetras, i;
  while (scanf("%s %d", &abc, &nLetras) != EOF)
  {
    char string[nLetras];

    int posicaoLetras[nLetras];
    for (i = 0; i < nLetras; i++)
    {
      scanf("%d", &posicaoLetras[i]);
      string[i] = abc[posicaoLetras[i] - 1];
      printf("%c", string[i]);
    }
    printf("\n");
  }
  return 0;
}