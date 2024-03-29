class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int j=0;
        int minl=INT_MAX;
        int ps=0;
        for(int i=0;i<nums.size();i++)
        {
            ps+=nums[i];
            while(ps>=target)
            {
                minl=min(minl,i-j+1);
                ps=ps-nums[j];
                j++;
            }
            
        }
        return (minl==INT_MAX)?0:minl;
    }
};