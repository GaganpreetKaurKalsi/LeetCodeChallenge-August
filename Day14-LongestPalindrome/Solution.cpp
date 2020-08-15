// Runtime: 4 ms
// Memory Usage: 6.5 MB

class Solution {
public:
    int longestPalindrome(string s) {
        int length=0,flag=0;
        vector<pair<char,int>> vec;
        for(int i=0;i<s.size();i++){
            for(int j=0;j<vec.size();j++){
                if(vec[j].first == s[i]){
                    vec[j].second += 1;
                    flag=1;
                    break;
                }
            }
            if(flag==0){
                vec.push_back(make_pair(s[i],1));
            }
            flag=0;
        }
        flag=0;
        for(int j=0;j<vec.size();j++){
            length = length + vec[j].second - vec[j].second%2;
            if(vec[j].second%2 == 1){flag=1;}
        }
        if(flag==1){length++;}
        return length;
    }
};
