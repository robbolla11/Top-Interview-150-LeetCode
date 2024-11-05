class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string prefijo = strs[0];

        for(int i =0; i< strs.size(); i++)
        {
            while (strs[i].find(prefijo) != 0) //hASTA QUE
            {
                prefijo = prefijo.substr(0, prefijo.size() - 1); //quitamos 1 letra a la vez
                if (prefijo.empty()) return "";
            }
        }
        return prefijo;
    }
};
