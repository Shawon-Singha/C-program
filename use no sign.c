#include<stdio.h>
int main()
{
    int n1,n2,mod,q;
    printf("Enter the value of two numbers:");
    scanf("%d%d",&n1,&n2);

    q= n1/n2;
    mod=n1-n2*q;

        return 0;
}
