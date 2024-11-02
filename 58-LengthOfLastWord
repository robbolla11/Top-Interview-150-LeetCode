class Solution {
public:
    int lengthOfLastWord(string s) {
        int sum = 0;
        int val = 0;

        for(int i =0; i<s.size(); i++)
        {
            if(s[i]==' ')
                sum = 0;

            else if (s[i]!=' ')
            {
                sum++;
                val = sum;
            }
            
            else if(s[i+1]==' ')
            {
                val = sum;
            }
        }
        return val;
    }
};
