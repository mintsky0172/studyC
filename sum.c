#include <stdio.h>

int main(void) {
  int n;
  printf("정수를 입력하세요: ");
  scanf("%d", &n);

  int sum = rec_func(n);
  printf("입력한 정수까지의 합: %d\n", sum);
  return 0;
}

int rec_func(int n) {
  if (n == 0) {
    return 0;
  } else {
    return n + rec_func(n - 1);
  }
}