class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
      auto low=lower_bound(arr.begin(),arr.end(),x);
    int r=low-arr.begin(),n=arr.size();
int l=r-1;
    priority_queue<int,vector<int>,greater<int>>q;
    while(l>-1 and r<n and k>0){
        if(abs(arr[l]-x)<=abs(arr[r]-x))
            q.push(arr[l--]);
        else
            q.push(arr[r++]);
        k--;
    }
while(k>0 and l>-1)
        q.push(arr[l--]),k--;
    while(k>0 and r<n)
        q.push(arr[r++]),k--;
    vector<int>ans;
    while(!q.empty()){
        ans.push_back(q.top());
        q.pop();
    }
    return ans;
    }
};