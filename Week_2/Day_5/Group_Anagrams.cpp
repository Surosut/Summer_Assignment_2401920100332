class Solution
{
public:
    vector<vector<string>> groupAnagrams(vector<string> &strs)
    {
        unordered_map<string, vector<string>> mp;

        // Process each string
        for (auto s : strs)
        {
            string key = s;

            // Sort the string to create a unique key

            sort(key.begin(), key.end());

            // Store the original string in the group

            mp[key].push_back(s);
        }

        vector<vector<string>> ans;

        // Collect all grouped anagrams
        for (auto it : mp)
        {
            ans.push_back(it.second);
        }

        return ans;
    }
};