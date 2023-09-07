#include <stdio.h>

// struct Item {
//     int item_id;
//     double item_profit;
//     double item_weight;
//     double profit_weight_ratio;
// };

// void selectionSort(struct Item items[], int num_items) {
//     int i, j;
//     for (i = 0; i < num_items - 1; i++) {
//         int max_index = i;
//         for (j = i + 1; j < num_items; j++) {
//             if (items[j].profit_weight_ratio > items[max_index].profit_weight_ratio) {
//                 max_index = j;
//             }
//         }
//         struct Item temp = items[i];
//         items[i] = items[max_index];
//         items[max_index] = temp;
//     }
// }

// int main() {
//     int num_items;
//     printf("Enter the number of items: ");
//     scanf("%d", &num_items);

//     struct Item items[num_items];

//     for (int i = 0; i < num_items; i++) {
//         printf("Enter the profit and weight of item no %d: ", i + 1);
//         scanf("%lf %lf", &items[i].item_profit, &items[i].item_weight);
//         items[i].profit_weight_ratio = items[i].item_profit / items[i].item_weight;
//         items[i].item_id = i + 1;
//     }

//     double capacity;
//     printf("Enter the capacity of knapsack: ");
//     scanf("%lf", &capacity);
//     selectionSort(items, num_items);

//     double max_profit = 0.0;
//     printf("Item No profit Weight Amount to be taken\n");
//     for (int i = 0; i < num_items; i++) {
//         if (capacity >= items[i].item_weight) {
//             printf("%d %.6lf %.6lf %.6lf\n", items[i].item_id, items[i].item_profit, items[i].item_weight, 1.0);
//             max_profit += items[i].item_profit;
//             capacity -= items[i].item_weight;
//         } else {
//             double fraction = capacity / items[i].item_weight;
//             printf("%d %.6lf %.6lf %.6lf\n", items[i].item_id, items[i].item_profit, items[i].item_weight, fraction);
//             max_profit += fraction * items[i].item_profit;
//             break;
//         }
//     }

//     printf("Maximum profit: %.2lf\n", max_profit);

//     return 0;
// }

void main(){
    float a = 3.2;
    // printf("%d %d %d", a, a++, ++a);

    if (a==3.2)
    {  
        printf("hello");
    }else{
        printf("world");
    }
    printf("\n%f",a);
}
