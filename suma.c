#include <stdio.h>
int main(){
    int arr[5]={1,2,4};
    int sum=0;
   // printf("%d", arr[1]);
   for(int i=0;i<3;i++){
    sum=sum+arr[i];
   
   }
    printf("%d",sum);
   return 0; 
}