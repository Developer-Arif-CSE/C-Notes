#include <stdio.h>
#include <string.h>
int main()
{
    char a[200],b[200];
    scanf("%s %s",a,b);
    int v =strcmp(a,b);
    // printf("%d",v);
    if ( v<0)
    {
        printf("A samaller\n");
    }
    else if (v>0)
    {
        printf("B smaller\n");
    }
    else 
    {
        printf("Same\n");
    }
    return 0;
}