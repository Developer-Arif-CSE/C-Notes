#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int ar[n];
    for (int i=0; i<n; i++)
    {
        scanf("%d",ar[i]);
    }
    int pos_sum=0;
    int neg_sum=0;
    for (int i=0; i<n; i++)
    if (ar[i]>0)
    {
        pos_sum= pos_sum+ar[i];
    }
    else if (ar[i]<0);
     for (int i=0; i<n; i++)
    {
        neg_sum=neg_sum+ar[i];
    }
    printf("%d ",pos_sum);
    printf("%d ",neg_sum);
    return 0;
}
