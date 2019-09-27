#include <stdio.h>
int main()
{
    int i, j, rows;
    printf("Enter number of rows: ");
    scanf("%d",&rows);
    for(i=rows; i>=0; --i)
    {
        for(j=1; j<=rows; ++j)
        {
            printf("%d ",j);
        }
        rows=i-1;
        printf("\n");
    }
    return 0;
}
