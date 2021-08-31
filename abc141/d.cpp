#include <iostream>
#include <array>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

int main() {
    long long num, ticket;
    cin >> num >> ticket;

    priority_queue<int> item_queue;
    for(int i = 0; i < num; ++i) {
        int item;
        cin >> item;
        item_queue.push(item);
    }

    for(int i = 0; i < ticket; ++i) {
        int item = item_queue.top();
        item_queue.pop();
        item_queue.push(item / 2);
    }

    long long sum = 0;
    while(!item_queue.empty()) {
        sum += item_queue.top();
        item_queue.pop();
    }
    
    cout << sum << endl;
    return 0;
}