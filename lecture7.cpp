#include<iostream>
#include<climits>
#include<algorithm> 
using namespace std;

void reverse(int arr[],int sz){
    int start=0;
    int end = sz-1;
    while(start<end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}
int main()
{
   int arr[] ={1,2,35,4,5,6,7,8,9};
   int sz =9;
   reverse(arr,sz);
   for (int i=0;i<sz;i++){
    cout<<arr[i]<<endl;
   }
   return 0;
}