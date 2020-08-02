// The program may seem to be a bit lengthy but the complexity is comparitively less
// Runtime: 0 ms
// Memory Usage: 6.2 MB

#include<bits/stdc++.h>
#include<string.h>
#include<cstring>
using namespace std;

class Solution {
public:
    bool detectCapitalUse(string word) {
        if(word[0]== toupper(word[0])){
            int flag;
            if( word[1] == toupper(word[1]) ) flag=0;
            else flag=1;
            if (flag==0){
                for(int i=2;i<word.length();i++){
                    if(word[i] != toupper(word[i])){
                        return false;
                    }
                }
                return true;
            }
            else{
                for(int i=2;i<word.length();i++){
                    if(word[i] == toupper(word[i])){
                        return false;
                    }
                }
                return true;
            }
        }
        else{
            for(int i=1;i<word.length();i++){
                if(word[i] == toupper(word[i])){
                    return false;
                }
            }
            return true;
        }
    }
};

int main()
{
    string str = "LeetCode";
    Solution obj;
    cout<<obj.detectCapitalUse(str);
}
