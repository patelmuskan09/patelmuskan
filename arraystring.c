#include<stdio.h>

int main(){
     char name[]="hiii";
    int i=0;
    while(name[i] !='\0') {
        printf("%c\n", name[i]);
        i++;
    }
}