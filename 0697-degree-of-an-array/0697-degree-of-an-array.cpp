class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        int n = (int)nums.size();
        int frq[50000] {};
        int mx = 0;
        for(int i = 0 ; i < n ; i++)frq[nums[i]]++ , mx = max(mx , frq[nums[i]]);
        vector<pair<int,int>>vec(50000 ,{-1,0});
        int mx_len = 1e9;
        for(int i = 0 ; i < n; i++){
            if(frq[nums[i]] == mx){
                if(vec[nums[i]].first == -1){
                    vec[nums[i]].first = i;
                } else {
                    vec[nums[i]].second = i;
                }
            }
        }
        for(int i = 0 ; i < n ; i++) {
            if(frq[nums[i]] == mx){
                mx_len = min(mx_len,    abs(vec[nums[i]].first - vec[nums[i]].second)+ 1);
            }
        }
        return mx_len != 1e9 ? mx_len : 1;
    }
};