// Make a calculator
// 1. Take 2 numbers as input
// 2. Then take a operator like *,/,+,- as input
// 3. Then based on this operator perform the calculation on the 2 numbers
// 4. Print the output
#include <stdio.h>
int main()

{
    int x, y;
    char op;
    printf("put your two numbers\n");

    printf("put your first number number: ");

    scanf("%d", &x);
    printf("put your second number number: ");

    scanf("%d", &y);
    printf("put your operator");

    scanf(" %c", &op);
    if (op == '+')
    {
        printf("The sum of two numbers is %d ", x + y);
    }
    else if (op == '-')
    {
        printf("The difference of two numbers is %d", x - y);
    }
    else if (op == '*')
    {
        printf("if we multiply two numbers we get %d", x * y);
    }
    else if (op == '/')
    {
        if (y == 0)
        {
            printf("if  we divide the number with 0, the answer is infinite");
        }
        else
        {
            printf("if we divide two numbers we get %d", x / y);
        }
    }
    else
    {
        printf("ERROR wrong operator please try again");
    }

    return 0;
}
