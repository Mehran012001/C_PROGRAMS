       //WAP to check if a number is prime or not.

#include<stdio.h>
int main(){
    int number;
    printf("Enter any number:");
    scanf("%d",&number);
    int a=0;
    for(int i=2;i<=number-1;i++)
    {
        if(number%i==0)
        {a=1;
        break;}
    }
    if(a==0)
    printf("%d is a prime number",number);
    else 
    printf("%d is a composite number",number);
    return 0;
}