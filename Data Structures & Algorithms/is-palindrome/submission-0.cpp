class Solution {
public:
    bool isPalindrome(string s) {
        string org="";
        for(int i=0;i<s.length();i++)
        {
        if(isalnum(s[i]))
        {
            org=org+char(tolower(s[i]));
        }
        }
        string rev=org;
        reverse(rev.begin(),rev.end());
        if(org==rev)
        {
            return true;
        }
        return false;
    }
};
