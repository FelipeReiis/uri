#include <stdio.h>
main()
{
  int idade1, idade2;
  scanf("%d %d", &idade1, &idade2);
  if (idade1 >= 6 && idade2 >= 6)
  {
    if (idade1 >= 18 || idade2 >= 18 || idade1 >= 14 && idade2 >= 14)
      printf("YES\n");
    else
      printf("NO\n");
  }
  else
    printf("NO\n");
  return 0;
}