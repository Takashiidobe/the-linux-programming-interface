#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int main(int argc, char *argv[]) {
  if (isatty(0)) {
    printf("stdin is a tty\n");
  } else {
    printf("stdin is not from a tty\n");
  }
  if (isatty(1)) {
    printf("stdout is to a tty\n");
  } else {
    printf("stdout is not to a tty\n");
  }
  exit(EXIT_SUCCESS);
}
