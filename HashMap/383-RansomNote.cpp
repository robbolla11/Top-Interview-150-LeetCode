class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int letras[26] = {};

        for(char& letra : magazine) 
            ++letras[letra - 'a'];

        for(char& letra : ransomNote)
        {
            if(--letras[letra - 'a'] < 0)
                return false;
        }

        return true;
    }
};
