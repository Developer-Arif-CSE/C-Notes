// #include <stdio.h>
// int main()
// {
//     int t;
//     scanf("%d",&t);
//     int m,a,b,c; 
//      for (int i = 0; i < t; i++) 
//     {
//         scanf("%d %d %d %d",&m,&a,&b,&c);
//     }
//     int n=(a*b*c);
//     if (m/n!=0)
//     {
//         printf("%d\n",(m/n));
//     }
//     else if (m/n==0)
//     {
//         printf("%d\n",-1);
//     }
//     else 
//     {
//         printf("%d/n",0);
//     }
    
//     return 0;
// } 


#include <stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int m,a,b,c;

        scanf("%d %d %d %d",&m,&a,&b,&c);

        int n = 0;
        n = (a*b*c);

        if (m == n)
        {
            printf("1\n");
        }
        else if (m == 0)
        {
            printf("0\n");
        }
        else if(m < n)
        {
            printf("-1\n");
        }
        else
        {
            int j = 1;
            while(1)  
            {
                if(m == (n*j))
            {
                printf("%d\n", j);
                    break;
                }
                else if(m < n*j)
            {
                printf("-1\n");
                break;
            }
            j++;
        }

    }
}

return 0;
}

