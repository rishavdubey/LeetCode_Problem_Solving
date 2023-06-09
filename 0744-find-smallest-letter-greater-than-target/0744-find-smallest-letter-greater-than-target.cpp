class Solution {
public:
    char binarySearch(vector<char>&arr,char target){
        char res=arr[0];
        int start=0,end=arr.size()-1;
        while(start<=end){
            int mid=(start+end)/2;
            if(arr[mid]>target){
                res=arr[mid];
                end=mid-1;
            }else{
                start=mid+1;
            }
        }
        return res;
        
    }
    char nextGreatestLetter(vector<char>& letters, char target) {
        return binarySearch(letters,target);
        
    }
};