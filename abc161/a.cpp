void Swap(vector<int>& v, int first, int second) {
    if(static_cast<int>(v.size()) > max(first, second)) {
        int tmp = v[first];
        v[first] = v[second];
        v[second] = tmp;
    }
}

int main() {
    static const int input_num = 3;
    vector<int> v = {};

    for(int i = 0; i < input_num; ++i) {
        int val = 0;
        cin >> val;
        v.push_back(val);
    }

    Swap(v, 0, 1);
    Swap(v, 0, 2);
    
    for(int value : v) {
        cout << value << " ";
    }
    cout << endl;

    return 0;
}