// #include <stdio.h>

// int binarySearch(int arr[], int start, int length, int search)
// {
//     if (length >= start)
//     {
//         int mid = start + (length - start) / 2;

//         if (arr[mid] == search){
//             return mid;
//         }
//         if (arr[mid] > search){
//             return binarySearch(arr, start, mid - 1, search);
//         }
//         return binarySearch(arr, mid + 1, length, search);

//     }
//     return -1;
// }
// void main(){
//     int arr[] = {3, 10,23, 56, 67, 89, 100, 110, 123, 125};
//     int length = sizeof(arr) / sizeof(arr[0]);
//     int search = 89;
//     int result = binarySearch(arr, 0, length - 1, search);
//     if(result==-1){
//         printf("Element is not present");
//     }else{
//         printf("Element is present at index %d", result);
//     }

// }
#include <stdio.h>
#include <stdlib.h>
int random;
int arr[];
int choice1()
{

    printf("Enter how mny random numbers to be stored in an array:");
    scanf("%d", &random);
};
int choice2()
{
    // int randArray[random];
    for (int i = 0; i < random; i++)
        arr[i] = rand() % 100;

    printf("\nElements of the array::");

    for (int i = 0; i < random; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int choice3_sorting()
{
    // for (i = 0; i < random; i++)
    // {
    //     key = arr[i];
    //     j = i - 1;

    //     while (j >= 0 && arr[j] > key)
    //     {
    //         arr[j + 1] = arr[j];
    //         j = j - 1;
    //     }

    //     printf("%d ", arr[i]);
    //     printf("\n");
    //     arr[j + 1] = key;
    // }
    for (int i = 0; i < random; i++)
    {
        for (int j = i; j < random; j++)
        {
            if (arr[i]>arr[j])
            {
                int temp = arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
            
        }
        
    }
    for (int i = 0; i < random; i++)
    {
    printf(" %d ",arr[i]);
    }
    printf("\n");
    
}
int main()
{
    int num;
    printf("0. Quit\n");
    printf("1. n Random numbers=>Array\n");
    printf("2. Display the Array\n");
    printf("3. Sort the Array in Ascending Order by using Insertion Sort Algorithm\n");
    printf("4. Sort the Array in Descending Order by using any sorting algorithm\n");
    printf("5. Time Complexity (step count) to sort ascending of data for all Cases (Data Ascending, Data in Descending & Random Data) in tabular form for values n=5 to 9, step=1. \n");
    printf("6. Time Complexity (step count) to sort ascending of data for all Cases (Data Ascending, Data in Descending & Random Data) in tabular form for values n=5000 to 50000, step=5000\n");
    while (num != 0)
    {
        printf("Enter your choice:\n");
        scanf("%d", &num);
        if (num == 1)
        {
            choice1();
        }
        if (num == 2)
        {
            choice2();
        }
        if (num == 3)
        {
            choice3_sorting();
        }
    }

    return 0;
}