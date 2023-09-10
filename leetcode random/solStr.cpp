
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<string> splitWordsBySeparator(vector<string> &words, char separator)
    {
        vector<string> ans;
        string temp;
        for (int i = 0; i < words.size(); i++)
        {

            string str = words[i];
            temp.erase();
            int j = 0;
            while (j <str.size())
            {
                if (separator != (str[j]))
                {
                    temp.push_back(str[j]);
                }
                else if (separator == (str[j]))
                {
                    if (temp.length() != 0)
                        ans.push_back(temp);

                    temp.erase();
                }
                j++;
                if ((str[j]) == '\0')
                {
                    if (temp.length() != 0)
                        ans.push_back(temp);
                    temp.erase();
                }
            }
        }

        return ans;
    }
};

int main()
{
    Solution s1;
    vector<string> vec = {"one.two.three", "four.five", "six"};
    vector<string> ans = s1.splitWordsBySeparator(vec, '.');
    cout << endl;
    for (int i = 0; i < ans.size(); i++)
    {
        cout << " " << ans[i];
    }

    return 0;
}