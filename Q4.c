#include<stdio.h>
int main()
{
    int i,N;
    printf("Enter a number:\n");
    scanf("%d",&N);
    printf("The first odd natural number are:\n");
    for(i=1;i<=N;i++)
        printf("%d\n",2*i-1);
    return 0;
}
