#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter the number\n");
    scanf("%d",&n);
    printf("First %d Natural number are \n",n);
    for(i=1;i<=n;i++)
    {
        printf("%d\n",i);
    }
    return 0;
}
