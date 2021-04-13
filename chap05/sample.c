#include <stdio.h>
int max_stage;

int main(void)
{
  printf("トレーニング回数: ");
  scanf("%d", &max_stage);

  int score[max_stage];
  printf("%d", (int)(sizeof score / sizeof score[0]));
  return 0;
}
