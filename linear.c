#include<stdio.h>
int print(int *arr, int n);
int bubble(int *arr, int n);

int main() {
    int arr[9];
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("enter the array of element : ");
    for(int i=0; i<n; i++) {
    scanf("%d",&arr[i]);
    }
    printf("Before sorting an array : \n");
    print(arr,n);
    printf("\n");
    printf("After sorting an array : \n");
    bubble(arr,n);
    print(arr,n);
    return 0;
}
int print(int *arr, int n) {
    for(int i=0; i<n; i++) {
        printf("%d\t",arr[i]);
    }
}
int bubble(int *arr, int n) {
    for(int i=0; i<n-1; i++) {
        for(int j=0; j<n-i-1; j++) {
            if(arr[j]>arr[j+1]) {
                int temp = arr[j];
                  arr[j] = arr[j+1];
                  arr[j+1] = temp;
            }
        }
    }
} 