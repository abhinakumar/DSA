class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int>vt;
        for(int i=0;i<n;i++){
            vt.push_back(nums[i]);
         vt.push_back(nums[i+n]);}
        return vt;
    }
};