class Solution {
public:
    int romanToInt(string s) {
        map<char, int> romano;
        romano['I'] = 1;
        romano['V'] = 5;
        romano['X'] = 10;
        romano['L'] = 50;
        romano['C'] = 100;
        romano['D'] = 500;
        romano['M'] = 1000;

        int dec = 0;
        for(int i=0; i< (s.size()-1); i++)
        {
            if (romano[s[i]] < romano[s[i+1]]) //para ver si es de que IV o asi
                dec -= romano[s[i]];
            else
                dec += romano[s[i]];
        }

        dec += romano[s[s.size()-1]]; //el utlimo de la cadena
        return dec;
        
    }
};
