#include <stdio.h>

void bubblesorter(int S, int array[]);
void printarray(int S, int array[]);

int main()
{
    const int S = 5;
    int array[5] = {9, 2, 4, 3, 1};
   // int class[6]={3,5,7,8,9,0};
    int temp;

    // the array elements before selection sort

    printf("before selection sort, order of elements is: ");
    printarray(S, array);
    

    // the array elements after selection sort
    printf("after selection sort, order of elements is: ");
   bubblesorter(S, array);
    printarray(S, array);
    return 0;
}
void bubblesorter(int S, int array[])
{
    for (int n = 1; n <= S; n++)
    {
        for (int i = 0; i < S-1; i++)
        {

            
                if (array[i] > array[i+1])
                {
                    int temp = array[i];
                    array[i] = array[i+1];
                    array[i+1] = temp;
                }
            

            
        }
    }
   
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