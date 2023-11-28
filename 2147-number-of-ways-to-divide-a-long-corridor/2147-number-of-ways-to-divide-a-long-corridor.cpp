class Solution {
public:
    int numberOfWays(string corridor) {
         int chairs = 0, gap = 0;
    vector<int> gaps;
    for (char ch : corridor) {
        if (ch == 'S' && ++chairs % 2)
            gaps.push_back(gap);
        gap = ch == 'P' && chairs % 2 == 0 ? gap + 1 : 0;
    }
    return chairs == 0 || chairs % 2 ? 0 : 
        accumulate(begin(gaps) + 1, end(gaps), 1LL, [](long long res, int gap){ return res * (gap + 1) % 1000000007; });

        
    }
};