class Solution {
public:
    int strStr(string haystack, string needle) {
        int s1 = haystack.length();
        int s2 = needle.length();

        if(s1<1||s2<1||s1<s2)return -1;
        if(haystack == needle) return 0;


        for(int i=0;i<=s1 - s2;++i)
        {
            if(haystack.substr(i,s2)==needle)return i;
        }
        return -1;
    }
};