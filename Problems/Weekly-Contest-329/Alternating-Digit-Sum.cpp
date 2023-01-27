#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int alternateDigitSum(int n) {
    	std::string s = to_string(n);
    	int sum = 0;
    	int sign = 1;
    	for (int i = 0 ; i < s.length(); i++)
    	{
    		sum += sign * (s[i] - '0');
    		sign *= -1;
    	}
    	return sum;
    }
};