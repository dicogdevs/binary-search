#include <binary_search.h>
#include <math.h>

int binary_search(int arr[], int size, int target)
{
    if (size < 1)
        return -1;

    int left = 0;
    int right = size - 1;

    while (left <= right)
    {
        int mid = left + ((right - left) >> 1);

        if (arr[mid] == target)
            return mid;
        if (arr[mid] < target)
            left = mid + 1;
        else
            right = mid - 1;
    }

    return -1;
}