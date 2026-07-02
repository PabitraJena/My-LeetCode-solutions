// 42. Trapping rain water

int trap(int* height, int heightSize) {

    if (heightSize == 0){
        return 0;
    }
    

    int left = 0;
    int right = heightSize - 1;
    int lMax = height[left];
    int rMax = height[right];

    int water = 0;

    while (left < right){
        if (height[left] < height[right]){
            left++;
            if (height[left] > lMax){
                lMax = height[left];
            }
            water += (lMax - height[left]);
        }else{
            right--;
            if (height[right] > rMax){
                rMax = height[right];
            }
            water += (rMax - height[right]);
        }
    }
    return water;
}