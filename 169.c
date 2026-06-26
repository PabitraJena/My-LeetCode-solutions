// 169. Majority Element

int majorityElement(int* nums, int numsSize) {
    int target = 0;
    int count = 0;

    for (int i = 0; i < numsSize; i++){
        if (count == 0){
            target = nums[i];
        }
        
        if (nums[i] == target){
            count++;
        }else{
            count--;
        }
    }
    return target;
}