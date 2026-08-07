class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int i = 0;
        int j = n-1;
        int mx = 0;
        while(i<j){
            int w = j-i;
            int crmx = w*min(height[i],height[j]);
            mx = max(mx,crmx);
            if(height[i]<height[j]){
             i++;
            }
            else{
                j--;
            }
            
        }
        return mx;
        
    }
};