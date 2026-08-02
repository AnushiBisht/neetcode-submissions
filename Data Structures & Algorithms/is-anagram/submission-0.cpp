class Solution {
public:
    bool isAnagram(string s, string t) {
        int n = s.length();
        int m = t.length();
        if(n!=m){
            return false;
        }

        unordered_map<char,int> mp1;
        unordered_map<char,int> mp2;

        for(char ch1: s){
            mp1[ch1]++;
        }

        for(char ch2: t){
            mp2[ch2]++;
        }

        return mp1 == mp2;
    }
};
