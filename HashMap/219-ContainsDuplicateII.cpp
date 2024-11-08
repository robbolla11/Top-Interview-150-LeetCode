class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int, vector<int>> mapa;

        for (int i = 0; i < nums.size(); ++i) //repeticiones de cada num y eso, odio mi vida
            mapa[nums[i]].push_back(i);

        for (const auto& par : mapa) {
            const vector<int>& posiciones = par.second; //vector de posiciones

            for (int i = 0; i < posiciones.size()-1 ; i++) 
            {
                int diff = posiciones[i+1] - posiciones[i]; //solo importa la distancia entre aparaciciones consecutivas, igual se busca minima
                if (diff <= k)
                    return true;
            }
        }

        return false; 
    }
};
