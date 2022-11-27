#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter the  number \n");
    scanf("%d",&n);
    printf("First %d Natural number in reverse orders are \n",n);
    for(i=n;i>=0;i--)
    {
        printf("%d\n",i);
    }
}
