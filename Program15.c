           //Display this AP 4,7,10,13,16 upto n terms take input from user

#include<stdio.h>
int main(){
    int n,i;
    printf("How many terms you want to be printed");
    scanf("%d",&n);
    for(i=4;i<=3*n+1;i=i+3)
    printf("%d  ",i);

    return 0;
}