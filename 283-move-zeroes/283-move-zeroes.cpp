class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int>ans;
        int count=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]!=0)
            {
                ans.push_back(nums[i]);
            }
            else
            {
                count++;
            }
                
        }
        while(count--) ans.push_back(0);
        nums.clear();
        nums=ans;
        //return ans;
            
    }
};