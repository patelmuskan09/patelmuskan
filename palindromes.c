#include<stdio.h>
#include<string.h>

int main(){
    char name[] = "nadam";
    int ln= strlen(name);
    int istrue=1;
    for(int i=0;i<ln/2;i++){
        if(name[i] !=name[ln-i-1]){
            istrue=0;
            break;
        }
    }
    if(istrue==1){
        printf("palindrome");
    
    }
    else{
        printf("no palindrome");
    }
    return 0;


}