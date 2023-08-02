#include<stdio.h>
#include<stdlib.h>
int random;
int choice1(){
  
    printf("Enter how mny random numbers to be stored in an array:");
    scanf("%d",&random);
};
int choice2(){
     int randArray[random];
   for(int i=0;i<random;i++)
      randArray[i]=rand()%100;  
  
   printf("\nElements of the array::");
  
   for(int i=0;i<random;i++){
      printf("%d ",randArray[i]);
    }
      printf("\n");
}
 int choice3_sorting(int arr[],int size){
     int i, key, j;
     size=random;
    for (i = 0; i < random; i++)
    {
        key = arr[i];
        j = i - 1;
 
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
     
        }
       
     printf("%d ", arr[i]);
    printf("\n");
      arr[j + 1] = key;
    }

 }
int main(){
    int num;
    int arr[random];
printf("0. Quit\n");
printf("1. n Random numbers=>Array\n");
printf("2. Display the Array\n");
printf("3. Sort the Array in Ascending Order by using Insertion Sort Algorithm\n");
printf("4. Sort the Array in Descending Order by using any sorting algorithm\n");
printf("5. Time Complexity (step count) to sort ascending of data for all Cases (Data Ascending, Data in Descending & Random Data) in tabular form for values n=5 to 9, step=1. \n");
printf("6. Time Complexity (step count) to sort ascending of data for all Cases (Data Ascending, Data in Descending & Random Data) in tabular form for values n=5000 to 50000, step=5000\n");
while(num!=0){
printf("Enter your choice:\n");
scanf("%d",&num);
if(num==1){
    choice1();
}
if(num==2){
    choice2();
}
if(num==3){
    choice3_sorting(arr,random);
}
}

return 0;
}