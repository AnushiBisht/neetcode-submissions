class Solution {
public:
    bool isPalindrome(string s) {
        int left = 0;
        int right = s.length()-1;
        while(left<right){
            if(!isAlphaNum(s[left])){
                left++;
                continue;
            }

            if(!isAlphaNum(s[right])){
                right--;
                continue;
            }

            if(tolower(s[left])!=tolower(s[right])) return false;

            left++;
            right--;
        }
        return true;
    }

    bool isAlphaNum(char ch){
        return(ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z' || ch >= '0' && ch <= '9');
    }
};
