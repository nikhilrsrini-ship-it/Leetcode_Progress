
class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        
        vector<int>answer ;
        if(p.size() > s.size()) return answer ;
        vector<int>count1(26,0);
        vector<int>count2(26,0);
        for(int i = 0 ; i<p.size() ; i++){
            count1[p[i] - 'a']++;
            count2[s[i] - 'a']++ ;
        }
        if(count1 == count2) answer.push_back(0) ;

        for(int right = p.size() ; right<s.size();right++){
            count2[s[right]-'a']++;
            count2[s[right - p.size()] - 'a']--;
            if(count1 == count2){
                answer.push_back(right-p.size()+1);
            }
        }
        return answer ;
    }
};