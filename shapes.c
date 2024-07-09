#include <stdio.h>

int getinp(void);
void pyramiddrawer(int d);
void squaredrawer(int side);
void rectangledrawer(int width);
void trapeziumdrawer(int width);

int main()
{
    int h = getinp();
    printf("\n");
    printf("rectangle\n");
    rectangledrawer(h);
    printf("\n");
    printf("PYRAMID\n");
    pyramiddrawer(h);
    printf("\n");
    printf("square\n");
    squaredrawer(h);
    printf("\n");
 printf("trapezium\n");
    trapeziumdrawer(h);
    printf("\n");
    return 0;
}

// getting user input fxn definition
int getinp(void)
{
    int h;
    printf("enter the height of the shape you want to see: ");
    scanf("%d", &h);
    return h;
}

// function definition for drawing the shape
void pyramiddrawer(int d)
{

    for (int i = 0; i < d; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            printf("# ");
        }
        printf("\n");
    }
}

// function definition for square drawer
void squaredrawer(int side)
{
    for (int i = 0; i < side; i += 1)
    {
        for (int j = 0; j < side; j++)
        {
            printf(" $");
        }
        printf("\n");
    }
}
// function definition for rectangle drawer
void rectangledrawer(int width)
{
    int length = 2 * width;
    for (int i = 0; i < width; i += 1)
    {
        for (int j = 0; j < length; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}
void trapeziumdrawer(int width)
{
    int length = 2 * width;
    for (int i = 0; i < width; i += 1)
    {
        for (int j = 0; j < length; j++)
        {
            for (int k = 0; k < j + 1; k++)
            {
                printf("& ");
        
            }
              printf("\n");
        }

      
    }
}
