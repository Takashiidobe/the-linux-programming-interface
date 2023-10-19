#include <sys/reboot.h>
#include <linux/reboot.h>
#include <unistd.h>
#include <sys/syscall.h>

int main() {
  // This reboots the computer if done as superuser, and it doesn't do much cleanup, so watch out
  syscall(SYS_reboot, LINUX_REBOOT_MAGIC1, LINUX_REBOOT_MAGIC2);

}
