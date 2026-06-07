class Solution {
public:
    int fun(int idx,vector<int>& nums){
        if(idx==0)return nums[0];
        if(idx<0)return 0;
        int pick=nums[idx]+fun(idx-2,nums);
        int notPick=fun(idx-1,nums);

        return max(pick,notPick);

    }
    int rob(vector<int>& nums) {
        int n=nums.size()-1;
      return  fun(n,nums);
        
    }
};