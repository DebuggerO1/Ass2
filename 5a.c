#include <stdio.h>

int linearSearch(int arr[], int n, int x) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            return i; 
        }
    }
    return -1; 
}

int main() {
    int n;
    printf("enter size of array: ");
    scanf("%d",&n);
    int arr[n];
    for(int i = 0 ;i<n ; i++){
        scanf("%d",&arr[i]);
    }
    int x;
    printf("enter search value : ");
    scanf("%d",&x);
    int result = linearSearch(arr, n, x);
    if (result != -1) {
        printf("Element found at index %d\n", result);
    } else {
        printf("Element not found in the array\n");
    }
    
    return 0;
}
