#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
     for(int i=0;i<n-1;i++)
     {
         for(int j=i+1;j<n;j++)
         {
            printf("%d %d\n",i,j);
         }
     }
    return 0;
}