class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mapa;

        for (int i = nums.size()-1; i >=0; i--) 
        {

            int complemento = target - nums[i];

            if (mapa.count(complemento)) {
                return {mapa[complemento], i}; 
            }

            mapa[nums[i]] = i;
        }
        return {};
    }
    
};
