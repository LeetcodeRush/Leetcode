class Solution {
public:
    int minimumSum(int num) {
        vector<int> v {};
        while(num){
            v.push_back(num % 10);
            num /= 10;
        }

        sort(v.begin(), v.end());
        
        vector<int> a(2, 0);
        for (int i = 0; i < v.size(); i++)
        {
            a[i % 2] = a[i % 2] * 10 + v[i];
        }
        return a[0] + a[1];
    }
};