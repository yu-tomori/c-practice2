#include <time.h>
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int human;
  int comp;
  int judge;
  int retry;

  srand(time(NULL));
  printf("じゃんけんゲーム開始！！\n");
  do {
    comp = rand() % 3;
    printf("\n\aじゃんけんぽん・・・(0)グー(1)チョキ(2)パー:");
    scanf("%d", &human);
    printf("私は");
    switch (comp) {
      case 0: printf("グー");   break;
      case 1: printf("チョキ"); break;
      case 2: printf("パー");   break;
    }
    printf("です。\n");

    judge = (human - comp + 3) % 3;
    switch (judge) {
      case 0: printf("引き分けです。");   break;
      case 1: printf("あなたの負けです。"); break;
      case 2: printf("あなたの勝ちです。");   break;
    }
    printf("もう一度しますか・・・(0)いいえ(1)はい");
    scanf("%d", &retry);
  } while (retry == 1);
  return 0;
}
