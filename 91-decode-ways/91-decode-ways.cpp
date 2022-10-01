class Solution {
public:
    vector<int> dp;
    
    int numDecodings(string s){
        dp.resize(s.size(),-1);
        int ans=0;
        ans = helper(s,0);
        return ans;
    }
    int helper(string &s,int i) {
        if(s.size()==i){
            return 1;
        }
        if(s[i]=='0'){
            return 0;
        }
        if(dp[i]!=-1){
            return dp[i];
        }
        if(i<s.size()-1){
            if(s[i]=='1' || (s[i]=='2' && s[i+1]<'7' )){
                return dp[i]=helper(s,i+1)+helper(s,i+2);
            }
        }
        return dp[i]=helper(s,i+1);
    }
};