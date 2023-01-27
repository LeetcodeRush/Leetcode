#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool makeStringsEqual(string s, string target) {
    	bool has1_s = false, has1_target = false;
    	for (int i = 0; i < s.length(); i++)
    	{
    		if (s[i] == '1') has1_s = true;
    		if (target[i] == '1') has1_target = true;
    	}
    	return (s == target or (has1_s and has1_target));
    }
};

