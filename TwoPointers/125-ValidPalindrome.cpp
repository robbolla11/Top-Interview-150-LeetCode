class Solution {
public:
    bool isPalindrome(string s) {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        s.erase(remove_if(s.begin(), s.end(), [](char c) 
        {
            return !isalpha(c) && !isdigit(c);
        }), s.end());

        string s2 = s;
        int n = 0;

        if(s.length()==0 || s.length()==1) return true;

        for(int i=s.length()-1; i>=0 ; i--)
        {
            
            if(s2[i]!=s[n])
            {
                return false;
            }
            n++;
        }

        return true;

    }
};

//TODO : do with pointers
