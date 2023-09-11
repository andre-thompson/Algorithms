#include <iostream>
#include <iomanip>
#include <string>

//code from ZyBook 3.3 Selection Sort
void SelectionSort(int* numbers, int numbersSize) {
   //iterate through list
   for (int i = 0; i < numbersSize - 1; i++) {
      //set smallest
      int indexSmallest = i;
      //find next smallest starting at i + 1
      for (int j = i + 1; j < numbersSize; j++) {
         if (numbers[j] < numbers[indexSmallest]) {
            indexSmallest = j;
         }
      }
         
      //swap
      int temp = numbers[i];
      numbers[i] = numbers[indexSmallest];
      numbers[indexSmallest] = temp;
   }
}
