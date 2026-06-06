#include <iostream>
using namespace std;

int binarysearch(int arr[], int first, int last, int element)
{
    while (first <= last)
    {
        int mid = (first + last) / 2;

        if (arr[mid] == element)
        {
            cout << "ELEMENT " << element
                 << " FOUND AT INDEX " << mid;
            return 0;
        }
        else if (element < arr[mid])
        {
            last = mid - 1;
        }
        else
        {
            first = mid + 1;
        }
    }

    cout << "ELEMENT NOT FOUND";
    return -1;
}

int main()
{
    int arr[] = {1, 3, 4, 5, 7, 23, 67, 86, 89, 567};

    int size = sizeof(arr) / sizeof(arr[0]);
    int first = 0;
    int last = size - 1;
    int element = 567;

    binarysearch(arr, first, last, element);

    return 0;
}
