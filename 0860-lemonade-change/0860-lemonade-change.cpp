class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int cost = 5;
        unordered_map<int, int> checkList;
        checkList[5] = 0;
        checkList[10] = 0;
        checkList[20] = 0;

        for (int i = 0; i < bills.size(); i++) {
            int balance = bills[i] - cost;

            if (balance == 0) {
                checkList[5]++;
            } else if (balance == 5) {
                if (checkList[5] > 0) {
                    checkList[5]--;
                    checkList[10]++;
                } else {
                    return false;
                }
            } else { // balance == 15 (customer paid with a $20 bill)
                if (checkList[10] > 0 && checkList[5] > 0) {
                    checkList[10]--;
                    checkList[5]--;
                    checkList[20]++;
                } else if (checkList[5] >= 3) {
                    checkList[5] -= 3;
                    checkList[20]++;
                } else {
                    return false;
                }
            }
        }

        return true;
    }
};