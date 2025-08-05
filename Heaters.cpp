class Solution {
public:
    int findRadius(vector<int>& houses, vector<int>& heaters) {
        sort(houses.begin(), houses.end());
        sort(heaters.begin(), heaters.end());

        int i=0, j=0, radius=0;
        while(i<houses.size()){
            while(j+1< heaters.size() && abs(heaters[j+1]- houses[i])<=abs(heaters[j]-houses[i])){
                j++;


            }
            int dist= abs(heaters[j]-houses[i]);
            radius= max(radius, dist);
            i++;
        }
        return radius;

        
    }
};