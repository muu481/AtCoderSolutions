#include <iostream>
#include <array>
#include <vector>
 
using namespace std;
 
int main() {
    int player_num, point, round;
    cin >> player_num >> point >> round;
    
    vector<int> player_list(player_num, point-round);
 
    for(int i = 0; i < round; ++i) {
        int winner;
        cin >> winner;
        ++player_list.at(winner-1);
    }
 
    for(int player : player_list) {
        string result = (player > 0) ? "Yes" : "No";
        cout << result << endl;
    }
 
    return 0;
}