#include <stdio.h>
#include<stdlib.h>
int main()
{
    int a[50],n,i,sum=0,flag;
    printf("enter size:");
    scanf("%d",&n);
    printf("enter the array elements:");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        flag=0;
        for(int j=1;i<a[i];j++)
        {
            if((j*j)==a[i])
            {
                flag++;
                break;
            }
        }
        if(flag>0)
        sum=sum+a[i];
    }
    printf("sum of all positive square elements=%d",sum);
    return 0;
}