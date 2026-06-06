#include<iostream>
using namespace std;

int linearsearch(int arr[], int size, int element){
    for(int i=0;i<size;i++){
        if(arr[i]==element){
            return i;
            
        }

    }
    return -1;
    
}
int main(){
    int arr[]={1,3,4,5,7,4,89,567,86,23,67};
    int size=sizeof(arr)/sizeof(arr[0]);
    int element=567;
    int index=linearsearch(arr,size,element);
    if(index!=-1){
    cout<< "Element " << element << " found at index " << index;
    }
    else{
        cout<<"ELEMENT NOTT FOUNDD!";
    }
    
    return 0;

}
