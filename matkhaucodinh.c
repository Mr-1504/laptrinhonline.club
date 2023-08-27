#include <stdio.h>
int main()
{
    long long a;
    do
    {
        scanf("%lld", &a);
        if (a == 2002)
        {
            printf("Duoc phep truy cap");
        }
        else
        {
            printf("Sai mat khau\n");
        }
    } while (a != 2002);
}