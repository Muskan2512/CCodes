#include<stdio.h>
int main(){
     int arr[100];
    int n;
    printf("Enter the size of the array:");
    scanf("%d",&n);
    int val;
    for(int i=0;i<n;i++){
        printf("Enter the element at index %d:",i);
        scanf("%d",&val);
        arr[i]=val;
    }
    // sum of all elements of the array
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    printf("The sum of the given array is:%d",sum);
}