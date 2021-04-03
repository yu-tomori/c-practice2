#include <stdio.h>

int main(void)
{
  int i;
  int x;
  printf("何段表示しますか: ");
  scanf("%d", &x);

  for (i = 1; i < x; i++)
    printf("%*d\n", i, i % x);
  return 0;

}
