class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        auto last = unique(nums.begin(), nums.end()); //graccias señor unique por hacer esto por mi
        nums.erase(last, nums.end());

        return nums.size();
    }
};
