class Solution {
public:
    int appendCharacters(string s, string t) {

        map<int, queue<int>> mp;

        for (int i = 0; i < s.size(); i++) {
            mp[s[i] - 'a'].push(i);
        }

        int pre = -1;

        for (int i = 0; i < t.size(); i++) {

            int y = t[i] - 'a';

            while (!mp[y].empty() && mp[y].front() <= pre) {
                mp[y].pop();
            }

            if (mp[y].empty()) {
                return t.size() - i;
            }

            pre = mp[y].front();
            mp[y].pop();
        }

        return 0;
    }
};