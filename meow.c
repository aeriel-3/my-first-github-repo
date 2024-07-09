#include <stdio.h>
int get_size();
   void print_grid(int n);
int main()
{
    int count, i, j;
   // int k;
    int k= get_size();
    // printf("meow\n");
    // printf("meow\n");
   print_grid(k);
  
    return 0;
}

int get_size(){

int k;
  do
    {

        printf("enter size: ");
        scanf("%d", &k);

        // printf("enter the value again");
        // break;
    } while (k < 1);
   



    return k;
}






void print_grid(int k){

int i;
int j;
 for (i = 0; i < k; i++)
    {
        for (j= 0; j < k; j++)
        {

            printf("#");
        }
        printf("\n");
    }

;
 }