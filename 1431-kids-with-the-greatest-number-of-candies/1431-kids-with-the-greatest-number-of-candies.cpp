class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        // vector<bool> bo;
        // int max1=0;
        // for(auto i:candies)
        //     max1=max(max1,candies[i]);
        // for(int i=0;i<candies.size();i++)
        // {
        //     if((candies[i]+extraCandies)>=max1)
        //        bo.push_back(1);
        //    else
        //         bo.push_back(0);
        // }
        // return bo;
        vector<bool> out;
        int max = *max_element(candies.begin(), candies.end());
        
        for(int i=0; i < candies.size(); i++){
            if(candies[i]+extraCandies >= max)
                out.push_back(true);
            else
                out.push_back(false);
        }
        
        return out;
    }
};
/*vector<bool> out;
        int max = *max_element(candies.begin(), candies.end());
        
        for(int i=0; i < candies.size(); i++){
            if(candies[i]+extraCandies >= max)
                out.push_back(true);
            else
                out.push_back(false);
        }
        
        return out;*/