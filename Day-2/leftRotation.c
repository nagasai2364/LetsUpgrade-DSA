#include<stdio.h>
#define max 100
int main(){

    int a[max];
    int i,n,k;

    printf("enter the size of the array :");
    scanf("%d",&n);

    printf("Array is ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    printf("Enter number of rotation : ");
    scanf("%d",&k);

    for(i=0;i<k;i++){
        int j,first;

        first = a[0];

        for(j=0;j<n-1;j++){
            a[j]=  a[j+1];
        }

        a[j] = first;

    }

    printf("Now the array is ");
    for(i=0;i<n;i++){
        printf("%d\t",a[i]);
    }

return 0;
}