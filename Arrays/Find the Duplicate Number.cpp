class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n=nums.size();
       vector<int> a;
        int i=0;
         while(i!=n)
        {
            a.push_back(0);
            i++;
        }
        i=0;
        while(i!=n)
        {
            a[nums[i]]++;
            i++;
        }
        i=0;
        while(i!=n)
        {
           if(a[i]>1) 
           {
               return i;
           }
            i++;
        }
      return -1;
    }
   
};