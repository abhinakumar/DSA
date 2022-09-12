class Solution {
public:
    int bagOfTokensScore(vector<int>& arr, int power) {
          int n = arr.size(); // extract size of array
        
        int score = 0; // intially we have score zero
        
        sort(arr.begin(), arr.end()); // sort the array
        
        int i = 0, j = n - 1; // put two pointers on first and last
        while(i < j) 
        {
            if(power >= arr[i]) // if we have available power to increase score, use it
            {
                power -= arr[i++];
                score++;
            }   
			                                                // for power to be gain, we should have at least one score
            else if(score >= 1 && power + arr[j] >= arr[i])
                {
                power += arr[j--];
                score--;
            }
            else break; // because we already know that array is sorted,
			//so further values wil be definately in increasing order
        }
        
        while(i < j + 1 && power >= arr[i]) // when gap remains, then for that
        {
            power -= arr[i++];
            score++;
        }
        
        return score;   
    }
};
