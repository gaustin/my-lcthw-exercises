#include <stdio.h>

int main(int argc, char *argv[]) {
  if(argc < 2) {
    printf("ERROR: You need at least one argument.\n");
    return 1;
  }

  int j = 1;
  for(j = 1; j < argc; j++) {
    char *argument = argv[j];
    int i = 0;
    char letter = '\0';
    for(i = 0, letter = argument[i]; argument[i] != '\0'; i++, letter = argument[i]) {

      switch(letter) {
        case 'a':
        case 'A':
          printf("%d: 'A'\n", i);
          break;
        case 'e':
        case 'E':
          printf("%d: 'E'\n", i);
          break;
        case 'i':
        case 'I':
          printf("%d: 'I'\n", i);
          break;
        case 'o':
        case 'O':
          printf("%d: 'O'\n", i);
          break;
        case 'u':
        case 'U':
          printf("%d: 'U'\n", i);
          break;
        case 'y':
        case 'Y':
          if(i > 2) {
            printf("%d: 'Y'\n", i);
            break;
          }
          // If you break here you don't fall through when Y is not a vowel.
        default:
          printf("%d: %c is not a vowel\n", i, letter);
      }
    }
  }

  return 0;
}
