/* training culculation */
#include    <time.h>
#include    <stdio.h>
#include    <stdlib.h>

int main(void)
{
  int a, b, c;
  int x;
  clock_t start, end;
  double req_time;

  srand(time(NULL));    /* 乱数の種を設定 */

  a = 100 + rand() % 900;
  b = 100 + rand() % 900;
  c = 100 + rand() % 900;

  printf("%d + %d + %dは何ですか: ", a, b, c);
  start = clock();
  while(1) {
    scanf("%d", &x);
    if (x == a + b + c)
      break;
    printf("\a違いますよ！\n再入力して下さい！");
  }

  end = clock();
  req_time = (double)(end - start) / CLOCKS_PER_SEC;
  printf("start: %.1f, end: %.1f, CLOCKS_PER_SEC: %d\n",
      (double)end, (double)start, CLOCKS_PER_SEC);
  printf("%.1f秒かかりました。\n", req_time);

  if (req_time > 30.0)
    printf("時間がかかりすぎです。\n");
  else if (req_time > 17.0)
    printf("まあまあですね。\n");
  else
    printf("素早いですね。\n");
  return 0;
}
