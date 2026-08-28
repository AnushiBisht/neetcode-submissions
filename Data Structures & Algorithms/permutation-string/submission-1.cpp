class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.length()>s2.length()) return false;
        unordered_map<char,int>ch1;
        for(char ch: s1){
            ch1[ch]++;
        }

        unordered_map<char,int>ch2;
        int l = 0;
        for(int r=0;r<s2.length();r++){
            ch2[s2[r]]++;
            if(r-l+1 > s1.length()){
                ch2[s2[l]]--;
                if(ch2[s2[l]] == 0) {
                    ch2.erase(s2[l]);
                }
                l++;
            }

            if(r-l+1 == s1.length()){
                if(ch1 == ch2) return true;
            }
        }

        return false;
    }
};
