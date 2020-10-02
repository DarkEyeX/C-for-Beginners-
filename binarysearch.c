#include <stdio.h>
#include<stdlib.h> 
int binarySearch(int arr[], int l, int r, int x) 
{ 
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
int main() 
{   
    int ir;
    printf("Enter the number of elements in the array:");
    scanf("%d",&ir);
    int arr[ir];
    printf("Enter the elements:");
    for(int i=0;i<ir;i++){
        scanf("%d",&arr[i]);
    }
    int temp = 0; 
    for (int i = 0; i < ir; i++) {     
        for (int j = i+1; j < ir; j++) {     
           if(arr[i] > arr[j]) {    
               temp = arr[i];    
               arr[i] = arr[j];    
               arr[j] = temp;    
           }     
        }     
    }
    printf("The sorted array is");
    for(int i=0;i<ir;i++){
        printf("%d",arr[i]);
    }
    int n = sizeof(arr) / sizeof(arr[0]); 
    printf("\nEnter the number you want to search : ");
    int x;
    scanf("%d",&x);
    int result = binarySearch(arr, 0, n - 1, x);
    (result == -1) ? printf("Element is not present in array") : printf("Element is present at index %d",result); 
    return 0; 
}