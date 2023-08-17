// #include <stdio.h>

// int binary_search_leftmost(int arr[], int size, int target, int *comparisons) {
//     int left = 0, right = size - 1;
//     int position = -1;

//     *comparisons = 0;

//     while (left <= right) {
//         int mid = left + (right - left) / 2;
//         (*comparisons)++;
//         if (arr[mid] == target) {
//             position = mid;
//             right = mid - 1;
//         } else if (arr[mid] < target) {
//             left = mid + 1;
//         } else {
//             right = mid - 1;
//         }
//     }

//     return position;
// }

// int main() {
//     int arr[] = {2, 4, 4, 4, 6, 8, 10};
//     int size = sizeof(arr) / sizeof(arr[0]);
//     int target = 4;

//     int comparisons;
//     int position = binary_search_leftmost(arr, size, target, &comparisons);

//     if (position != -1) {
//         printf("Element %d found at index %d, leftmost appearance.\n", target, position);
//     } else {
//         printf("Element %d not found in the array.\n", target);
//     }

//     printf("Number of comparisons made: %d\n", comparisons);

//     return 0;
// }