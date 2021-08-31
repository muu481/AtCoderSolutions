int main() {
    long long n, k;
    scanf("%lld %lld", &n, &k);

    while(true) {
        int abs_val = abs(n - k);
        if(abs_val < n) {
            n = abs_val;
        } else {
            break;
        }
    }

    printf("%lld\n", n);
    return 0;
}