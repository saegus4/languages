#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[argc+1]) { 
  int left = 0;
  size_t length = argc - 1;
  int right = length - 1; 
  size_t mid = (left + right) / 2;
  double array_1[mid];
  double array_2[length - mid];
  int index_1 = 0;
  int index_2 = 0;

  for (size_t i = 0; i < length; ++i) {
    double number = strtod(argv[i + 1], NULL);
    if (i <= mid) {
      array_1[index_1] = number; 
      index_1++;
    } else {
      array_2[index_2] = number;
      index_2++;
    }
  }
}

double mergeSort(double array_1[], size_t array_1_length, double array_2[], size_t array_2_length) {
  double sub_array_1[array_1_length];
  double sub_array_2[array_2_length];
  for (size_t i = 0; i < array_1_length; ++i) {
    double number = array_1[i];
    for (size_t t = 0; t < array_1_length; ++i) {
      if (sub_array_1[t]) {
	if (sub_array_1[t] > number) {
	  sub_array_1[t + 1] = sub_array_1[t];
	  sub_array_1[t] = number;
	}	
      } else {
	sub_array_1[t] = number;
      }
    }
  }
  
  return 0.1;
}
