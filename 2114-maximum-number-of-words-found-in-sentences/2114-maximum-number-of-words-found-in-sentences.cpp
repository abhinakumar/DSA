class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int maxWords=0;
        for(int i=0; i<sentences.size(); i++) {
            stringstream ss(sentences[i]);
            int count=0;
            string word;
            while(ss>>word)
                count++;
            if(count>maxWords)
                maxWords=count;
        }
        return maxWords;
    }
};