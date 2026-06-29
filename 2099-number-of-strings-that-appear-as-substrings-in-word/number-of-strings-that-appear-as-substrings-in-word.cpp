class Solution {
public:
    int numOfStrings(vector<string>& patterns, string word) {
        int n = word.size();
        unordered_set<string> mp;
        for(int i = 0 ;i< n ;i++){
            for(int j = i ; j< n ;j++){
                // cout << word[i][j] ;
                mp.insert(word.substr(i, j - i + 1));
            }
        }
        int cnt = 0 ;

        // for(auto ele :mp){
        //     cout <<ele << endl;
        // }

        for(auto  i = 0  ;i < patterns.size() ;i++){
            cout << patterns[i] ;
            if(mp.find(patterns[i]) != mp.end()){
                cnt++ ;
            }
        }

        return cnt ;
    }
};