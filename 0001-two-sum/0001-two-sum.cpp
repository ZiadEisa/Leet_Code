class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        int n = nums.size();
        for(int i = 0 ;  i< n ; i++){
            auto j = find(nums.begin() , nums.end() , target-nums[i]);
            if(j != nums.end()){
                size_t pos = distance(nums.begin() , j);
                if(pos != i){
                    vector<int> ans = {i,(int)(pos)};
                    return ans;
                }
            }
        }

        return {};
    }
};