#include <stdio.h>

int main() 
{
  int t;
  scanf("%d", &t);
   int M1, M2, D;
  while (t--) 
  {
    scanf("%d %d %d", &M1, &M2, &D);

    int nfd = (D * M1) / (M1 + M2);
    int ofd = D;

    int total= ofd - nfd;

    printf("%d\n",total);
  }

  return 0;
}
