#include <stdio.h>

int main(int argc, char *argv[]) {
  /*
    Must have explicit null byte.
  */
  char full_name[] = {
    'Z', 'e', 'd',
    ' ', 'A', '.', ' ',
    'S', 'h', 'a', 'w', '\0'
  };
  int areas[] = {10, 12, 13, 14, 20};
  /*
    Compiler adds null byte.

    char *name = "Zed" is different than below. This is a pointer to the
    literal "Zed", and may (will?) be in a read-only area of memory. 

    For more discussion see:
      http://stackoverflow.com/questions/7670059/understanding-c-strings-string-literals-in-c
      http://stackoverflow.com/questions/349025/is-a-string-literal-in-c-created-in-static-memory
  */
  char name[] = "Zed";

  printf("The size of an int: %u\n", sizeof(int));
  printf("The size of areas (int[]): %u\n",
          sizeof(areas));
  printf("The first area is %d, the second %d.\n",
          areas[0], areas[1]);

  printf("The size of a char: %u\n", sizeof(char));
  printf("The size of name (char[]): %u\n",
          sizeof(name));
  printf("The number of chars: %u\n",
          sizeof(name) / sizeof(char));

  printf("The size of full_name (char[]): %u\n",
          sizeof(full_name));
  printf("The number of chars: %d\n",
          sizeof(full_name) / sizeof(char));
  printf("name=\"%s\" and full_name=\"%s\"\n",
          name, full_name);

  return 0;
}
