#include <stdio.h>

int main(void) {
  int a, b;
  int count = 0;

  printf("2 이상의 정수를 입력하세요: ");
  scanf("%d", &a);

  if (a < 2) {
    printf("2 이상의 정수를 입력해야 합니다.");
    return 1;
  }

  int i;
  for (b = 2; b <= a; b++) {
    int prime = 1;
    for (i = 2; i * i < b; i++) {
      if ((b % i) == 0) {
        prime = 0;
        break;
      }
    }
    if (prime == 1) {
      printf("%5d", b);
      count++;
      if ((count % 5) == 0) {
        printf("\n");
      }
    }
  }
  return 0;
}