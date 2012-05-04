#include <stdio.h>

int main(int argc, char *argv[]) {
  int i = argc;
  while(i--) {
    printf("arg %d: %s\n", i, argv[i]);
  }

  char *states[] = {
    "California", "Oregon",
    "Washington", "Texas",
    "Montana", "Idaho"
  };

  int num_states = 6;
  i = num_states;
  while(i > 0) {
    printf("state %d: %s\n", num_states - i, states[num_states - i]);
    i--;
  }

  i = 0;
  while(i < argc && i < num_states) {
    printf("\"copied\" arg %d: %s\n", i, argv[i]);
    states[i] = argv[i]; 
    i++;
  }

  return 0;
}
