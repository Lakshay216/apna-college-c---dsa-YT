#include <iostream>
using namespace std;

void bubbleSort(int arr[],int n){ //O(n^2)
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}

void selectionSort(int arr[],int n){//O(n^2)
    for(int i=0;i<n-1;i++){
       int smallestIdx =i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[smallestIdx]){
                smallestIdx =j;
            }
        }
        swap(arr[i],arr[smallestIdx]);
    }
}


void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}


int main(){;
    int arr[] ={4,1,5,3,2,0};
    int n= 6;
    selectionSort(arr,n);
    printArray(arr,n);
    return 0;
}