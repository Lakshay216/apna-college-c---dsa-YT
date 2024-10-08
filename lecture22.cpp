#include <iostream>
# include <vector>
using namespace std;

bool isValid(vector<int> &arr,int n ,int m ,int maxAllowedTime){
    int painter =1;
    int time=0;
    for(int i=0;i<n;i++){ //O(n)
        if(arr[i]+time<=maxAllowedTime){
            time +=arr[i];
        }else{
            time =arr[i];
            painter++;
        }
    }
    return painter <=m;
}

int minTimeToPaint(vector<int> &arr,int n,int m){
int sum =0,maxVal =INT_MIN;

for(int i=0;i<arr.size();i++){//0(log(sum)*n)
    sum+= arr[i];
     maxVal = max(maxVal,arr[i]);
}

int st =maxVal;
int end = sum;
int ans =-1;
while(st<=end){//log(sum)/ log(range)
    int mid = st +(end-st)/2;
    
    if(isValid(arr, n, m,mid)){//left
        end = mid-1;
        ans =mid;
    }else{//right
        st =mid+1;
    }
}
return ans;
}

int main(){
    vector<int> arr ={40,30,10,20};
    int n=4 , m=2;

    cout<<minTimeToPaint(arr,n,m)<<endl;
    return 0;
}