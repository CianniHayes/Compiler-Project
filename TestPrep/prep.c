#include <stdio.h>
#include <string.h>
int main(int argc, char** argv) {
  int needNextLoop = 1;
  int i;
  for (i = argc - 1; i > 1 && needNextLoop; --i) {
    needNextLoop = 0;
    int j;
    for (j = 1; j < i; ++j) {
      if (strcmp(argv[j], argv[j + 1]) > 0) {
	char* tmp = argv[j];
	argv[j] = argv[j + 1];
	argv[j + 1] = tmp;
	needNextLoop = 1;
      }
    }
  }
  for (i=1; i < argc; ++i) {
    printf("%s ", argv[i]);
  }
  printf("\n");
  return 0;
}
