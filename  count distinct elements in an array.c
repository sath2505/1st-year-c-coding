#include <stdio.h>
#define max_size 100
int main()
{
    int arr[max_size],freq[max_size];
    int size,i,j,count;
    printf("enter size of the array:");
    scanf("%d",&size);
    printf("enter elements in array:");
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
        freq[i]=-1;
    }
    for(i=0;i<size;i++)
    {
        count=1;
        for(j=i+1;j<size;j++)
        {
            if(arr[i]==arr[j])
            {
                count++;
                freq[j]=0;
            }
        }
        if(freq[i]!=0)
        {
            freq[i]=count;
        }
    }
    printf("distinct elements in the array are:\n");
    for(i=0;i<size;i++)
{
    if(freq[i]==1)
    {
        printf("%d",arr[i]);
    }
}
return 0;
}