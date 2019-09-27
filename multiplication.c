#include <stdio.h>
int main()
{
    int i;
    printf("Enter number to be multiplied: ");
    scanf("%d",&i);
    for(int j=1;j<=10;j++){
        int k=i*j;
        printf("%d * %d = %d\n",i,j,k);
        
    }
}
