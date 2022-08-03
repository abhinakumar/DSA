class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n=matrix.size();
       int sr=0;
    int sc=0;
    int er=n-1;
    int ec=n-1;
    
    while (sr<er && sc<ec)
    {
        for(int i=1; i<n;i++)
        {
            int temp1=matrix[sr][sc];
            int temp2;
            for(int j=sc ; j<ec ; j++)
            {
                temp2=matrix[sr][j+1];
                matrix[sr][j+1]=temp1;
                temp1=temp2;
            }
            for(int j=sr;j<er;j++)
            {
                temp2=matrix[j+1][ec];
                matrix[j+1][ec]=temp1;
                temp1=temp2;
            }
            for(int j=ec;j>sc ; j--)
            {
                temp2=matrix[er][j-1];
                matrix[er][j-1]=temp1;
                temp1=temp2;
            }
            for(int j=er ; j>sr ;j--)
            {
                temp2=matrix[j-1][sc];
                matrix[j-1][sc]=temp1;
                temp1=temp2;
            }
            
        }
        sr++;
        sc++;
        er--;
        ec--;
        n-=2;
    }}
};