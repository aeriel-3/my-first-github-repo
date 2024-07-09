#include<stdio.h>

int main(){
///*
int x=50;

printf("the memory adrees of x is: %p\n",&x);

int *p=&x;
*p+=5;

printf("the value of p is:%i \n",*p);
//*/
 char *s="hi!";
printf("the number beind the character f is %p\n",*s);
printf("the number beind the character h is %p\n",s[0]);
printf("the number beind the character i is %p\n",s[1]);
printf("the number beind the character ! is %p\n",s[2]);




    return 0;
}