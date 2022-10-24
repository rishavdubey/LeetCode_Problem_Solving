class Solution {
public:
    int maxi=0;
    
    bool is_unique(string &s){
        unordered_map<char,int>ump;
        for(auto it:s){
            ump[it]++;
            if(ump[it]>1) return false;
        }
        return true;
    }
    
    void helper(vector<string>&arr,int i,int n,string curr){
        if(is_unique(curr)==false){
            return;
        }
        if(i==n){
            if(curr.size()>maxi){
                maxi=curr.size();
            }
            return ;
        }
        
        helper(arr,i+1,n,curr+arr[i]);
        helper(arr,i+1,n,curr);
    }
    int maxLength(vector<string>& arr) {
        int n=arr.size();
        helper(arr,0,n,"");
        return maxi;
        
    }
};