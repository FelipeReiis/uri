#include <stdio.h>
#include <math.h>

int main()
{
  int n, nCasas, i;

  scanf("%d", &n);
  for (i = 0; i < n; i++)
  {
    scanf("%d", &nCasas);
    printf("%lld kg\n", (long long)(pow(2, nCasas) / 12000));
  }

  return 0;
}