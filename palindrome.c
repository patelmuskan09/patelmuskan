#include <stdio.h>
int main(){
    int n,rev=0,temp;
    printf("ENTER NUMBER OR WORD:");
    scanf("%d", &n);
    if(n<0){
        printf("NOT A PALINDROME!!!");
       return 0;
    }
    temp=n;
    while(temp>0){
        rev = rev*10 + temp%10;
        temp /=10;
    }
    if(rev==n) printf("PALINDROME!!!\n");
    else printf("NOT A PALINDROME!!"); //SOMETHING WRONG HERE
    


  /*  int n,rev=0,temp;
    int arr[5]={1,2,3,2,1};
    int isTrue=1;
    for(int i=0;i<5/2;i++){
        if(arr[i]!=arr[5-i-1]){
            isTrue=0;
        }
    }
    if(isTrue==1){
        printf("PALINDROME!!");
    }
    else{
        printf("NOT A PALINDROME");
    }
    */
    return 0;
}
