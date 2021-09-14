class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = m - 1, j = n - 1; 
        while (i >= 0 && j >= 0) { 
            int k = i + j + 1; 
            if( nums1[i] > nums2[j]  ){
                nums1[k] = nums1[i];
                i--;
            }else{
                nums1[k] =  nums2[j];
                j--;
            }
            //nums1[k] = nums1[i] > nums2[j] ? nums1[i--] : nums2[j--];
        } 
        if (i == -1) { 
            for (int k = 0; k <= j; ++k)
                nums1[k] = nums2[k];
        } 
        return ;
    }
};