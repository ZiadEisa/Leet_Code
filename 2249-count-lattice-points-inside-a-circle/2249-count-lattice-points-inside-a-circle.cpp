
class Solution {
public:
    int countLatticePoints(vector<vector<int>>& circles) {
        int LatticePoints = 0;
            
            for(int j = 0 ; j < 201 ; j++){
                for(int k = 0 ; k < 201 ;k++){
                    for(auto &i : circles){
                    long long xx = (j-i[0]);
                    long long yy = (k-i[1]);
                    if((xx*xx)+(yy*yy) <= (i[2]*i[2])){
                        LatticePoints++;
                        break;
                    }
                }
            }
        }
        return LatticePoints;
    }
};