class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        vector<string> chk;

        
        for(int i = 0; i < strs.size(); i++) {
            string sor = strs[i];
            sort(sor.begin(), sor.end());
            chk.push_back(sor);
        }

        vector<bool> visited(strs.size(), false);

        for(int i = 0; i < strs.size(); i++) {

            if(visited[i])
                continue;

            vector<string> temp;
            temp.push_back(strs[i]);
            visited[i] = true;

            for(int j = i + 1; j < strs.size(); j++) {

                if(!visited[j] && chk[i] == chk[j]) {
                    temp.push_back(strs[j]);
                    visited[j] = true;
                }
            }

            ans.push_back(temp);
        }

        return ans;
    }
};