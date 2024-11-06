class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length())
            return false;


        int letras[26] = {};

        for(char& letra : s) 
            ++letras[letra - 'a'];

        for(char& letra : t)
        {
            if(--letras[letra - 'a'] < 0)
                return false;
        }

        return true;
    }
};
