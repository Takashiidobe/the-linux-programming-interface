#include <sys/reboot.h>
#include <linux/reboot.h>
#include <unistd.h>
#include <sys/syscall.h>

int main() {
  // This reboots the computer if done as superuser, and it doesn't do much cleanup, so watch out
  syscall(SYS_reboot, LINUX_REBOOT_MAGIC1, LINUX_REBOOT_MAGIC2);

  // The magic numbers are Linus' Birthday and his three daughter's birthdays.
  // 672274793 = 0x28121969 = Linus' Birthday
  // Daughters Bdays
  // 85072278 = 0x05121996
  // 369367448 = 0x16041998
  // 537993216 = 0x20112000
}
