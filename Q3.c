#include<stdio.h>
int main()
{
    int i,N;
    printf("Enter a number:\n");
    scanf("%d",&N);
    printf("The First natural numbers in reverse order are:\n");
    for(i=N;i>=1;i--)
        printf("%d\n",i);
    return 0;
}
