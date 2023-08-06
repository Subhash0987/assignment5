#include<stdio.h>
int main()
{
    int i,N;
    printf("Enter a number:\n");
    scanf("%d",&N);
    printf("The first even natural number are:\n");
    for(i=0;i<=N;i++)
        printf("%d\n",2*i);
    return 0;
}

