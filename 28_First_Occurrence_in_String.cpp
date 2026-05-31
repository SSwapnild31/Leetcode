class Solution {
public:
    int strStr(string haystack, string needle) {

        int m = haystack.size();
        int n = needle.size();

        if(n > m) return -1;

        for(int i=0; i<m; i++){
            if(needle[0] == haystack[i]){
                int j = 1;
                for(j=1; j<n; j++){
                    if(haystack[i+j] != needle[j]) break;
                }
                if(needle[j] == '\0') return i;
            }
        }
        return -1;
    }
};
