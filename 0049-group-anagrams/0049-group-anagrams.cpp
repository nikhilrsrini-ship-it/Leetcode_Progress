class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> letters;

        for (string i : strs) {
            string key = i;
            sort(key.begin(), key.end());
            letters[key].push_back(i);
        }
        //now all are stored in the hashmap as arrays 
        //we need to create an explicit array to store those values
        vector<vector<string>>result;
        for(auto i : letters){
            result.push_back(i.second);
        }
        return result; 
    }
};