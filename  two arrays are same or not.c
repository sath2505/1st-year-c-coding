#include <stdio.h>
int main(void)
{
    int a[50],b[50],n1,n2,i,flag=0;
    printf("enter the size of array 1 and 2:\n");
    scanf("%d%d",&n1,&n2);
    printf("enter the elements of array 1:\n");
    for(i=0;i<n1;i++)
    scanf("%d",&a[i]);
    printf("enter elements of arrray 2:\n");
    for(i=0;i<n2;i++)
    scanf("%d",&b[i]);
    if(n1!=n2)
    printf("the arrays are not equal.");
    else
    {
        for(i=0;i<n1;i++)
        if(a[i]!=b[i])
        flag++;
        if (flag==0)
        printf("the arrays are equal,");
        else
        printf("the arrays are not equal.");
    }
    return 0;
}