/**
 * Definition of Interval:
 * class Interval {
 * public:
 *     int start, end;
 *     Interval(int start, int end) {
 *         this->start = start;
 *         this->end = end;
 *     }
 * }
 */

class Solution {
public:
    int minMeetingRooms(vector<Interval>& intervals) {

        int n = intervals.size();
        if (n == 0) return 0;

        sort(intervals.begin(), intervals.end(),
            [](const Interval& a, const Interval& b) {
                return a.start < b.start;
            });

        priority_queue<int, vector<int>, greater<int>> pq;

        int ans = 0;

        for (int i = 0; i < n; i++) {

            // Free all rooms whose meetings have ended
            while (!pq.empty() && pq.top() <= intervals[i].start) {
                pq.pop();
            }

            // Allocate current meeting
            pq.push(intervals[i].end);

            // Maximum rooms occupied simultaneously
            ans = max(ans, (int)pq.size());
        }

        return ans;
    }
};
