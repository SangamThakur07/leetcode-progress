class Solution {
public:
    bool fun(unordered_map<char,int>& have,
             unordered_map<char,int>& need) {

        for (auto i : need) {
            char ch = i.first;
            int fneed = i.second;
            int fhave = have[ch];

            if (fhave < fneed) {
                return false;
            }
        }

        return true;
    }

    bool canConstruct(string ransom, string magazine) {
        unordered_map<char,int> have;
        unordered_map<char,int> need;

        for (int i = 0; i < ransom.size(); i++) {
            need[ransom[i]]++;
        }

        for (int i = 0; i < magazine.size(); i++) {
            have[magazine[i]]++;
        }

        return fun(have, need);
    }
};