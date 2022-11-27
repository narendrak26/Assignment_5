#include<stdio.h>
int main()
{
    int i,n=2;
    printf("Enter the number\n");
    scanf("%d",&n);
    printf("First %d even natural number in reverse odd are \n",n);
    //for(i=n;i>0;i--)
    while(n)
    {
        printf("%d\n",2*n);
        n--;
    }
    return 0;
}
