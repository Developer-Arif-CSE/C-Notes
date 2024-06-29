// #include <stdio.h>
// int main()
// {
//     int x=100;
//     int *ptr =&x;
//     printf("X er address- %p\n",&x);
//     printf("ptr er value- %p\n",ptr);
//     printf("ptr er address- %p\n",&ptr);
//     printf("ptr er memory size- %d\n",sizeof(ptr));
//     return 0;
// }


#include <stdio.h>
int main()
{
    int x=100;
    int *ptr=&x;
    //x=200 
    *ptr=200;
    printf("X er address- %d\n",x);
    printf("X er address- %d\n",*ptr);
    return 0;
}