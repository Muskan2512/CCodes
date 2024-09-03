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
    // to insert any element at a specific location
    int pos;
    printf("Enter the position and the value to be inserted:");
    scanf("%d %d",&pos,&val);
    for(int i=n-1;i>=pos;i--){
        arr[i+1]=arr[i];
    }
    arr[pos]=val;
    // print the array content
    for(int i=0;i<=n;i++){
        printf("%d ",arr[i]);
    }
}