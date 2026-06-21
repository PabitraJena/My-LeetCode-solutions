#include <stdio.h>

int min(int a, int b){
    return a > b ? b : a;
}

int maxArea(int* height, int heightSize) {
    int l = 0, r = heightSize - 1;

    int max_area = 0;
    while (l < r){
        int curr_area = min(height[l], height[r]) * (r - l);
        if (curr_area > max_area){
            max_area = curr_area;
        }
        
        height[l] > height[r] ? r-- : l++;
    }
    return max_area;
}