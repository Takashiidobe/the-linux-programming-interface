#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/uio.h>

int my_writev(int fd, const struct iovec *iovec, int count) {
  int bytes_to_write = 0;
  for (int i = 0; i < count; i++) {
    bytes_to_write += iovec[i].iov_len;
  }
  char* str = malloc(bytes_to_write);
  int curr = 0;
  for (int i = 0; i < count; i++) {
    int curr_len = iovec[i].iov_len;
    char* curr_str = iovec[i].iov_base;
    for (int j = 0; j < curr_len; j++) {
      char c = curr_str[j];
      str[curr++] = c;
    }
  }

  return write(fd, str, bytes_to_write);
}

int main(int argc, char* argv[]) {
  char *strs[] = {"Hello ", "world ", "It's me, Mario\n"};
  int len = sizeof(strs) / sizeof(char*);
  ssize_t       nwritten;
  struct iovec  iov[len];

  for (int i = 0; i < len; i++) {
    char* curr = strs[i];
    iov[i].iov_base = curr;
    iov[i].iov_len = strlen(curr);
  }

  nwritten = my_writev(STDOUT_FILENO, iov, len);
}
