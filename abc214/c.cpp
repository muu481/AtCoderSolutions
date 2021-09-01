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



vector<long long> Solve(int n, vector<long long> s_vec, vector<long long> t_vec) {
    vector<long long> ret(n);
    ret[0] = t_vec[0];
    for(int i = 1; i < n; ++i) {
        ret[i] = min(ret[i-1] + s_vec[i-1], t_vec[i]);
    }
    for(int i = 0; i < n; ++i) {
        int prev_idx = [&](){
            if(i == 0) {
                return n-1;
            } else {
                return i-1;
            }
        }();
        ret[i] = min(ret[prev_idx] + s_vec[prev_idx], t_vec[i]);
    }
    return ret;
}

int main() {
    int n;
    cin >> n;

    vector<long long> s_vec(n);
    vector<long long> t_vec(n);
    auto inputFunc = [](int n, vector<long long>& v){
        for(int i = 0; i < n; ++i) {
            long long num;
            cin >> num;
            v[i] = num;
        }
    };
    inputFunc(n, s_vec);
    inputFunc(n, t_vec);
    vector<long long> calc_vec = Solve(n, s_vec, t_vec);

    for(int i = 0; i < n; ++i) {
        cout << calc_vec[i] << endl;
    }
    return 0;
}