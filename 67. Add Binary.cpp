#include <iostream>
#include <vector>
#include <iterator>
#include <sstream>
#include <algorithm>

using namespace std;

class Solution {
public:
    string addBinary(string &a, string &b) {
        int i = a.size() - 1, j = b.size() - 1;
        vector<char> res;
        int move = 0;
        bool incNext = false;
        while (i >= 0 || j >= 0) {
            move = incNext ? 1 : 0;
            if (i >= 0) {
                move += a[i--] - '0';
            }
            if (j >= 0) {
                move += b[j--] - '0';
            }
            if (move >= 2) {
                incNext = true;
            } else {
                incNext = false;
            }
            res.push_back((char) (move % 2));
        }
        if (incNext) {
            res.push_back(1);
        }
        stringstream result;
        reverse(res.begin(), res.end());
        copy(res.begin(), res.end(), ostream_iterator<int>(result, ""));
        return result.str();
    }
};