// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int left = 1;
        int right = n;
        while (left < right) {
            int mid = left + (right - left) / 2;
            if (isBadVersion(mid)) {
                // If mid is a bad version, move the right pointer to mid
                right = mid;
            } else {
                // If mid is not a bad version, move the left pointer to mid + 1
                left = mid + 1;
            }
        }
        // At this point, left and right pointers converge, indicating the first bad version
        return left;
    }
};