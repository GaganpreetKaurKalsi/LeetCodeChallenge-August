// Runtime: 0 ms
// Memory Usage: 6.5 MB

class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<vector<int>> triangle(rowIndex+1);
        triangle[0].push_back(1);
        if(rowIndex==0){
            return triangle[0];
        }
        triangle[1].push_back(1);
        triangle[1].push_back(1);
        if(rowIndex==1){
            return triangle[1];
        }
        for(int i=2;i<=rowIndex;i++){
            triangle[i].resize(i+1);
            triangle[i][0] = triangle[i][i] = 1;
            triangle[i][1] = triangle[i][i-1] = i;
            for(int j=2;j<i-1;j++){
                triangle[i][j] = triangle[i][i-j] = triangle[i-1][j-1] + triangle[i-1][j];
            }
        }
        return triangle[rowIndex];
    }
};
