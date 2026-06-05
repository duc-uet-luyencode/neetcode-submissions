class Solution {
public:
    bool isAnagram(string s, string t){
    unordered_map<char, int> seens;
    unordered_map<char, int> seent;
    if(s.size()!=t.size()){
        return false;
    }
    for(int i=0; i<s.size(); ++i){
        seens[s[i]]++;
        seent[t[i]]++;

    }
    if(seens==seent){
        return true;
    }
    return false;
    }
};    