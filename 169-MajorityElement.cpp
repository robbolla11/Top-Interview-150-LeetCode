class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> occurrences;

        for (int num : nums)
            occurrences[num]++;

        int moda = 0;
        int majorityElement = -1;
        
        for (const auto& MapPar : occurrences) 
        {
            if (MapPar.second > moda) 
            {
                moda = MapPar.second;
                majorityElement = MapPar.first;
            }
        }

        return majorityElement;
        }
    };
