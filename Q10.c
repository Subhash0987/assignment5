#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter a number:\n");
    scanf("%d",&n);
    printf("print table:\n");
    for(i=1;i<=10;i++)
    printf("%d x %d=%d\n",n,i,i*n);
    return 0;
}
