#include <stdio.h>
int prime(){
    int n=21;
    int isPrime=1;
    if(n<=1){
        printf("NOT PRIME");
        return 0;
    }
    for(int i=2;i<n;i++){
      if(n%i==0){
         isPrime=0;
         break;

      }
   }
   if(isPrime){
      printf("NO. IS PRIME!!");
   }
   else{
      printf("NOT PRIME!!!");
   }
}
int main(){
    prime();
}

