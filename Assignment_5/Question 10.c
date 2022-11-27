#include<stdio.h>
int main()
{
    int i,n,x;
    printf("Enter the number \n");
    scanf("%d",&n);
    printf("Table of number is %d",n);
    for(i=1;i<=10;i++)
    {
        x=n*i;
        printf("%d x %d =%d \n",n,i,x);
    }
}
