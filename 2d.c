#include<stdio.h>
int main()

{
    int n,m;
    printf("Enter the number of rows and columns in matrix: \n");
    scanf("%d%d",&n,&m);
    int a[n][m];
    printf("Enter the values in matrix: ");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);

        }
    }
    printf("The matrix is: \n");
for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            printf("%d ",a[i][j]);
            
        }
        printf("\n");
        
    }
printf("\n");
return 0;
}
