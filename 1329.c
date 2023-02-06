#include <stdio.h>

main()
{
  int numeroJogadas, i;
  do
  {
    scanf("%d", &numeroJogadas);
    int caraCoroa[numeroJogadas], maria = 0, joao = 0;
    for (i = 0; i < numeroJogadas; ++i)
    {
      scanf("%d", &caraCoroa[i]);

      if (caraCoroa[i] == 0)
      {
        maria++;
      }
      else
        joao++;
    }
    if (numeroJogadas != 0)
      printf("Mary won %d times and John won %d times\n", maria, joao);
  } while (numeroJogadas != 0);
  return 0;
}