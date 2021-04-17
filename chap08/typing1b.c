#include <time.h>
#include <stdio.h>
#include <string.h>
#include "getputch.h"

int main(void)
{
  int       i;
  char      *str = "How do you do?";
  int       len = strlen(str);
  clock_t   start, end;

  init_getputch();
  printf("このとおりタイプしてください。\n");

  start = clock();
  for (i = 0; i < len; i++) {
    printf("%s\r", &str[i]);
    fflush(stdout);
    while (getch() != str[i])
      ;
  }
  end = clock();

  printf("\r%.1f秒でした。\n", (double)(end - start) / CLOCKS_PER_SEC);
  term_getputch();
  return 0;
}
