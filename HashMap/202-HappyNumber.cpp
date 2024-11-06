class Solution {
public:
    bool isHappy(int n) 
    {
        int suma = 0;
        unordered_set<int> visitados;
        if(n==1)
            return true;
        
        while (n != 1 && visitados.find(n) == visitados.end()) 
        {
            visitados.insert(n);
            int suma = 0;

            while (n > 0) 
            {
                int digito = n % 10;
                suma += digito * digito;
                n /= 10;
            }

            n = suma;

            if(suma ==1)
                return true;
        }

        return false;
    }
};

//se que no usa hashmap pero tengu sueño asi que no me importa
