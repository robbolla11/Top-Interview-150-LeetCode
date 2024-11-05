class Solution {
public:
    bool isIsomorphic(string s, string t) {

        if (s.length() != t.length())
            return false;

        unordered_map<char, char> mapa;
        unordered_set<char> usados;

        for (int i = 0; i < s.length(); i++) 
        {
            char charS = s[i];
            char charT = t[i];
            if (mapa.count(charS))  //charS ya mapeado 
            {
                if (mapa[charS] != charT)
                    return false; //Inconsistencia en el mapeo
            }
            else 
            {
                if (usados.count(charT)) //charT ya mapeado a otro char de s
                    return false; 
                mapa[charS] = charT;
                usados.insert(charT);
            }
        }
        return true;
    }
};
