#include <iostream>
# include <vector>
using namespace std;

bool isValid(vector<int> &arr , int n ,int m,int maxPages){
   
    int students=1,pages=0;
     for(int i=0;i<n;i++){
        if(arr[i]>maxPages){
        return false;
    }
   
    if(arr[i]+pages<=maxPages){
        pages+=arr[i];
    }else{
        students++;
        pages= arr[i];
    }
   
    }
     return students > m? false: true;
    
}

int books(vector<int> &arr , int n ,int m){
    if(m>n){
        return -1;
    }
    int sum=0;
    
    for(int i=0;i<arr.size();i++){
         sum += arr[i];
    }
    int st=0,end=sum;
    int ans=-1;
    while(st<=end){
        int mid = st +(end-st)/2;
        if(isValid(arr,n,m,mid)){
            end = mid-1;
            ans =mid;
        }else{
            st =mid+1;
        }
    }
    return ans;
}

int main(){
    vector<int> arr ={15,17,20};
    int n = 4 , m=2;
    
    cout<<books(arr,n,m)<<endl;
    return 0;
}