#include <stdio.h>
int main()
{
    int age;
    printf("what is your age?\n");

    scanf("%d", &age);
    if (age > 110)
    {
        printf("you are expired\n");
        /* code */
    }
    if (age >= 18 && age<=110)
    {
        printf("you can vote\n");
    }
    else
    {
        printf(" you cannot vote\n");
    }
    printf("Thanks for your cooperation");

    return 0;
}
