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

int Solve(int input) {

    enum TableData {
        Time = 0,
        Num,
        Max
    };

    static const int problemNumTable[][Max] = 
    {
        {212, 8,},
        {126, 6,},
        {1, 4,},
    };

    for(int i = 0; i < ARRAY_SIZE(problemNumTable); ++i) {
        if(problemNumTable[i][Time] <= input) {
            return problemNumTable[i][Num];
        }
    }
    return -1;
}

int main() {
    int input;
    cin >> input;

    cout << Solve(input) << endl;
    return 0;
}