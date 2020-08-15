// Runtime: 0 ms
// Memory Usage: 6.1 MB

class Solution {
public:
    int titleToNumber(string s) {
        int len = s.size();
        long long int result = 0 , j=1;
        for(int i=len-1; i>=0;i--){
            result = result + j*(int(s[i])-64);
            cout<<int(s[i]);
            j = j*26;
        }
        return result;
    }
};
