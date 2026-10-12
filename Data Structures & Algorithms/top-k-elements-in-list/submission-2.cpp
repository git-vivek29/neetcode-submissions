class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> count;
        for(const auto& num : nums){
            count[num]++;
        }
        vector<vector<int>> freq(nums.size()+1);
        for(auto& item: count){
            freq[item.second].push_back(item.first);
        }
        vector<int> res;
        for(int i = freq.size()-1 ; i > 0 ; i--){
            for(auto& item : freq[i]){
                res.push_back(item);
                if(res.size() == k){
                    return res;
                }
            }
        }
        return res;
    }
};
