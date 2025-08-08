#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

double mergeSort(double array[], size_t array_length) {
  if (array_length == 1) { 
    return array;
  }

  int mid = array_length / 2;
  double left_array[mid];
  double right_array[mid];
  for (size_t i = 0; i < mid; ++i) {
    left_array[i] = array[i];
  }
  for (size_t i = 0; i < mid; ++i) {
    right_array[i] = array[i];
  }
  left_array = mergeSort(left_array, mid);
  right_array = mergeSort(right_array, mid);
  for (size_t i = 0; i < mid; ++i) {
    printf("Number %f", left_array[i]);
  }

  return 0.1;
}

int main(int argc, char* argv[argc+1]) { 
  int left = 0;
  size_t length = argc - 1;
  int right = length - 1;
  size_t mid = (left + right) / 2;
  double array[length];

  for (size_t i = 0; i < length; ++i) {
    double number = strtod(argv[i + 1], NULL);
    array[i] = number;
  }

  mergeSort(array, length);
}
