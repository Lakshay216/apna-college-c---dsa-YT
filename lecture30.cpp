// 151. Reverse Words in a String
class Solution {
public:
    string reverseWords(string s) {
        string ans="";
        reverse(s.begin(),s.end());
        for(int i=0;i<s.length();i++){
            string ans1="";
            while(i<s.length() && s[i]!=' '){
                ans1 += s[i];
                i++;
            }
        reverse(ans1.begin(),ans1.end());
        if(ans1.length()>0){
            ans += " " +ans1; 
        }
        }
    return ans.substr(1);
    }
};

//  344. Reverse String
class Solution {
public:
    void reverseString(vector<char>& s) {
        int st=0; int end = s.size()-1;
        while(st<end){
            swap(s[st],s[end]);
            st++;
            end--;
        }
    }
};