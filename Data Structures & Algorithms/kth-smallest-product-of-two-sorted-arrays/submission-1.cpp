class Solution {
public:
    long long floorDiv(long long a, long long b) {
        long long q = a / b;
        long long r = a % b;

        if (r != 0 && ((r > 0) != (b > 0)))
            q--;

        return q;
    }
    long long ceilDiv(long long a, long long b) {
    long long q = a / b;
    long long r = a % b;

    if (r != 0 && ((r > 0) == (b > 0)))
        q++;

    return q;
}

    long long kthSmallestProduct(vector<int>& nums1,
                                 vector<int>& nums2,
                                 long long k) {

        int n = nums1.size();
        int m = nums2.size();

        long long start = -10000000000LL;
        long long end   =  10000000000LL;

        long long ans = 0;

        while (start <= end) {

            long long mid = start + (end - start) / 2;

            long long cnt = 0;

            for (int i = 0; i < n; i++) {

                long long a = nums1[i];

                if (a == 0) {
                    if (mid >= 0)
                        cnt += m;
                }
                else if (a > 0) {

                    long long t = floorDiv(mid, a);

                    cnt += upper_bound(nums2.begin(),
                                       nums2.end(),
                                       t)
                           - nums2.begin();
                }
                else {

                    long long t = ceilDiv(mid, nums1[i]);

int pos = lower_bound(nums2.begin(), nums2.end(), t)
          - nums2.begin();

cnt += m - pos;
                }
            }

            if (cnt >= k) {
                ans = mid;
                end = mid - 1;
            }
            else {
                start = mid + 1;
            }
        }

        return ans;
    }
};