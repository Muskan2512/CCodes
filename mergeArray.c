#include<stdio.h>
int main(){
    int n1,n2;
    printf("Enter the size of array1 and array2:");
    scanf("%d %d",&n1,&n2);
    int a1[n1],a2[n2];
    int val=0;
    printf("Enter elements of array1\n");
    for(int i=0;i<n1;i++){
        printf("Enter the element at index %d:",i);
        scanf("%d",&val);
        a1[i]=val;
    }
    printf("Enter elements of array2\n");
    for(int i=0;i<n2;i++){
        printf("Enter the element at index %d:",i);
        scanf("%d",&val);
        a2[i]=val;
    } 
    int a[n1+n2];
    for(int i=0;i<n1;i++){
        a[i]=a1[i];
    }
    for(int i=0;i<n2;i++){
        a[n1+i]=a2[i];
    }
    printf("The array after merging both the arrays:\n");
    for(int i=0;i<n1+n2;i++){
        printf("%d ",a[i]);
    }
}