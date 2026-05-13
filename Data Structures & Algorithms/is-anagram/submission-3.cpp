class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()) return false;
        int check[26] = {0};
        for(char c:s) check[c - 'a']++;
        for(char c:t) check[c - 't']--;
        for(int x : check)
        {   
            if(x!=0) return false;
        }
        return true;
    }
};
