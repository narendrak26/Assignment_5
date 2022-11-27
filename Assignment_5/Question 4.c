#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter the number\n");
    scanf("%d",&n);
    printf("First %d odd natural number are",n);
    for(i=0;i<n;i++)
    {
        printf(" %d ",i=i+1);
    }
    return 0;
}
