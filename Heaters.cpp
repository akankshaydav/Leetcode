class Solution {
public:
    int findRadius(vector<int>& houses, vector<int>& heaters) {
        int radius=0;
        for (int i=0; i<houses.size(); i++){
            int minDist= INT_MAX;
            for(int j=0; j<heaters.size(); j++){
                int dist= abs(houses[i]- heaters[j]);
                minDist = min(dist, minDist);
            }
            radius= max(radius, minDist);
        }
        return radius;
        
    }
};