#include <stdio.h>
int main()
{
    int m,n,i,j,a[10][10],pdsum=0,sdsum=0;
    printf("Enter the no.of rows  and columns:\n");
    scanf("%d %d",&m,&n);
    printf("%d %d\n",m,n);
    printf("Enter the matrix elements\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
          scanf("%d",&a[i][j]);
          printf("%d\t ",a[i][j]);
        }
        printf("\n");
    }   
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j)
            pdsum=pdsum+a[i][j];
        }
    }
    printf("Sum of all the elements of principal diagnol is %d\n",pdsum);
    i=0;
     for(j=n-1;j>=0;j--)
     {
     	sdsum=sdsum+a[i][j];
     	i++;
     }
     printf("Sum of all the secondary diagnol element is %d\n", sdsum);
}