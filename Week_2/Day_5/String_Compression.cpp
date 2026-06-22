class Solution
{
public:
    int compress(vector<char> &chars)
    {
        // using two pointer approach
        int i = 0; // Read pointer
        int j = 0; // Write pointer

        while (i < chars.size())
        {
            char curr = chars[i];
            int count = 0;

            // Count consecutive occurrences
            while (i < chars.size() && chars[i] == curr)
            {
                count++;
                i++;
            }

            // Write the character
            chars[j++] = curr;

            // Write count if greater than 1
            if (count > 1)
            {
                string cnt = to_string(count);

                for (char c : cnt)
                {
                    chars[j++] = c;
                }
            }
        }

        return j;
    }
};