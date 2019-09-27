#include <stdio.h>
int main()
{
    int a[50],i,j,n,temp;
    printf("enter the size of array: ");
    scanf("%d",&n);
    printf("enter the elements in array\n");
    for(i=0;i<n;i++){
        printf("element %d is: \n",i);
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++){
        for(j=0;j<n-1;j++){
            if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("the min element is:%d \n",a[0]);
    printf("the max element is:%d \n",a[n-1]);
}
