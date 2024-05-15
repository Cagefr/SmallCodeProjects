#include <iostream>
using namespace std;

class Solution {
public:
    int romanToInt(string s) {

        int total = 0;

        for (int i = 0; i < s.size(); i++)
        {
            char last = '\0'; // Set to a null value, or choose a value not represented in numeral
            if (i > 0)
            {
                last = s[i - 1];
            }
            char cur = s[i];

            if (cur == 'V' && last == 'I') // Check for exception Roman Numerals
            {
                total = total + 4;
                total = total - 1; // Clean up last, after we find out it's a double
            }
            else if (cur == 'X' && last == 'I')
            {
                total = total + 9;
                total = total - 1; // Clean up last, after we find out it's a double
            }
            else if (cur == 'L' && last == 'X')
            {
                total = total + 40;
                total = total - 10;
            }
            else if (cur == 'C' && last == 'X')
            {
                total = total + 90;
                total = total - 10; // Clean up
            }
            else if (cur == 'D' && last == 'C')
            {
                total = total + 400;
                total = total - 100; // Clean up
            }
            else if (cur == 'M' && last == 'C')
            {
                total = total + 900;
                total = total - 100; // Clean up for last mistake
            } // Exception cases must be tested first in order to print sequentially
            else if (cur == 'I') // Check for standard Roman numerals
            {
                total = total + 1;
            }
            else if (cur == 'V')
            {
                total = total + 5;
            }
            else if (cur == 'X')
            {
                total = total + 10;
            }
            else if (cur == 'L')
            {
                total = total + 50;
            }
            else if (cur == 'C')
            {
                total = total + 100;
            }
            else if (cur == 'D')
            {
                total = total + 500;
            }
            else if (cur == 'M')
            {
                total = total + 1000;
            }
        }

        return total;
    }
};

int main() {
    string s;
    cout << "Enter a Roman numeral: ";
    cin >> s;

    Solution solution;
    int total = solution.romanToInt(s);

    cout << "The total value of the Roman numeral " << s << " is: " << total << endl;

    return 0;
    //was very happy with this unique solution of mine. It had a runtime of 0ms on LeetCode
}
