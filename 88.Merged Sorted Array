class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int posM = m - 1; //posicion en el array, si m=3, en el array el ultimo numero es la psoicon 2
        int posN = n - 1; 
        int posArray1 = m + n - 1; //posicion ultima array m+n

        while (posN >= 0)
        {
            if (posM >= 0 && nums1[posM] > nums2[posN])
            {
                nums1[posArray1] = nums1[posM];
                posArray1--;
                posM--;
            }
                
            else
            {
                nums1[posArray1] = nums2[posN];
                posArray1--;
                posN--;
            }
                
        }
    }
};
