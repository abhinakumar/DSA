class Solution {
public:
    string reverseWords(string s) {
         int first = 0;
        for(int i=0; i<=s.size(); i++)
        {
            if(i == s.size() || s[i] == ' ')
            {
                reverse(&s[first], &s[i]);
                first = i+1;
            }
        }
        return s; 
    }
};