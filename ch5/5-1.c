#include <stdio.h>
#include <unistd.h>
#define _LARGEFILE64_SOURCE
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>

int main(int argc, char *argv[]) {
  /*
  int fd;
  off64_t off;
  if (argc != 3 || strcmp(argv[1], "--help") == 0)
    fprintf(STDERR_FILENO, "%s pathname offset\n", argv[0]);
  fd = open64(argv[1], O_RDWR | O_CREAT, S_IRUSR | S_IWUSR);
  if (fd == -1)
    fprintf(STDERR_FILENO, "open64");
  off = atoll(argv[2]);
  if (lseek64(fd, off, SEEK_SET) == -1)
    errExit("lseek64");
  if (write(fd, "test", 4) == -1)
    errExit("write");
  exit(EXIT_SUCCESS);
  */
}
