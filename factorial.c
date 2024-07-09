#include <stdio.h>

int factorial(int n);
void print_factorial(int n, int m);
//int get_user_input();

int main()
{
   // int n = get_user_input();
  // srand((NULL));
   int rand();
   int n=rand()%10;
    int m = factorial(n);
    print_factorial(n, m);

    // printf("the factorial of %d is: %d\n",n,m);

    return 0;
}

// function to get the user input
/*
int get_user_input()
{
    int n;
    printf("enter the number whose factorial is required: ");

    scanf("%d", &n);

    return n;
} 
*/
// function definition for factorial of a number
int factorial(int n)
{
    int fact = 1;

    int i = n;
    while (i > 0)
    {
        fact *= i;
        i--;
    }

    return fact;
}

// function to print out the factorial of a number
void print_factorial(int n, int m)
{

    printf("factorial of %d is :%d \n", n, m);
}
