//Write a C program to display the Odd Term AP starting from 1 to n.User will enter the total no of terms in AP
#include<stdio.h>
int main(){
    int i,n;
    printf("HOw many terms of AP you want to print:");
    scanf("%d",&n);
    for(i=1;i<=2*n-1;i=i+2)
   { printf("%d\n",i);}
   return 0;

}
