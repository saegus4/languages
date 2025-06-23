#include <stdio.h>

int main(void) {
  int size = 7;
  int *ring_buffer[size];

  int read_index = 0;
  int write_index = 0;
  while (1) {
    int key;
    printf("Enter the key\n");
    scanf("%d", &key);

    if (write_index == size) {
      write_index = 0;
    }

    if (write_index == 0) {
      ring_buffer[write_index] = &key;
      write_index++;
      printf("Current write index 0\n");
      continue;
    }
    else {
      write_index++;
      ring_buffer[write_index] = &key;
    }

    if (key % 2 == 0) {
      read_index++;
    }
    printf("Current write index %d\n", write_index);
    printf("Current read index %d\n", read_index);
  }

  return 0;
}
