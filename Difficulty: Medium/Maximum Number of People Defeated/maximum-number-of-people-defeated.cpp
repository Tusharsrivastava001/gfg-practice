class Solution {
  public:
  long long sum(long long k) {
    return k * (k + 1) * (2 * k + 1) / 6;
}

    int maxPeopleDefeated(int p) {
        // Code Here
    long long low = 0, high = 1e6, ans = 0;

    while (low <= high) {
        long long mid = (low + high) / 2;

        if (sum(mid) <= p) {
            ans = mid;
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    return ans;
    }
};
