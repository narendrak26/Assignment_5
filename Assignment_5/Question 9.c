#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter the number\n");
    scanf("%d",&n);
    printf("Cube of %d natural number is ",n);
    for(i=1;i<=n;i++)
    {
        printf("Cube of %d is %d\n",i,i*i*i);
    }
    return 0;
}
