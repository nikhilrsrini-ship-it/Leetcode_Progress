class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int>record;
        int sum = 0 ;
        for (const auto& op : operations){
            if(op == "C"){
                record.pop_back();
            }
            else if(op=="D"){
                record.push_back(record.back() * 2);
            }
            else if(op=="+"){
                record.push_back(record[record.size() - 1] + record[record.size() - 2]);
            }
            else{
                record.push_back(stoi(op));
            }
        }
        for(int i = 0 ; i<record.size();i++){
            sum+=record[i];
        }
        return sum;
    }
};