// Delete element from the begining of the array

#include<stdio.h>
#define max 100


int main(){
    int i,n,pos;
    int a[max];

    printf("enter size of the array : ");
    scanf("%d",&n);
    printf("Array is ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    printf("Enter the Position : ");
    scanf("%d",&pos);

    for(i=pos-1;i<n-1;i++){
        a[i] = a[i+1];
    }
    n--;

    printf("Now the array is :");
    for(i=0;i<n;i++){
        printf("%d\t",a[i]);
    }

    return 0;
}