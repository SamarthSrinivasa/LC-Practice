//First Solution

class Solution {
public:
    bool isAnagram(string s, string t) {
        
        if (s.size() != t.size()) { 
            return false;
        }
        
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        
        for (int i = 0; i < s.size(); i++) {
            if (s.at(i) != t.at(i)) {
                return false;
            }
        }
        
        return true; 
    }
};

//Success
//Details 
//Runtime: 27 ms, faster than 12.55% of C++ online submissions for Valid Anagram.
//Memory Usage: 7.3 MB, less than 45.59% of C++ online submissions for Valid Anagram.
