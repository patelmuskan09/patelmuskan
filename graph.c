#include<stdio.h>
int main(){
    int height[5]={2,4,6,8,9};
    int i=0;
    int j=5;
    int maxarea=0;
    while(i<j){
    int h;
    if(height[i<height[j]]){
        h=height[i];
    }
    else{
        h=height[j];
    }
    int w=j-i;
    int area=h*w;
    if(area>maxarea){
        maxarea=area;
    }
    if(height[i]<height[j]){
        i++;
    }
    else{
        j--;
    }
    }
    printf("%d",maxarea);
    return 0;
}