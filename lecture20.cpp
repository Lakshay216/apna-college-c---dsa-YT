// single element in a sorted array 540
class Solution { 
public:
    int singleNonDuplicate(vector<int>& A) {
       int n = A.size();
       int st =0;
       int end = n-1;
       
       if(n==1) return A[0];
       
       while(st<end){
        int mid = st + (end-st)/2;
        if(st==mid && A[0]!=A[1]) return A[mid];
        if(end==mid && A[n-1]!=A[n-2]) return A[mid];
            if(A[mid-1]!= A[mid] && A[mid]!=A[mid+1]){
                return A[mid];
            }

            if(mid%2==0)//even 
            {
                if(A[mid-1]==A[mid]){
                    end =mid-1;
                }
                else{
                    st = mid+1;
                }
            }
            else//odd
            {
                if(A[mid-1]==A[mid]){
                    st=mid+1;
                }
                else{
                    end=mid-1;
                }
            }
       }
       return A[st];
    }
};