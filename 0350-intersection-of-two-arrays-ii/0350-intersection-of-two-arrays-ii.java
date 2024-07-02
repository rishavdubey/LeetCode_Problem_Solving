class Solution {
    public int[] intersect(int[] nums1, int[] nums2) {
        int n1=nums1.length, n2=nums2.length;
        if(n1==0 && n2==1){
            if(nums1[0]==nums2[0]){
                return new int[]{nums1[0]};
            }else{
                return new int[]{};
            }
        }
        Arrays.sort(nums1);
        Arrays.sort(nums2);
        
        List<Integer> ls=new ArrayList<>();
        int i=0,j=0;
        while(i<n1 && j<n2){
            if(nums1[i]<nums2[j]){
                i++;
            }else if(nums1[i]>nums2[j]){
                j++;
            }else{
                ls.add(nums1[i]);
                i++;j++;
                
            }
        }

        int[] result = new int[ls.size()];
        for(int c=0;c<ls.size();c++){
            result[c]=ls.get(c);
        }
        return result;

    }
}