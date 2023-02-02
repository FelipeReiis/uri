#include <stdio.h>
#include <string.h>
main()
{
  char palavra[1000];
  int i, po, pc, pos, pos2;
  while (scanf("%s", &palavra) != EOF)
  {
    po = 0;
    pos = 0;
    pc = 0;
    pos2 = 0;
    for (i = 0; i < strlen(palavra); i++)
    {
      if (palavra[i] == '(')
      {
        po++;
        pos += i;
      }
      else if (palavra[i] == ')')
      {
        pc++;
        pos2 += i;
      }
    }
    if (po == pc && pos < pos2)
      printf("correct\n");
    else
      printf("incorrect\n");
  }
  return 0;
}