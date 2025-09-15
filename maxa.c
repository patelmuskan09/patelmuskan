#include <stdio.h>
int main(){
    int arr[5]={1,2,4};
    int max=arr[0];
   // printf("%d", arr[1]);
   for(int i=0;i<3;i++){
    if(arr[i]>max){
  
   max=arr[i];
    }
   }
   printf("MAXIMUM=%d",max);
}
    