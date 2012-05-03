#include <stdio.h>

int main(int argc, char *argv[]) {
  int i = 0;

  // go through each string in argv
  // why am I skipping argv[0]?
  // Because it's the name of the executable
  for(i = 1; i < argc; i++) {
    printf("arg %d: %s\n", i, argv[i]);
  }

  char *states[] = {
    "California", "Oregon",
    "Washington", NULL,
    "Montana"
  };

  int num_states = 5;

  for(i = 0; i < num_states; i++) {
    printf("state %d: %s\n", i, states[i]);
  }

  return 0;
}
