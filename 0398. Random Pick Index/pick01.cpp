class Solution {
public:
    Solution(vector<int>& nums) {
        for ( int i=0; i < nums.size(); i++ ) {
            map[nums[i]].push_back(i);
        }
    }
    
    int pick(int target) {
        return map[target][rand() % map[target].size()];
    }
private: unordered_map<int,vector<int>> map;
};