// 832. Flipping an Image

int** flipAndInvertImage(int** image, int imageSize, int* imageColSize,
                         int* returnSize, int** returnColumnSizes){
    for (int i = 0; i < imageSize; i++){

        int left = 0;
        int right = imageColSize[i] - 1;

        while (left < right){
            int temp = image[i][left];
            image[i][left] = image[i][right];
            image[i][right] = temp;
            left++;
            right--;
        }
    }

    for (int i = 0; i < imageSize; i++){

        for (int j = 0; j < imageColSize[i]; j++){
            if (image[i][j] == 0){
                image[i][j] = 1;
            }
            else{
                image[i][j] = 0;
            }
        }
    }
    *returnSize = imageSize;
    *returnColumnSizes = imageColSize;

    return image;
}