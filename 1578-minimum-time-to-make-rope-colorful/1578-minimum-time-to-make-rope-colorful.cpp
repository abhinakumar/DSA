class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
    int e = colors.size()-1;
    unsigned long long fin = 0,f;
    int i,s;
    for(i=0;i<e;++i){
        if(colors[i]==colors[i+1]){
            f = neededTime[i]+neededTime[i+1];
            s=max(neededTime[i],neededTime[i+1]);
            i+=2;
            while(i<=e and colors[i-1]==colors[i]){
                f+=neededTime[i];
                s = max(s,neededTime[i]);
                ++i;
            }
            --i;
            fin = fin + f - s;
        }
    }
    return fin;
}
    
};