#include <stdio.h>
int main(){
    int arr[5]={1,2,4};
    int min=arr[0];
   // printf("%d", arr[1]);
   for(int i=0;i<3;i++){
    if(arr[i]<min){
  
   min=arr[i];
    }
   }
   printf("MINIMUM=%d",min);
} 