#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter the number \n");
    scanf("%d",&n);
    printf(" Odd natural number in revers odd are\n",n);
    while(n)
    {
    
        printf("%d\n ",2*n-1);
        n--;

    }
    return 0;
}
