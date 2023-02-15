class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        vector<int>v;
        int i=num.size()-1;
        int c=0;
        while(i>=0 and k>0){
            int temp=num[i]+k%10+c;
            c=temp/10;
            k=k/10;
            v.push_back(temp%10);
            i--;
        }
        while(i>=0){
            int temp=num[i]+c;
            c=temp/10;
            v.push_back(temp%10);
            i--;
        }
        while(k>0){
            int temp=k%10 + c;
            c=temp/10;
            v.push_back(temp%10);
            k=k/10;
        }
        if(c)
            v.push_back(c);
        reverse(v.begin(),v.end());
        return v;
    }
};