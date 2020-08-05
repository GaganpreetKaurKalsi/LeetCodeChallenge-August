// 12/13 test cases passed - Error Time Limit Exceeded

class WordDictionary {
    vector<string> dict;
public:
    /** Initialize your data structure here. */
    WordDictionary() {
        vector<string> dict={};
    }
    
    /** Adds a word into the data structure. */
    void addWord(string word) {
        dict.push_back(word);
    }
    
    /** Returns if the word is in the data structure. A word could contain the dot character '.' to represent any one letter. */
    bool search(string word) {
        int flag = 0;
        for(int i=0;i<dict.size();i++){
            flag=0;
            if(dict[i].length() == word.length()){
                for(int j=0;j<word.length();j++){
                    if(word[j]!='.' && word[j]!=dict[i][j]){
                        flag=1;
                        break;
                    }
                }
                if(flag==0){return true;}
            }   
        }
        return false;
    }
};

/**
 * Your WordDictionary object will be instantiated and called as such:
 * WordDictionary* obj = new WordDictionary();
 * obj->addWord(word);
 * bool param_2 = obj->search(word);
 */
