class MyCalendarThree {
public:
   map<int,int> mp; 
    MyCalendarThree() {
        
    }
    
    int book(int start, int end) {
        mp[start]++; 
        mp[end]--; 
        int res=0;
        int sum=0;
        for(auto& [time,diff] : mp){
            sum+=diff;
            res = std::max(res,sum);
        }
        
        return res;
    }
};

/**
 * Your MyCalendarThree object will be instantiated and called as such:
 * MyCalendarThree* obj = new MyCalendarThree();
 * int param_1 = obj->book(start,end);
 */