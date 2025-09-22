#include <stdio.h>
void bubblesort(int arr[],int n){
    int i,j,temp;
    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            if (arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;       
                 }
        }
    }
    }
    void printarray(int arr[],int n){
        for(int i=0;i<n;i++)
        printf("%d", arr[i]);
        printf("\n");
    }

    int main(){
        int arr[]={2,4,1,6,5};
        int n= sizeof(arr)/sizeof(int);
        printf("Original Array: \n");
        printarray(arr,n);
        bubblesort(arr,n);
        printf("Sorted array: \n");
        printarray(arr,n);
        return 0;
    
    }
