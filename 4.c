// 4. Median of Two Sorted Arrays

#include <stdio.h>
#include <limits.h>

double findMedianSortedArray(int* nums1, int nums1Size, int* nums2, int nums2Size){
    if (nums1Size > nums2Size){
        return findMedianSortedArray(nums2, nums2Size, nums1, nums1Size);
    }

    int m = nums1Size;
    int n = nums2Size;

    int l = 0, r = m;

    while (l <= r){
        int partitionX = (l + r) / 2;
        int partitionY = (m + n + 1) / 2 - partitionX;

        int maxLeftX = (partitionX == 0) ? INT_MIN : nums1[partitionX - 1];
        int minRightX = (partitionX == m) ? INT_MAX : nums1[partitionX];

        int maxLeftY = (partitionY == 0) ? INT_MIN : nums2[partitionY - 1];
        int minRighty = (partitionY == n) ? INT_MAX : nums2[partitionY];

        if (maxLeftX <= minRighty && maxLeftY <= minRightX){
            if ((m + n) % 2 == 0){
                int leftMax = (maxLeftX > maxLeftY) ? maxLeftX : maxLeftY;
                int rightMin = (minRightX < minRighty) ? minRightX : minRighty;
                return ((double)leftMax + (double)rightMin) / 2.0;
            }else{
                return (double)((maxLeftX > maxLeftY) ? maxLeftX : maxLeftY);
            }
        }else if(maxLeftX > minRighty){
            r = partitionX - 1;
        }else{
            l = partitionX + 1;
        }
    }
    return 0.0;
}