// #include <stdio.h>
// void world()
// {
//     printf("world\n");
// }
// void hello ()
// {
//     printf("Hello\n");
//     world ();
// }
// int main()
// {
//     hello ();
//     printf("End\n");
//     return 0;
// }


#include <stdio.h>
void world()
{
    printf("World Start\n");
    printf("World End\n");
}
void hello()
{
    printf("Hello Start\n");
    world ();
    printf("Hello End\n");
}
int main()
{
    printf("Main start\n");
    hello ();
    printf("Main end\n");
    return 0;
}