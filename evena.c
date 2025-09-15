#include <stdio.h>
int main(){
    int arr[5]={1,2,4};
   

   for(int i=0;i<3;i++){
    if(arr[i]%2==0){
       printf("EVEN!!");
    }
    else{
        printf("ODD!!");
    }
   }
   
}