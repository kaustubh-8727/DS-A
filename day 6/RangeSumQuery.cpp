class NumArray {
public:
    vector<int> v;
    NumArray(vector<int>& nums) {
        v.push_back(0);
        for(int i=0;i<nums.size();i++){
            v.push_back(v[i]+nums[i]);
        }
    }
    
    int sumRange(int l, int r) {
        return v[r+1]-v[l];
    }
};
