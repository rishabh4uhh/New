class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length())
           x return false;
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        sort(s.begin(), s.end());
        transform(t.begin(), t.end(), t.begin(), ::tolower);
        sort(t.begin(), t.end());
        
        
        if(s==t)
           {return true;}
        else
           return false;
    }
};t
