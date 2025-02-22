/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    for(int i = 0; i < numsSize; i++){
        for(int j = i + 1; j < numsSize; j++){
            if(nums[j] == target - nums[i]){ //checking if nums[j] + nums[i] = target value
                int* result = malloc(2 * sizeof(int));
                result[0] = i;
                result[1] = j;
                *returnSize = 2; // updating the size
                return result;
            }
        }
    }
    *returnSize = 0;
    return malloc(sizeof(int)*0);
}
