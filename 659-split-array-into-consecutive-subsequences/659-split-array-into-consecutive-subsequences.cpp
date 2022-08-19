class Solution {
public:
        bool isPossible(vector<int>& nums) {
        
        unordered_map<int,int> freq;
        for(int x: nums) freq[x]++;
        
         unordered_map<int,int> need;
        
        for(int n: nums){
             if(freq[n] == 0) continue;
            
            if(need[n] > 0){ // "n" can be a part of some existing subseq.
                need[n]--;
                freq[n]--;
                
                need[n+1]++; //next req. num is now "N+1"
            }
            
            //try creating a new sub. of length atleast three
            else if(freq[n]>0 && freq[n+1]>0 && freq[n+2]>0){
                freq[n]--;
                freq[n+1]--;
                freq[n+2]--;
                need[n+3]++;
            }
            else{
                return false;
            }
        }
        
        return true; 
    }
};