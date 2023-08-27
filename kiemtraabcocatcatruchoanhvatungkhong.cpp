#include <stdio.h>
int main()
{
    float a, b, c, d;
    scanf("%f%f%f%f", &a, &b, &c, &d);
    if (a * c < 0 && b * d < 0)
        printf("YES");
    else
        printf("NO");
}