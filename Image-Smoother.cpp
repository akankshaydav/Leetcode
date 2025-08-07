class Solution {
public:
    vector<vector<int>> imageSmoother(vector<vector<int>>& img) {
        int m= img.size();
        int n= img[0].size();
        vector<vector<int>> result(m, vector<int>(n));
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                int sum= 0;
                int count= 0;
                for(int l= max(0, i-1); l<min(m, i+2); l++){
                    for(int k= max(0, j-1); k< min(n, j+2); k++){
                        sum+= img[l][k];
                        count+= 1;
                    }
                }
                result[i][j]= sum/count;
        }
        }
        return result;
    
    }
};