class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int time = nums.size() / 2;
        int count = 0;                    
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size(); i++) {
            if (i == 0) {
                count = 1;
            }
            else if (nums[i] == nums[i - 1]) {
                count++;
            }
            else { 
                if (count > time) {
                    return nums[i - 1];
                }
                count = 1;              
            }
        }
        return nums[nums.size() - 1];
    }
};

