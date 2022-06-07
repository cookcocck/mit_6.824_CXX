#include "master/master.h"

int main(int argc, char **argv) {
  if (argc < 2) {
    printf("Usage: lab1 file1 file2 file3...\n");
    return EXIT_FAILURE;
  }
  Master *master = new Master(argv, argc - 1);
  return EXIT_SUCCESS;
}