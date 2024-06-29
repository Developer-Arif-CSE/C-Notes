#include <stdio.h>

int main() {
  int t;
  scanf("%d", &t);

  while (t--) {
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
      scanf("%d", &arr[i]);
    }

    int x;
    scanf("%d", &x);

    bool found = false;
    for (int i = 0; i < n; i++) {
      if (arr[i] == x) {
        found = true;
        break;
      }
    }

    if (found) {
      printf("YES\n");
    } else {
      printf("NO\n");
    }
  }

  return 0;
}