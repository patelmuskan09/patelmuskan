#include<stdio.h>

int main(){
    char name[]="hie";
    char data[10];
    for(int i=0;name[i]!='\0';i++){
        data[i]=name[i];
        }
        printf("copied: %s", data);
        return 0;
}
