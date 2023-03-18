class BrowserHistory {
private:
    vector<string>v;
    int idx=0;
public:
    BrowserHistory(string homepage) {
        v.push_back(homepage);
        idx=0;
    }
    
    void visit(string url) {
        v.resize(idx+1);
        v.push_back(url);
        idx++;
        
    }
    
    string back(int steps) {
       int prev_idx=max(0,idx-steps);
        idx=prev_idx;
        return v[idx];  
    }
    
    string forward(int steps) {
        int size=v.size();
        int next_idx= min(size-1,idx+steps);
        idx=next_idx;
        return v[idx];
    }
};

/**
 * Your BrowserHistory object will be instantiated and called as such:
 * BrowserHistory* obj = new BrowserHistory(homepage);
 * obj->visit(url);
 * string param_2 = obj->back(steps);
 * string param_3 = obj->forward(steps);
 */