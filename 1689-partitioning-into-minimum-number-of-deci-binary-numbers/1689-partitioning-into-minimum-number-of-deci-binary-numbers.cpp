class Solution {
public:
    int minPartitions(string n) {
        int si=n.size();
        int ans=INT_MIN;
        for(int i=0;i<si;i++){

        ans=max(ans,n[i]-'0');
        }
        return ans;
    }
};