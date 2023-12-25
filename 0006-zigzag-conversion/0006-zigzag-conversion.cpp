class Solution {
public:
    string convert(string s, int numRows) {
        bool flag = 1;
        string rs[numRows];
        int row = 0 , cnt = 0;
        for(int i = 0 ; i < s.size() ; i++){
            if(flag){
                rs[row].push_back(s[i]);
            }else{
                rs[row].push_back(s[i]);
            }
            cnt++;
            if((cnt)%numRows == 0){
                flag = 1 - flag;
                cnt=1;
            }
           if(numRows > 1)
             row -= flag? -1 : 1;
        }
        string ans ;
        for(const string k : rs)ans+=k;
        return ans;
    }
};