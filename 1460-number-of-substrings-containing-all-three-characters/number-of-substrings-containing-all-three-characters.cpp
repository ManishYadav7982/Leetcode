class Solution {
public:
    int numberOfSubstrings(string s) {
        int n = s.size();
        unordered_map<char, int> mpp;

        int left = 0;
        int res = 0;

        for (int right = 0; right < n; right++) {
            mpp[s[right]]++;
            while (mpp['a'] > 0 && mpp['b'] > 0 && mpp['c'] > 0) {
                res += n - right;   
                mpp[s[left]]--;     
                left++;
            }
        }
        return res;
    }
};
