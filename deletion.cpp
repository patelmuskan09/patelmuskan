#include<iostream>
using namespace std;
//TRAVERSAL
void display(int arr[], int n){
    for(int i=0; i<n; i++ ){
        cout<<arr[i]<<" ";
        
    }
    cout<<endl;
}
//DELETION AT AN INDEX
int inddeletion(int arr[] , int size, int index){
   
   for(int i=index; i<=size-1; i++){
        arr[i]=arr[i+1];
   }
    
}

int main(){
    int arr[100]={7,8,12,27,88};
    int size=5,index=1;
    display(arr, size);
    inddeletion(arr , size, index);
    size=size-1;
    display(arr,size);
return 0;
}