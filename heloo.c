#include<stdio.h>
//#include<cs50.h>

int main(){
int x,y;
printf("enter the value of x\n");
scanf("%d",&x);
printf (" enter the value of y\n");

scanf("%d",&y);
if(x>y){

printf("x is greater than y\n");
}

if(x<y){

printf("x is not greater than y\n");
}

if(x==y){

printf("x is equall to y\n");
}

    return 0;
}