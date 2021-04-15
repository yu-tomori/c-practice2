#include <time.h>
#include <stdio.h>

int main(void)
{
  time_t current = time(NULL);

  printf("現在の日時・時刻: %s", asctime(localtime(&current)));
  return 0;
}
