class Solution {
public:
    
    void merge(vector<int>&nums,int low,int mid,int high){
        if(low>=high) return ;
        
        int l=low,r=mid+1;
        vector<int>v;
        while(l<=mid and r<=high){
            if(nums[l]<nums[r]){
                v.push_back(nums[l]);
                l++;
            }else{
                v.push_back(nums[r]);
                r++;
            }
        }
        while(l<=mid){
            v.push_back(nums[l]);
            l++;
        }
        while(r<=high){
            v.push_back(nums[r]);
            r++;
        }
        
        for(int i=low,j=0;i<=high;i++,j++){
            nums[i]=v[j];
        }
        
    }
    
    void mergeSort(vector<int>&num, int low,int high){
        if(low>= high) return;
        int mid=(low+high)/2;
        mergeSort(num,low,mid);
        mergeSort(num,mid+1,high);
        merge(num,low,mid,high);
    }
    
    vector<int> sortArray(vector<int>& nums) {
        mergeSort(nums,0,nums.size()-1);
        return nums;
        
        
    }
};