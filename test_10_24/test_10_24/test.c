#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>

//void rotate(int* nums, int numsSize, int k) {
//    int i = 0;
//    for (i = 1; i <= k; i++)
//    {
//        int j = 0;
//        int tmp = nums[numsSize - 1];
//        for (j = numsSize - 1; j > 0; j--)
//        {
//            nums[j] = nums[j - 1];
//        }
//        nums[0] = tmp;
//    }
//    printf("[");
//    for (i = 0; i < numsSize; i++)
//    {
//        printf("%d", nums[i]);
//        if (i < numsSize - 1)
//        {
//            printf(",");
//        }
//    }
//    printf("]");
//}

//void rotate(int* nums, int numsSize, int k) {
//    int i = 0;
//    int arr[3];
//    for (i = 0; i < k; i++)
//    {
//        arr[i] = nums[numsSize - k + i];
//    }
//    for (i = numsSize - 1; i >= k; i--)
//    {
//        nums[i] = nums[i - k];
//    }
//    for (i = 0; i < k; i++)
//    {
//        nums[i] = arr[i];
//    }
//    printf("[");
//    for (i = 0; i < numsSize; i++)
//    {
//        printf("%d", nums[i]);
//        if (i < numsSize - 1)
//        {
//            printf(",");
//        }
//    }
//    printf("]");
//}


//·½°¸Ò»
void rotate(int* nums, int numsSize, int k) {
    int i = 0;
    if (k == 0 || numsSize == 1 || numsSize == k)
    {
        printf("[");
        for (i = 0; i < numsSize; i++)
        {
            printf("%d", nums[i]);
            if (i < numsSize - 1)
            {
                printf(",");
            }
        }
        printf("]");
    }
    else
    {
        while (numsSize < k)
        {
            k = k - numsSize;
        }
        int arr[k];
        for (i = 0; i < k; i++)
        {
            arr[i] = nums[numsSize - k + i];
        }
        for (i = numsSize - 1; i >= k; i--)
        {
            nums[i] = nums[i - k];
        }
        for (i = 0; i < k; i++)
        {
            nums[i] = arr[i];
        }
    //    printf("[");
    //    for (i = 0; i < numsSize; i++)
    //    {
    //        printf("%d", nums[i]);
    //        if (i < numsSize - 1)
    //        {
    //            printf(",");
    //        }
    //    }
    //    printf("]");
    //}
}

//void rotate(int* nums, int numsSize, int k)
//{
//    int* p = (int*)malloc((2 * numsSize - k) * sizeof(int));
//    if (p == NULL)
//    {
//        return;
//    }
//    p = nums;
//    int i = 0;
//    for (i = 0; i < numsSize - k; i++)
//    {
//        p[i+numsSize] = p[i];
//    }
//    printf("[");
//    for (i = numsSize - k; i < 2 * numsSize - k; i++)
//    {
//        printf("%d", p[i]);
//        if (i < 2 * numsSize - k - 1)
//        {
//            printf(",");
//        }
//    }
//    printf("]"); 
//    free(p);
//    p = NULL;
//}
//


//int main()
//{
//	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
//	int* p = (int*)malloc(20);
//	p = arr;
//	&p[10] = arr;
//	printf("%d", *(p + 12));
//	return 0;
//}



int main()
{
	int arr[7] = { 1,2,3,4,5,6,7 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int k = 3;
	rotate(arr, sz, k);
	return 0;
}