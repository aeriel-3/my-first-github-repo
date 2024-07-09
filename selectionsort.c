#include <stdio.h>

int swaparray(int S, int array[]);
void printarray(int S, int array[]);

int main()
{
    const int S = 5;
    int array[5] = {9, 2, 0, 3, 4};
    int temp;

    // the array elements before selection sort

    printf("before selection sort, order of elements is: ");
    printarray(S, array);

    // the array elements after selection sort
    printf("after selection sort, order of elements is: ");
    swaparray(S, array);
    printarray(S, array);
    return 0;
}
// function to swap the array elements
int swaparray(int S, int array[])
{
    int i;
    for (int i = 0; i < S; i++)
    {

        for (int j = i + 1; j < S; j++)
        {
            if (array[i] > array[j])
            {
                int temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }

        // printf(" %i,",array[i]);
    }
    return array[i];
}
// function definition to print the array elements
void printarray(int S, int array[])
{

    for (int i = 0; i < S; i++)
    {
        printf(" %i,", array[i]);
    }
    printf("\n");
}