#include <stdio.h>
#include <string.h>
int main() {
  int t;
  scanf("%d", &t);

  while (t--) {
    char str[10000];
    scanf("%s", str);

    int upper_case_count = 0;
    int lower_case_count = 0;
    int digit_count = 0;

    for (int i = 0; i < strlen(str); i++) {
      if (str[i] >= 'A' && str[i] <= 'Z') {
        upper_case_count++;
      } else if (str[i] >= 'a' && str[i] <= 'z') {
        lower_case_count++;
      } else if (str[i] >= '0' && str[i] <= '9') {
        digit_count++;
      }
    }

    printf("%d %d %d\n", upper_case_count, lower_case_count, digit_count);
  }

  return 0;
}