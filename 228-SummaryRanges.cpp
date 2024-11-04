class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> nums2; 
        
        if (nums.empty()) 
            return nums2;
        int curr = nums[0];

        for (int i = 0; i < nums.size(); i++) 
        {
            if (i == nums.size() - 1 || nums[i] + 1 != nums[i + 1]) 
            {
                if (curr == nums[i])
                    nums2.push_back(to_string(curr));
                else
                    nums2.push_back(to_string(curr) + "->" + to_string(nums[i]));

                if (i != nums.size() - 1) 
                    curr = nums[i + 1];
            }
        }
        
        return nums2;
    }
};
