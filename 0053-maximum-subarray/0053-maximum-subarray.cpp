class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int mxx = *max_element(nums.begin(),nums.end());
        if(mxx <= 0){
            return mxx;
        }
        int sum = 0 , mx = -2e9;
        for(int i = 0 ; i < n ; i++){
            sum = nums[i];
            while(sum>=0){
                mx = max(mx,sum);
                i++;
                if(i==n)
                    break;
                sum+=nums[i];
            }
        }
        mx = max(mx,sum);
        return mx;
    }
};