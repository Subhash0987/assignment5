#include<stdio.h>
int main()
{
    int i,N;
    printf("Enter a number:\n");
    scanf("%d",&N);
    printf("The first odd natural number in reverse order are:\n");
    for(i=N;i>=1;i--)
        printf("%d\n",2*i-1);
    return 0;
}

