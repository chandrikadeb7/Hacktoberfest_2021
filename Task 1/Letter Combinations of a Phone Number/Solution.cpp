// Approach 1: DFS

class Solution
{
public:
    vector<string> letterCombinations(string digits)
    {
        if (digits.empty())
            return {};

        vector<string> ans;

        dfs(digits, 0, "", ans);
        return ans;
    }

private:
    const vector<string> digitToLetters{"", "", "abc", "def", "ghi",
                                        "jkl", "mno", "pqrs", "tuv", "wxyz"};

    void dfs(const string &digits, int i, string &&path, vector<string> &ans)
    {
        if (i == digits.length())
        {
            ans.push_back(path);
            return;
        }

        for (const char letter : digitToLetters[digits[i] - '0'])
        {
            path.push_back(letter);
            dfs(digits, i + 1, move(path), ans);
            path.pop_back();
        }
    }
};

// Approach 2: Iterative

class Solution
{
public:
    vector<string> letterCombinations(string digits)
    {
        if (digits.empty())
            return {};

        vector<string> ans{""};
        const vector<string> digitToLetters{"", "", "abc", "def", "ghi",
                                            "jkl", "mno", "pqrs", "tuv", "wxyz"};

        for (const char d : digits)
        {
            vector<string> temp;
            for (const string &s : ans)
                for (const char c : digitToLetters[d - '0'])
                    temp.push_back(s + c);
            ans = move(temp);
        }

        return ans;
    }
};
