#include <stdio.h>
int main()
{
    int age;
    printf("what is your age?\n");

    scanf("%d", &age);
    if (age >= 18)
    {
        printf("you can vote\n");
    }
    if (age > 110)
    {
        printf("you are expired\n");
        /* code */
    }

    else
    {
        printf(" you cannot vote\n");
    }
    printf("Thanks for your coorporation");

    return 0;
}
