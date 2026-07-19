// 496. Next Greater element I

#include <stdio.h>
#include <stdlib.h>

int* nextGreaterElement(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize){

    int *result = (int *)malloc(nums1Size * sizeof(int));
    *returnSize = nums1Size;

    for (int i = 0; i < nums1Size; i++){
        int index = -1;

        for (int j = 0; j < nums2Size; j++){
            if (nums2[j] == nums1[i]) {
                index = j;
                break;
            }
        }

        result[i] = -1;
        for (int j = index + 1; j < nums2Size; j++){
            if (nums2[j] > nums1[i]){
                result[i] = nums2[j];
                break;
            }
        }
    }

    return result;
}