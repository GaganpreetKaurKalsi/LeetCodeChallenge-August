// Runtime : 12ms
// Memory Usage : 7.3MB

#include<bits/stdc++.h>
#include<iostream>
#include<string>
using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        int start=0,end=s.length()-1;
        while(start<end){
            while(start<end && !isalnum(s[start])){start++;}
            while(start<end && !isalnum(s[end])){end--;}
            if(tolower(s[start])!=tolower(s[end]))return false;
            start++;
            end--;
        }
        return true;
    }
};

int main(){
    string s="A man, a plan, a canal: Panama";
    Solution obj;
    cout<<obj.isPalindrome(s);
}
