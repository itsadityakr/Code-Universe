// https://leetcode.com/problems/sort-characters-by-frequency/

class Solution
{
public:
    string frequencySort(string s)
    {
        unordered_map<char, int> freqMap;

        for (char c : s)
        {
            freqMap[c]++;
        }

        vector<pair<char, int>> freqVec(freqMap.begin(), freqMap.end());

        sort(freqVec.begin(), freqVec.end(),
             [](const pair<char, int> &a, const pair<char, int> &b)
             {
                 return a.second > b.second;
             });

        string result;
        for (const auto &p : freqVec)
        {
            result.append(p.second, p.first);
        }

        return result;
    }
};
