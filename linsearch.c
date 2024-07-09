#include <stdio.h>

int main()
{
    int userguess;
    int array[7] = {1, 2, 3, 4, 5, 6, 7};

    printf("guess one of the numbers in the array: ");
    scanf("%d", &userguess);
    for (int i = 0; i < 7; i += 1)
    {
        if ( array[i]== userguess)
        {
            printf("congratulations your guess is found in the array\n");
         
        }
       
    }
printf("sorry try better next time\n");
         
    return 0;
}