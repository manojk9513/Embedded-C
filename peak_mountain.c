//peak index in a mountain array
#include <stdio.h>

int main(){
    int arr[6] ={0,1,3,5,2,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    int s=0;
    int mid=s+(n-1-s)/2;
    int e=n-1;
//array will be sorted in increasing order and then decreasing order
    while(s<=e){
        if(arr[mid]<arr[mid+1]){
            s=mid+1;
        }
        else{
            e=mid;
        }
        mid=s+(e-s)/2;
    }
    printf("The peak index is %d",peak);
    return s;

    
}