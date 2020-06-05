#include <stdio.h>
int main()
{
    int a[50],i,n,large,small;
    printf("\nenter the number of elements:");
    scanf("%d",&n);
    printf("\ninput the array elements:");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    large=small=a[0];
    for(i=1;i<n;++i)
    {
        if(a[i]>large)
        large=a[i];
        if(a[i]<small)
        small,a[i];
    }
    printf("\nthe smallest elements is %d\n",small);
    printf("\nthe largest elements is %d\n",large);
    return 0;
}