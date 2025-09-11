#include <stdio.h>
int oddeven(){
    int n;
    printf("Enter value of n:");
    scanf("%d", &n);
    if(n%2==0)
    printf("EVEN!");
    else
    printf("ODD!");
}
int main(){
        oddeven();
}