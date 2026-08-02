class Solution {
public:

    string encode(vector<string>& strs) {
        string encode = "";
        int n = strs.size();
        for(int i=0;i<n;i++){
            int m = strs[i].length();
            encode+= to_string(m)+"#"+strs[i];
        }

        return encode;
    }

    vector<string> decode(string s) {
        vector<string> decode;
        int i = 0;
        while(i<s.size()){
            int j = i;
            while(s[j]!='#') j++;

            int length = stoi(s.substr(i,j-i));

            string word = s.substr(j+1,length);
            decode.push_back(word);

            i = j+1+length;
        }

        return decode;
    }
};