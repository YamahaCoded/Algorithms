#include <stdio.h>

int binarySearch(int arr[], int size, int target){
    int left = 0;
    int right = size - 1;

    while(left <= right){
        int middle = left + (right - left) / 2;
        if(arr[middle] == target){
            return middle;
        }
        if(arr[middle] < target){
            left = middle + 1;
        }
        else{
            right = middle - 1;
        }
    }
    return -1;
}

int main(){
    int arr[5] = {0, 1, 2, 4, 6};
    int target = 4;
    int size = sizeof(arr) / sizeof(arr[0]);

    int result = binarySearch(arr, size, target);

    if(result == -1){
        printf("Element not found\n");
    }else{
        printf("Element found: %d\n", result);
    }

    return 0;
}