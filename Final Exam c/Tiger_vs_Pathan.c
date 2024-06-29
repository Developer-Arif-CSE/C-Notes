#include <stdio.h>
#include<string.h>
int main()
{
  int t,n;
  scanf("%d",&t);
  char s[100001];

  for (int i = 0; i < t; i++)
  {
    int tiger = 0;
    int pathaan = 0;
    scanf("%d",&n);
    scanf("%s", &s[0]);
    for (int j = 0; j < n; j++)
    {
      if (s[j]=='T')
      {
        tiger++;
      }
      else
      {
        pathaan++;
      }
    }

    if (tiger>pathaan)
    {
      printf("Tiger\n");
    }
    else if (pathaan>tiger)
    {
      printf("Pathaan\n");
    }
    else
    {
      printf("Draw\n");
    }
  }
  return 0;
}
