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
 
long long Solve(vector<long long>& vec, long long N, long long X, long long sum_sequesnce) {
    long long time = X / sum_sequesnce;
    long long k = time * N;
    long long sum = sum_sequesnce * time;
    while(true) {
        sum += vec[k % N];
        if(sum > X) {
            return k + 1;
        } else {
            ++k;
        }
    }
}
 
int main() {
    long long N, X;
    long long sum_sequesnce = 0;
    cin >> N;
    vector<long long> vec(N);
 
    for(int i = 0; i < N; ++i) {
        long long A;
        cin >> A;
        vec[i] = A;
        sum_sequesnce += A;
    }
    cin >> X;
 
    cout << Solve(vec, N, X, sum_sequesnce) << endl;
    return 0;
}