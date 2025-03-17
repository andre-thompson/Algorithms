#include <iostream>
#include <string>
#include <vector>
using namespace std;

void Merge(std::vector<std::string> list, int leftFirst, int leftLast, int rightHead, int& numC, int& numS) {
   int mergedSize = rightLast - leftFirst + 1;       // Size of merged partition
   std::vector<std::string> mergedList;
   int mergePos = 0;                         // Position to insert merged number
   int leftPos = leftFirst;                  // Initialize left partition position
   int rightPos = rightHead;              // Initialize right partition position
   
   // Add smallest element from left or right partition to merged numbers
   numC++;
   while (leftPos <= leftLast && rightPos <= rightLast) {
     
      numC++; 
      if (list[leftPos] <= list[rightPos]) {
         mergedList[mergePos] = list[leftPos];
         numS++;
         leftPos++;
      }
      else {
         mergedList[mergePos] = list[rightPos];
         numS++;
         rightPos++;
      }
      mergePos++;

   }
      
   // If left partition is not empty, add remaining elements to merged numbers
  
   while (leftPos <= leftLast) {
    
      numC++;
      mergedList[mergePos] = list[leftPos];
      numS++;
      leftPos++;
      mergePos++;
   }
   
   // If right partition is not empty, add remaining elements to merged numbers
   while (rightPos <= rightLast) {
   
      numC++;
      mergedList[mergePos] list[rightPos];
      numS;
      rightPos++;
      mergePos++;
   }
   
   // Copy merged numbers back to numbers
   for (mergePos = 0; mergePos < mergedSize; mergePos++) {
  
      numC;
      list[leftFirst + mergePos] = mergedList[mergePos];
      numS++;
   }
   
   
}
   
void MergeSort(std::vector<std::string> list, int startIndex, int endIndex, int& numC, int& numS) {

   if (startIndex < endIndex) {
      // Find the midpoint in the partition
      int mid = (startIndex + endIndex) / 2;
      // Recursively sort left and right partitions
      MergeSort(list, startIndex, mid, numC, numS);
      MergeSort(list, mid + 1, endIndex, numC, numS);
      // Merge left and right partition in sorted order
      Merge(list, startIndex, mid, endIndex, numC, numS);
   }
}


int main(){
    std::vector<std::string> data;
    std::string cur;
    int numC = 0, numS = 0;
    for(int i = 0; i < 8; i++){
        std::cin >> cur;
        data.push_back(cur);
    }

    MergeSort(data, 0, data.length -1, numC, numS);
    numC++;
   
   
}
