#include <stdio.h>
int main()
{
    double x=5.26;
    double *ptr=&x;
    //double *ptr2=*ptr;
    *ptr=10.20;
    printf("X er value - %0.3lf\n",x);
    printf("X er value - %0.3lf\n",*ptr);
    return 0;
}