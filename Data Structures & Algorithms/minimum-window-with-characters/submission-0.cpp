class Solution {
public:
    string minWindow(string s, string t) {
        int n = s.size();
        int m = t.size();

        vector<int> store(52);

        for(int i = 0; i < m; i++){
            if(t[i] >= 'a' && t[i] <= 'z'){
                store[t[i] - 'a' + 26]++;
            }
            else{
                store[t[i] - 'A']++;
            }
        }

        int mini = 1e9;
        int start = -1;
        int cnt = 0;

        int i = 0, j = 0;

        while(j < n){

            while(j < n && cnt != m){

                if(s[j] >= 'a' && s[j] <= 'z'){

                    if(store[s[j] - 'a' + 26] > 0){
                        cnt++;
                    }

                    store[s[j] - 'a' + 26]--;
                }
                else{

                    if(store[s[j] - 'A'] > 0){
                        cnt++;
                    }

                    store[s[j] - 'A']--;
                }

                j++;
            }

            j--;

            if(cnt == m){
                if(j - i + 1 < mini){
                    mini = j - i + 1;
                    start = i;
                }
            }

            while(i < n && cnt == m){

                if(s[i] >= 'a' && s[i] <= 'z'){

                    store[s[i] - 'a' + 26]++;

                    if(store[s[i] - 'a' + 26] > 0){
                        cnt--;
                    }

                }
                else{

                    store[s[i] - 'A']++;

                    if(store[s[i] - 'A'] > 0){
                        cnt--;
                    }
                }

                if(cnt == m){
                    if(mini > j - i){
                        mini = j - i;
                        start = i + 1;
                    }
                }

                i++;
            }

            j++;
        }

        if(start == -1) return "";

        string st;

        for(int i = start; i < start + mini; i++){
            st.push_back(s[i]);
        }

        return st;
    }
};