class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();

        k = k % n;
        if (k == 0) return;

        for (int i = 0; i < n-k; i++)
            nums.push_back(nums[i]);

        vector<int> rotatedArr(nums.begin() + n-k, nums.end());
        nums = rotatedArr;
        
    }
};
