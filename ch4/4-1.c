#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

int main(int argc, char* argv[]) {
  int nbytes = 2;
  char buf[nbytes];
  int fd = open(argv[1], O_RDWR | O_CREAT, 0644);
  int bytes_read;
  while ((bytes_read = read(STDIN_FILENO, buf, nbytes))) {
    write(fd, buf, bytes_read);
    write(STDOUT_FILENO, buf, bytes_read);
    if (bytes_read < nbytes) {
      break;
    }
  }
}
