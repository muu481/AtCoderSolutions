
int CheckPopularNum(const vector<int>& list, const int total_vote, const int select_num) {
    int ret = 0;

    for(int vote : list) {
        if( vote >= static_cast<double>(total_vote) / (4 * select_num) ) {
            ++ret;
        }
    }
    return ret;
}

int main() {
    int product_num, popular_num;
    cin >> product_num >> popular_num;

    vector<int> vote_list(product_num);
    int total_vote = 0;
    for(int i = 0; i < product_num; ++i) {
        int vote;
        cin >> vote;
        vote_list[i] = vote;
        total_vote += vote;
    }

    const string result = (CheckPopularNum(vote_list, total_vote, popular_num) >= popular_num) ? ("Yes") : ("No");
    cout << result << endl;

    return 0;
}