// count total number of duplicate elements in the array
#include<stdio.h>
int main(){
    // int arr[6]={1,2,2,33,1,3};
    int arr[6]={1,2,2,3,1,3};
    int n=sizeof(arr)/sizeof(int);
    int count=1;
    int totalDuplicates=0;
    for(int i=0;i<n;i++){
        count=1;
        if(arr[i]==-1)continue;
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                arr[j]=-1;                
                count++;totalDuplicates+=(count-1);
                }
        }
        printf("%d count in the array is:%d\n",arr[i],count);
    }
    printf("\nTotal number of Dupllicates in the array is:%d",totalDuplicates);
}