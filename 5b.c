#include <stdio.h>
int binarySearch(int arr[], int l, int r, int x) {
    while (l <= r) {
        int m = l + (r - l) / 2;
        if (arr[m] == x)
            return m;
        if (arr[m] < x)
            l = m + 1;
        else
            r = m - 1;
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
    int result = binarySearch(arr, 0, n - 1, x);
    if (result != -1)
        printf("Element found at index %d\n", result);
    else
        printf("Element not found in the array\n");
    
    return 0;
}
