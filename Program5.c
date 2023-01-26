#include<stdio.h>
int main(){ int i;
    int a;
    printf("Enter any number:");
    scanf("%d",&a);
    if(a%1==0 && a%a==0)
    printf("%d is a prime number",a);
    else if(a%2==0 || a%2!=0)
    printf("%d is not a prime number",a);
    return 0;
}