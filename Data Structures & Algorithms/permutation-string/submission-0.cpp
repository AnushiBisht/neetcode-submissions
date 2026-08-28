class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.length()>s2.length()) return false;
        unordered_map<char,int>mp;
        for(char ch: s1){
            mp[ch]++;
        }

        int l=0;
        for(int r=0;r<s2.length();r++){
            if(r-l+1 > s1.length()){
                l++;
            }

            if(r-l+1 == s1.length()){
                string window = s2.substr(l,r-l+1);
                if(checkPermutation(mp,window)){
                    return true;
                }
            }
        }
        return false;
    }

    bool checkPermutation(unordered_map<char,int>ch, string s){
        for(char c: s){
            ch[c]--;
            if(ch[c]<0){
                return false;
            }
        }

        for(auto pair: ch){
            if(pair.second!=0){
                return false;
            }
        }

        return true;
    }
};
