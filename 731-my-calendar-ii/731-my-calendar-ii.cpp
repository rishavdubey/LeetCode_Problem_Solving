class MyCalendarTwo {
    map<int,int>m;
public:
    MyCalendarTwo() {
        
    }
    
    bool book(int start, int end) {
        m[start]++;
        m[end]--;
        int cnt=0;
        bool flag =true;
        for(auto it:m){
            cnt+=it.second;
            if(cnt>2){
                m[start]--;
                m[end]++;
                flag=false;
                break;
            }
        }
        return flag;
    }
};

/**
 * Your MyCalendarTwo object will be instantiated and called as such:
 * MyCalendarTwo* obj = new MyCalendarTwo();
 * bool param_1 = obj->book(start,end);
 */