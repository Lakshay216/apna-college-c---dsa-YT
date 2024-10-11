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

void insertionSort(int arr[],int n){
    for(int i=1;i<n;i++){
        int curr = arr[i];
        int prev =i-1;
        while(arr[prev]>curr&&prev>=0){
            arr[prev+1] = arr[prev];
            prev--;
        }
        arr[prev+1] = curr;
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
    insertionSort(arr,n);
    printArray(arr,n);
    return 0;
}