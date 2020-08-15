// Runtime: 112 ms
// Memory Usage: 33.8 MB

class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> result;
        for(int i=0;i<nums.size();i++){
            if(nums[abs(nums[i])-1] < 0){
                result.push_back(abs(nums[i]));
            }
            else{
                nums[abs(nums[i])-1] *= -1;
            }
        }
        return result;
    }
};
