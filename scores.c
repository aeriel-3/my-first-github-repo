#include <stdio.h>
float average(int len, int array[]);
void usrinp(int size, int array[]);

int main()
{
  int S = 3;
 // int s1 = 2, s2 = 4, s3 = 6;
  int scores[S];
  usrinp(S,scores);

  float avg = average(S, scores);
  printf("the average of scores is  %f \n", avg);
  return 0;
}

// function definition for average of numbers
float average(int len, int array[])
{
  float sum = 0.0;

  for (int i = 0; i < len; i++)
  {
    sum = sum + array[i]; 
    }
  
  return (sum / 3.0);
}
// funtion definition to get the user input for the array
void usrinp(int size, int array[])
{
  //int array[size];
   printf("enter three(3) element in the array: \n");
  for (int i = 0; i < size; i+=1)
  {
   
    scanf("%d",&array[i]);
  }
}
