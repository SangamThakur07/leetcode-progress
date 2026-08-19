class Solution {
public:
    int maxNumberOfBalloons(string text) {
        unordered_map<char,int> ballon;

        ballon['b'] = 0;
        ballon['a'] = 0;
        ballon['l'] = 0;
        ballon['o'] = 0;
        ballon['n'] = 0;

        for(int i = 0; i < text.length(); i++) {
            char ch = text[i];

            if(ballon.find(ch) != ballon.end()) {
                ballon[ch]++;
            }
        }

        int mini = INT_MAX;

        for(auto x : ballon) {
            if(x.first == 'l' || x.first == 'o') {
                x.second = x.second / 2;
            }

            if(x.second < mini) {
                mini = x.second;
            }
        }

        return mini;
    }
};