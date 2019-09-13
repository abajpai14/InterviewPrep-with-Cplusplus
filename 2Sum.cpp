vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> res;
        if(nums.size() <=1)
            return res;
        map<int,int>mp;
        for (int i =0; i <nums.size();i++)
        {
            int compliment = target - nums[i];
            if(!mp.empty() && mp.find(compliment)!=mp.end())
            {
                res.push_back(mp.find(compliment)->second);
                 res.push_back(i);
            }
            mp.insert(pair<int,int>(nums[i],i));
        }
        
        return res;
    }
