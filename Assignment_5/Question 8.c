#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter the number \n");
    scanf("%d",&n);
    printf("Square of %d Natural number are\n",n);
    for(i=1;i<=n;i++)
    {
        printf("Square of %d is %d\n",i,i*i);
    }
    return 0;
}
