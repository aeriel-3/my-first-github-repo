#include <stdio.h>

int sum(int a, int b);
int product(int a, int b);
int parameters_input();

int main()
{
    int a = parameters_input();
    int b = parameters_input();
    int Sam = sum(a, b);
    int Product = product(a, b);

    printf("the sum is: %d and the product is: %d\n", Sam, Product);

    return 0;
}

int parameters_input()
{
    int a;
    printf("enter the value of a\n");
    scanf("%d", &a);

    return a;
}

int sum(int a, int b)
{
    int s = a + b;
    return s;
}

int product(int a, int b)
{
    int p = a * b;
    return p;
}
