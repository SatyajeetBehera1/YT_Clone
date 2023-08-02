#include <stdio.h>

int binarySearch(int arr[], int start, int length, int search)
{
    if (length >= start)
    {
        int mid = start + (length - start) / 2;

        if (arr[mid] == search){
            return mid;
        }
        if (arr[mid] > search){
            return binarySearch(arr, start, mid - 1, search);
        }
        return binarySearch(arr, mid + 1, length, search);

    }
    return -1;
}
void main(){
    int arr[] = {3, 10,23, 56, 67, 89, 100, 110, 123, 125};
    int length = sizeof(arr) / sizeof(arr[0]);
    int search = 89;
    int result = binarySearch(arr, 0, length - 1, search);
    if(result==-1){
        printf("Element is not present");
    }else{
        printf("Element is present at index %d", result);
    }
    
}
