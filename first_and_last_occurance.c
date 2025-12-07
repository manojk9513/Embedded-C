#include <stdio.h>

int firstOccurrence(int arr[], int key, int size){
    int start=0;
    int end=size-1;
    int mid=start+(end-start)/2;
    int result = -1;
    while(start<=end){
        if(arr[mid]==key){
            result = mid;
            end = mid - 1; // continue searching to the left
        }
        else if(arr[mid]>key){
            end=mid-1;
        }
        else if (arr[mid]<key){
            start=mid+1;
        }
        mid=start+(end-start)/2;
    }
    return result;
}

int lastOccurrence(int arr[], int key, int size){
    int start=0;
    int end=size-1;
    int mid=start+(end-start)/2;
    int result = -1;
    while(start<=end){
        if(arr[mid]==key){
            result = mid;
            start = mid + 1; // continue searching to the right
        }
        else if(arr[mid]>key){
            end=mid-1;
        }
        else if (arr[mid]<key){
            start=mid+1;
        }
        mid=start+(end-start)/2;
    }
    return result;
}
int main(){
    int arr[5]={1,3,3,3,4,5};
    int key=3;
    int size=6;
    int ans=firstOccurrence(arr,key,size);
    printf("The first occurrence of the element is at index %d",ans);
    ans=lastOccurrence(arr,key,size);
    printf("\nThe last occurrence of the element is at index %d",ans);   
    return 0;
}