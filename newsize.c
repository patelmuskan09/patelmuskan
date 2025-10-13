#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    printf("Enter Size: ");
    scanf("%d", &n);
    int*arr= (int *)malloc(n * sizeof(int));
    printf("Enter %d Elements:\n", n);
    for(int i=0;i<n;i++)
    scanf("%d", &arr[i]);
    printf("You Entered: ");
    for(int i=0;i<n;i++)
    printf("\t%d", arr[i]);

    printf("\nNow Enter New size: ");
    int newsize;
    scanf("%d", &newsize);
    arr = (int *)realloc(arr, newsize * sizeof(int));
    printf("Enter %d new elements:\n", newsize);
    for(int i=0;i<newsize;i++)
    scanf("%d",&arr[i]);
     printf("You Entered: ");
    for(int i=0;i<newsize ;i++)
    printf("\t%d", arr[i]);
    free(arr);
    return 0;
}