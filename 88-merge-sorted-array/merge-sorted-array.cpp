class Solution {
public:
    void solve(vector<int>& nums1, int m,vector<int>& nums2, int n, int i, int j  , int M)
    {  
            
            if (n==0)
            {
                return;
                
            }
            if (m==0)
            {
                for (int kk=M; kk>=0;kk--)
                {
                    nums1[kk]=nums2[j--];
                }
            }
            else if ( nums1[i]<nums2[j] ) 
            {
                nums1[M]= nums2[j];
                solve (nums1, m, nums2, n-1,i , j-1,M-1);
            }
            else if(nums1[i]>=nums2[j])
            {
               int tmp = nums1[i];
               nums1[i]=nums1[M];
               nums1[M]=tmp;
               
               solve (nums1, m-1, nums2, n,i-1 , j,M-1);
            }
            } 

    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int M=m+n-1;
            solve(nums1, m, nums2, n, m-1, n-1, M);
        
    }
};