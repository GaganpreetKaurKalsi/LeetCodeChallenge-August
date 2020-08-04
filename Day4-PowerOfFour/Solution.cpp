// Runtime: 4 ms
// Memory Usage: 6 MB

class Solution {
public:
    bool isPowerOfFour(int num) {
        if (num<1) return false;
        int i=0,n=num;
        while (n>1){
            n>>=2;
            i+=2;
        }
        return num==(n<<i);
    }
};
