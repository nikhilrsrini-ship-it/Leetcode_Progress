
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        unordered_map<int, int> hashmap;

        for (int i = 0; i < numbers.size(); i++) {
            int needed = target - numbers[i];

            if (hashmap.find(needed) != hashmap.end()) {
                return {hashmap[needed]+1, i+1};
            }

            hashmap[numbers[i]] = i;
        }

        return {};
    }
};
