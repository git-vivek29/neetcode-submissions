class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> count(nums.begin(), nums.end());
        int longest = 0;
        for(auto& n :  count){
            if(count.find(n-1) == count.end()){
                int len = 1;
                while(count.find(n + len) != count.end()){
                    len++;
                }
                longest = max(longest,len);
            }
        }
        return longest;
    }
};
