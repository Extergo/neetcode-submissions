#include <unordered_map>

class Solution {
public:

    bool isAnagram(string s, string t) {

        if (s.length() != t.length()) {
            return false;
        }

        unordered_map<char , int> locker1;
        unordered_map<char , int> locker2;

        for (int i = 0; i < s.length(); i++) {
            //char c = s[i];
            locker1[s[i]]++;

            //char d = t[i];
            locker2[t[i]]++;
        }

        return (locker1 == locker2);
    }
};
