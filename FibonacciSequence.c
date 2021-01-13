#include<stdio.h>
int main()
{
    int n,temp=0;
    printf("Enter the number\n");
    scanf("%d",&n);
    int a=0,b=1;
    printf("%d %d ",a,b);
    for(int i=0;i<n-2;i++)
    {
        printf("%d ",a+b);
        temp=b;
        b=a+b;
        a=temp;
    }
    return 0;
}
