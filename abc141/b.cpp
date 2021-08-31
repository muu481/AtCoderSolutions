#include <iostream>
#include <array>

using namespace std;

bool IsEasyToTap(string dance) {
    enum eStep {
        Step_Odd = 0,
        Step_Even,
        Step_Num,
    };

    array<char, Step_Num> difficult_poistion = {};
    difficult_poistion.at(Step_Odd)     = 'L';
    difficult_poistion.at(Step_Even)    = 'R';

    for(int i = 0; i < static_cast<int>(dance.length()); ++i) {
        if((i + 1) % 2 == 0) {
            if(dance.at(i) == difficult_poistion.at(Step_Even)) {
                return false;
            }
        } else {
            if(dance.at(i) == difficult_poistion.at(Step_Odd)) {
                return false;
            }
        }
    }
    return true;
}

int main() {
    string dance;
    cin >> dance;

    string result_str = (IsEasyToTap(dance)) ? "Yes" : "No";
    cout << result_str;

    return 0;
}