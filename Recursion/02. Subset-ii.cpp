class Solution {
public:

    void subsets(int index, vector<int>&nums, vector<int>&ds, vector<vector<int>>&ans)
    {
        ans.push_back(ds);
        for(int i= index; i<nums.size(); i++)
        {
            if(i!=index and nums[i]==nums[i-1]) continue;

            ds.push_back(nums[i]);
            subsets(i+1,nums,ds,ans);
            ds.pop_back();
        }
    }



    vector<vector<int>> subsetsWithDup(vector<int>& nums) 
    {
        vector<vector<int>>ans;
        vector<int>ds;
        sort(nums.begin(), nums.end());
        subsets(0,nums,ds,ans);

        return ans;
    }
};


Time Complexity: 0 ((2^n)*k)
Space Complexity: 0 (2^n*k)
