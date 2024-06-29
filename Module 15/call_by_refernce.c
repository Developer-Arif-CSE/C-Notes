// #include <stdio.h>
// void fun(int *p)
// {
//      printf("Main er value- %d\n",*P);
//     printf("p er value- %p\n",P);
//    // *P=500;
// }
// int main()
// {
//     int x=10;
//     printf("Main x  er value- %p\n",*P);
//    // printf("x er address- %p\n",x);
//     fun(&x);
//     printf("%d",x);
//     return 0;
// }

#include<stdio.h>
void fun(int* p)
{
    // printf("main er x er value - %d\n",*p);
    *p=500;
}
int main()
{
    int x=100;
    // printf("x er address - %p\n",&x);
    fun(&x);
    printf("%d",x);
    return 0;
}