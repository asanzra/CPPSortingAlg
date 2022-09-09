#include <iostream>
using namespace std;

void InsertionSort (int array[], int length);
void ShowArray(int* array, int length);

int main(){
  int array[] = {8, 9, 4, 2, 10};
  InsertionSort(array, sizeof(array)/sizeof(*array));
  return 0;
}

void InsertionSort (int array[], int length){

  ShowArray(array, length);
  for(int i = 0; i < length; i++){
    int key = array[i];
    for(int j = i - 1; j >= 0; j--){
      if(key < array[j]){
        array[j + 1] = array [j];
        array[j] = key;
      }
      else{ break; }
    }
    ShowArray(array, length);
  }
  return;
}

void ShowArray(int* array, int length){
  for (int i = 0; i < length - 1; i++){
    cout << array[i] << ", ";
  }
  cout << array[length - 1] << "\n";
}
