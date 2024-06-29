// #include <stdio.h>
// int main()
// {
//     int r,c;
//     scanf("%d%d",&r,&c);
//     int a[r][c];
//     int element=r*c;
//     for (int i=0; i<r; i++)
//     {
//         for (int j=0; j<c; j++)
//         {
//             scanf("%d",a[i][j]);
//         }
//     }
//     int count=0;
//     for(int i=0; i<r; i++)
//     {
//         for (int j=0; j<c; j++)
//         {
//             if (a[i][j]==0)
//             {
//                 count ++;
//             }
//         }
//     }
//     if (element==count)
//     {
//         printf("Zero Matrix");
//     }
//     else 
//     {
//         printf("Not Zero Matrix");
//     }
//     return 0;
// } 




#include<stdio.h>
int main()
{
    int row,col;
    scanf("%d %d",&row,&col);
    int a[row][col];
    int element=row*col;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    int cnt=0;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            if(a[i][j] == 0)
            {
                cnt++;
            }
        }
    }
    if(element == cnt)
    {
        printf("Zero matrix\n");
    }
    else 
    {
        printf("Not zero matrix\n");
    }
    return 0;
}
