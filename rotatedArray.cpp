void rotate(vector<int>& nums, int k) {
        int n =nums.size();
        int d=k;
        if(k>n)
         d=(k%n);
        reverse(nums.end()-d,nums.end()); 
        reverse(nums.begin(),nums.end()-d);
        reverse(nums.begin(),nums.end());
    }
