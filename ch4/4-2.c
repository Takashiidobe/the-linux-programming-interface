#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

int main(int argc, char* argv[]) {
  if (argc < 3) {
    exit(42);
  }
  char* from = argv[1];
  int read_fd = open(from, O_RDONLY);

  char* to = argv[2];
  int write_fd = open(to, O_RDWR | O_CREAT, 0644);
  int nbytes = 2;
  char buf[nbytes];
  int bytes_read;
  while ((bytes_read = read(read_fd, buf, nbytes))) {
    write(write_fd, buf, bytes_read);
    if (bytes_read < nbytes) {
      break;
    }
  }
}
