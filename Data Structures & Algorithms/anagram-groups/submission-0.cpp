class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> groupMap;
        for( const auto& s: strs){
            string sortedS = s;
            sort(sortedS.begin(),sortedS.end());
            groupMap[sortedS].push_back(s);
        }
        vector<vector<string>> result;
        for( auto& item : groupMap){
            result.push_back(item.second);
        }
        return result;
    }
};
