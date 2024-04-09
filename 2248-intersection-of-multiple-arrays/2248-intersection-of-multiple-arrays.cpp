class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) {
    vector<int>ans;
    int frq[1001]{};
    int n = nums.size();
        for(auto &i : nums){
            for(auto &j : i){frq[j]++;
            }
        }
        for(int i = 0 ; i < 1001 ; i++){if(frq[i]==n)ans.push_back(i);}
        return ans;
    }
    
};