class Solution {
public:
    bool isAnagram(string s, string t) {
        int ss = 0, st = 0;
        for(int i=0;s[i]!='\0' && t[i]!='\0';i++)
        {
            ss+=int(s[i]);
            st+=int(t[i]);
        }
        return ss == st;
    }
};
