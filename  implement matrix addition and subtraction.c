#include <stdio.h>
 
int main()
{
    int m, n, i, j, a[10][10], b[10][10], sum[10][10], diff[10][10];
    printf("Enter the number of rows and columns of matrix\n");
    scanf("%d%d", &m, &n);
    printf("Enter the elements of first matrix\n");
    for (i= 0; i< m; i++)
    for (j= 0; j< n; j++)
    scanf("%d", &a[i][j]);
    printf("Enter the elements of second matrix\n");
    for (i = 0; i < m; i++)
    for (j= 0 ; j< n; j++)
    scanf("%d", &b[i][j]);
    printf("The sum of entered matrices:-\n");
    for (i= 0; i < m; i++)
    {
        for (j= 0 ; j< n; j++) 
        {
            sum[i][j] = a[i][j] + b[i][j];
            printf("%d ", sum[i][j]);
        }
    printf("\n");
     
    }
    printf("The difference of entered matrices:-\n");
    for (i= 0; i < m; i++)
    {
        for (j= 0 ; j< n; j++) 
        {
        	  diff[i][j]=a[i][j]-b[i][j];
            printf("%d ", diff[i][j]);
         }   
    printf("\n");
    }
    return 0;
}