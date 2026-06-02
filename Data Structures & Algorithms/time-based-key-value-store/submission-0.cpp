class TimeMap {
public:
map<string,vector<pair<int,string>>>mp;
    TimeMap() {
        
    }
    
    void set(string key, string value, int timestamp) {
        mp[key].push_back({timestamp,value});

    }
    
    string get(string key, int timestamp) {

    auto &ans = mp[key];

    auto x = upper_bound(
        ans.begin(),
        ans.end(),
        make_pair(timestamp, string(127, '{'))
    );

    if(x == ans.begin())
        return "";

    --x;

    return x->second;
}
};
