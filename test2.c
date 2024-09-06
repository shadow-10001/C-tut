#include <stdio.h>
int main()
{
    int x, y;
    int sum;
    printf("put your first number");
    scanf("%d", &x);
    printf("put your second number");
    scanf("%d", &y);
    sum = x + y;
    printf("the sum of two numbers is %d", sum);
    if (sum < 0)
    {
        printf("The number is negative");
    }
    else
    {
        printf("The number is positbvr");
    }

    return 0;
}
