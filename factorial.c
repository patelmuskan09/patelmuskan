#include<stdio.h>
int fact(int a){ //a is parameter
   // return a;
   if(a==0 || a==1){
    return 1;
   }
  return a*fact(a-1);
}
int main(){
  int data= fact(5);
  printf("%d",data);
    
}