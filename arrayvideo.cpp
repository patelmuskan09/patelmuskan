#include<iostream>
using namespace std;
int main(){

int arr[] = {7,4,10,20,4,1,6,8};
int n = sizeof(arr)/sizeof(arr[0]);
int product = 1;

for(int i=0;i<n;i++){
//product *= arr[i]; or product= product*arr[i];
product *= arr[i];
}
cout<<product;

}