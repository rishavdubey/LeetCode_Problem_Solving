class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int>res;
        int n=nums.size();
        int majority=n/3 +1;
        
        int ele1=INT_MIN,ele2=INT_MIN,cnt1=0,cnt2=0;
        
        for(auto &it:nums){
            if(cnt1==0 && ele2!=it){
                ele1=it;
                cnt1=1;
            }else if(cnt2==0 && ele1!=it){
                ele2=it;
                cnt2=1;
            }else if(ele1==it){
                cnt1++;
            }else if(ele2==it){
                cnt2++;
            }else{
                cnt1--,cnt2--;
            }
        }
        
        cnt1=0,cnt2=0;
        for(auto &it:nums){
            if(ele1==it) cnt1++;
            if(ele2==it) cnt2++;
        }
        if(cnt1>=majority) res.push_back(ele1);
        if(cnt2>=majority) res.push_back(ele2);

        return res;
        
    }
};