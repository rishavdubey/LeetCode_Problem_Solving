class RandomizedSet {
public:
    unordered_map<int,int>ump;
    vector<int> v;
    RandomizedSet() {
        
    }
    
    bool insert(int val) {
        if(ump.find(val)!=ump.end()){
            return false;
        }
        ump[val]++;
        v.push_back(val);
        return true;
    }
    
    bool remove(int val) {
        if(ump.find(val)==ump.end()){
            return false;
        }
        ump.erase(val);
        v.erase(find(v.begin(),v.end(),val));
            
        return true;
        
    }
    
    int getRandom() {
        
        int random = rand() % (v.size());
        int ans = v[random];
        
        return ans;
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */