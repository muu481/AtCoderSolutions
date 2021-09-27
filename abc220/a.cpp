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

int Solve(int A, int B, int C) {
    for(int i = 0; i*C <= 1000; ++i) {
        if(A <= i*C && i*C <= B) {
            return i*C;
        }
    }
    return -1;
}

int main() {
    int A, B, C;
    cin >> A >> B >> C;

    cout << Solve(A, B, C) << endl;
    return 0;
}