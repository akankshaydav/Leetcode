class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        int n= image.size();
        for(int i=0; i<n; i++){
            int l=0;
            int r= image[0].size()-1;
            while(l<=r){
                if(l==r){image[i][l]^=1;}
                else{
                swap(image[i][l],image[i][r]);
                image[i][l]^=1;
                image[i][r]^=1;
               
                }
                l++;
                r--;
                
            }
        }
        return image;
        
    }
};