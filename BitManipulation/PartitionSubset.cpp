class solution {
      public : bool canPartition(vector<int> &nums){
            int total = accumulate(nums.begin() , nums.end() , 0);
            if(total % 2 != 0) return false; 
            int target = total / 2;
            vector<bool> v(target + 1 , false);
            v[0] = true;
            for(int num : nums){
                  for(int i = target; i >= num; j--)
                        v[i] = v[i] || v[i - num];
            }
            return v[target];
      }
}