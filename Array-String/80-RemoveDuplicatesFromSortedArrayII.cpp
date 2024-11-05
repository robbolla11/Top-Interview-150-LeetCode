class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.empty()) return 0;

        int j = 0; 
        int count = 1;

        for (int i = 1; i < nums.size(); ++i) {
            if (nums[i] == nums[j])
                count++;
            else
                count = 1;

            if (count <= 2) 
            {
                j++;
                nums[j] = nums[i];
            }
        }

        nums.erase(nums.begin() + j + 1, nums.end());
        
        return j+1;
    }
};
