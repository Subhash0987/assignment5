#include<stdio.h>
int main()
{
    int i,N;
    printf("Enter a number:\n");
    scanf("%d",&N);
    printf("Square of the first n natural number are:\n");
    for(i=1;i<=N;i++)
        printf("%d\n",i*i);
    return 0;
}


