class Solution {
    bool isOneDiff(string s1,string s2){
        int cnt=0;
        for(int i=0;i<s1.size();i++){
            if(s1[i]!=s2[i])
                cnt++;
        }
        return cnt==1;
    }
public:
    int minMutation(string start, string end, vector<string>& bank) {
        vector<int> adj[bank.size()+1];
        
        unordered_map<string,int>umpp;
        
        umpp[start]=0;
        for(int i=0;i<bank.size();i++){
            umpp[bank[i]]=i+1;
        }
        
        for(int i=0;i<bank.size();i++){
            if(isOneDiff(start,bank[i])){
                adj[umpp[start]].push_back(umpp[bank[i]]);
            }
        }
        
        for(int i=0;i<bank.size();i++){
            for(int j=0;j<bank.size();j++){
                if(isOneDiff(bank[i],bank[j]))
                    adj[umpp[bank[i]]].push_back(umpp[bank[j]]);
            }
        }
        
//         for(int i=0;i<bank.size()+1;i++){
//             cout<<i<<"->";
//             for(auto it:adj[i]){
//                 cout<<it<<" ";
//             }
//             cout<<endl;
//         }
        
        queue<int>q;
        vector<int>dist(bank.size()+1,INT_MAX);
        q.push(umpp[start]);
        dist[umpp[start]]=0;
        while(!q.empty()){
            int node = q.front();
            q.pop();
            for(auto it:adj[node]){
                if(dist[node] + 1 <dist[it]){
                    dist[it]= dist[node]+1;
                    q.push(it);
                }
            }
        }
        
        if(umpp.find(end)==umpp.end()){
            return -1;
        }
        
        if(dist[umpp[end]]==INT_MAX)
            return -1;
      
        
        
        return dist[umpp[end]];;
    }
};