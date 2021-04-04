#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  char temp[20];
  printf("整数を入力して下さい。:");
  scanf("%s", temp);
  // atoi: string -> int
  printf("%dと入力しましたね。\n", atoi(temp));
  return 0;
}
