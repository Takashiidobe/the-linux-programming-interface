/*
 * 5-2. Write a program that opens an existing file for writing with the O_APPEND flag, and
then seeks to the beginning of the file before writing some data. Where does the
data appear in the file? Why?
 * It shows up at the end regardless, since the file was opened with O_APPEND
 */
#include <unistd.h>
#include <fcntl.h>

int main(int argc, char* argv[]) {
  int fd = open("test.txt", O_RDWR | O_APPEND);
  lseek(fd, 0, 0);
  write(fd, "test", 4);
}
