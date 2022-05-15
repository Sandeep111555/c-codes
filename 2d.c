#include<stdio.h>
int main()

{
    int n317,m317;
    printf("Enter the number of rows and columns in matrix: \n");
    scanf("%d%d",&n317,&m317);
    int a317[n317][m317];
    printf("Enter the values in matrix: ");
    for(int i=0;i<n317;i++)
    {
        for(int j=0;j<m317;j++)
        {
            scanf("%d",&a317[i][j]);

        }
    }
    printf("The matrix is: \n");
for(int i=0;i<n317;i++)
    {
        for(int j=0;j<m317;j++)
        {
            printf("%d ",a317[i][j]);
            
        }
        printf("\n");
        
    }
printf("\n");
return 0;
}