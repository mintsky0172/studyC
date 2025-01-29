#include <ctype.h>
#include <stdio.h>

int main() {
  char str[80];
  int i;

  printf("문장을 입력하세요: ");
  gets(str);

  int count = 0;
  for (i = 0; str[i] != '\0'; i++) {
    if (isupper(str[i])) {
      str[i] = tolower(str[i]);
      count++;
    }
  }

  printf("변환된 문장: ");
  puts(str);
  printf("변환된 문자 수: %d\n", count);

  return 0;
}