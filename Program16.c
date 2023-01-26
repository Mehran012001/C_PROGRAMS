//Write a C program to display the Odd Term AP starting from 1 to n.User will enter the total no of terms in AP. Solve without using maths?
#include<stdio.h>
int main(){
    int i,n;
    printf("HOw many terms of AP you want to print:");
    scanf("%d",&n);
    int a=1; //We are going to use extra variable.
    for(i=1;i<=n;i++)
    printf("%d\n",a);
    a=a+2;
   return 0;

}
