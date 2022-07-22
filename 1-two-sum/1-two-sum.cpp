class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
          vector<int> vect;  
  
        for(int i=0;i<nums.size();i++)
            for(int j=i+1;j<nums.size();j++)
                if(nums[j]==target-nums[i]){
                    //cout<<"["<<i<<", "<<j<<"]"<<"\n";
                       
    vect.push_back(i); 
    vect.push_back(j); 
                }
        return vect; 
    }
};