class Solution {
public:
    bool isValid(string s) {
        stack<char> pila;

        unordered_map<char, char> pairs = {
            {')', '('},
            {'}', '{'},
            {']', '['}
        };

        if (s.empty() || s.length()==1) //aqui pude haver hecho que viera si era impar, pero ya sirvio asi que no importa
            return false;

        if (s[0] == ']' || s[0] == '}' || s[0] == ')')
            return false;

        for (char c : s) 
        {
            if (pairs.count(c)) 
            {  //c es de cierre
                if (!pila.empty() && pila.top() == pairs[c]) 
                    pila.pop();
                else 
                    return false;
            }
            else  //c es de apretura
                pila.push(c);
        }

        if(pila.empty())
            return true;
        else
            return false;
    }
};
