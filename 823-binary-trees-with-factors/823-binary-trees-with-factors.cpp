class Solution {
public:
    int numFactoredBinaryTrees(vector<int>& arr) {
      int mod = 1e9 + 7; 
        sort(arr.begin(),arr.end());
        vector<int> dp(arr.size(),1);
        int ans = 0;
        
        for(int i=0;i<arr.size();i++){
            for(int j=0,k=i-1;j<i && k>=0;){
                if(arr[j]>(mod/arr[k])) k--; 
                else if(arr[j]*arr[k]==arr[i]){
                    dp[i] = (dp[i] + ((long)dp[j]*dp[k]) % mod) % mod;
                    j++;
                    k--;
                }
                else if(arr[j]*arr[k]<arr[i]) j++;
                else k--;
            }
        }
        
        for(int i=0;i<dp.size();i++)
            ans = (ans + dp[i]) % mod;
        return ans;
    }
};