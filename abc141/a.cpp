#include <iostream>
#include <array>

using namespace std;

string ExpectTommorowWeather(string today) {
    const int weather_num = 3;
    array<string, weather_num> weather_list = { "Sunny", "Cloudy", "Rainy" };
    string ret = "Can not predict.";

    for(int i = 0; i < weather_list.size(); ++i) {
        if(today.compare(weather_list.at(i)) == 0) {
            ret = weather_list[(i + 1) % weather_num];
            break;
        }
    }
    return ret;
}

int main() {
    string today;
    cin >> today;

    cout << ExpectTommorowWeather(today) << endl;
    return 0;
}