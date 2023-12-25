class Solution {
public:
    string longestPalindrome(string s) {
        int n = (int)s.size() , mx = 0;
        string ans , mxs;

        for(int i = 0 ; i < n ; i++){
            int rt = i+1 , lt = i-1;
            int cnt = 1;
            for(int flag = 0 ; flag < 2 ; flag++){
                mxs+=s[i];
                if (flag) {
                    rt = i+1 , lt = i-1;
                    if (lt >= 0 && s[lt] == s[i])
                        mxs += s[lt], lt--;
                    else if (rt  < n && s[rt] == s[i])
                        mxs += s[rt], rt++;
                }
                if (rt < n && lt >= 0 && s[rt] == s[lt]) {
                    while (rt < n && ~lt) {
                        if (s[lt] == s[rt]) {
                            cnt += 2;
                            mxs.push_back(s[rt]);
                            mxs = s[lt] + mxs;
                        } else
                            break;
                        rt++, lt--;
                    }
                }
                if (mx < mxs.size()) {
                    mx = mxs.size();
                    ans = mxs;
                }
                mxs.clear();
            }
        }
        return ans;
    }
};