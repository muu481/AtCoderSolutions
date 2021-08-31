#include <string>
#include <array>
#include <deque>
#include <forward_list>
#include <list>
#include <vector>
#include <map>
#include <set>
#include <unordered_map>
#include <unordered_set>
#include <queue>
#include <stack>
#include <iterator>
#include <algorithm>
#include <iostream>
#include <cstdio>
#include <cmath>

#include <regex>
#include <atomic>
#include <thread>

using namespace std;
#define ARRAY_SIZE(array) (sizeof(array) / sizeof(array[0]))

int Solve(int s, int t) {
    int count = 0;
    for(int a = 0; a <= s; ++a) {
        for(int b = 0; b <= s; ++b) {
            for(int c = 0; c <= s; ++c) {
                if( (a + b + c) <= s && (a * b * c) <= t) {
                    ++count;
                }
            }
        }
    }
    return count;
}

int main() {
    int s, t;
    cin >> s >> t;

    cout << Solve(s, t) << endl;
    return 0;
}