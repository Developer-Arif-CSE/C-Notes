#include <stdio.h>
int main()
{
    int row,colum;
    scanf("%d %d",&row,& colum);
    int a[row][colum];
    for (int i=0; i<row; i++)
    {
        for (int j=0; j<colum; j++)
        {
            scanf("%d",& a[i] [j]);
        }
    }
    int r;
    scanf("%d",&r);
    for (int i=0; i<colum; i++)
    {
        printf("%d ",a[r][i]);
    } 
     printf("\n");
    int c;
    scanf("%d",&c);
    for (int j=0; j<row; j++)
    {
        printf("%d\n",a[j] [c]);
    }
    
    return 0;
} 


// #include<stdio.h>
// int main()
// {
//     int row,col;
//     scanf("%d %d",&row,&col);
//     int a[row][col];
//     for(int i=0;i<row;i++)
//     {
//         for(int j=0;j<col;j++)
//         {
//             scanf("%d",&a[i][j]);
//         }
//     } 
//     // exact row
//     int e;
//     scanf("%d",&e);
//     for(int i=0;i<col;i++)
//     {
//         printf("%d ",a[e][i]);
//     }
//     // exact column
//     // int c;
//     // scanf("%d",&c);
//     // for(int i=0;i<row;i++)
//     // {
//     //     printf("%d ",a[i][c]);
//     // }
//     // return 0;
// }