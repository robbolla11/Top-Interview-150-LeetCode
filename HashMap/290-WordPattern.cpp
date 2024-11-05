class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<char, string> mapa;
        unordered_set<string> usados;

        istringstream flujo(s); //mamada que es para que lea como si fuera input de teclado o algo asi, no se esto si me lo dijo el chat
        string palabra;
        int i = 0; 

        while (flujo >> palabra) //bucle que termina cuando no hay mas plabras
        {
            char charP = pattern[i];

            if (mapa.count(charP)) 
            { //charP ya mapeado
                if (mapa[charP] != palabra) //Inconsistencia en el mapeo
                    return false;
            } 
            else 
            {
                if (usados.count(palabra)) // La palabra ya fue mapeada a otro char
                    return false;
                mapa[charP] = palabra; // Mapeo de char a palabra
                usados.insert(palabra); // Marcar palabra como usada
            }
            i++;
        }

        if(pattern.length()!=i)
            return false;

        return true;
    }
};
