// 1. take a number from user
// 2. print all the odd number from 1 to that number

#include <stdio.h>
int main()
{
    int n = 0;
    printf("put your number: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i = i + 2)
    {
        printf("%d ", i);
    }

    return 0;
}
