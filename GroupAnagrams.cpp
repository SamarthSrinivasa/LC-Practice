//First Solution

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> map1; //creating the map
        for (string s: strs) { //looping through the vector strs
            string t = s;
            sort(t.begin(), t.end()); //creating the key type
            map1[t].push_back(s);
        }
        vector<vector<string>> passing;
        for (auto p : map1) {
            passing.push_back(p.second);
        }
        return passing;
    }
};

//Success
//Details 
//Runtime: 41 ms, faster than 83.87% of C++ online submissions for Group Anagrams.
//Memory Usage: 20.7 MB, less than 39.97% of C++ online submissions for Group Anagrams.
