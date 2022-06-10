class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
     int count=0;
     int i=0;
        int j=i+1;
     while(j<=nums.size()-1)
     {
         if(nums[i]==nums[j])
         {
             j++;
           
         }
         else
         {
            i++;
            nums[i]=nums[j];
             j++;
             count++;
               
         }
     }
       
        return count+1;
    
    }
};