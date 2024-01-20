#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i=1;
    printf("Enter any Number:");
    scanf("%d",&n);
    while(i<=n)
    {
        printf("%d ",i);
        i=i++;
    }
    return 0;
}