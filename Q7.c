#include<stdio.h>
int main()
{
    int i,N;
    printf("Enter a number:\n");
    scanf("%d",&N);
    printf("The first even natural number in reverse order are:\n");
    for(i=N;i>=0;i--)
        printf("%d\n",2*i);
    return 0;
}


