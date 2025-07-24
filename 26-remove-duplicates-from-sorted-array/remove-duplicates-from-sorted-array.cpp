class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        //{0,0,1,1,1,2,2,3,3,4}
        // two pointer technique
       int  n=nums.size();
        int i =0,j=1;
        while(j<n){

    if(nums[i]==nums[j]){
        j++;
    }
    else{
        i++;
        nums[i]=nums[j];
    }
    
        }
        return i+1;
     
    }
};