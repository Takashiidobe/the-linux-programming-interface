# Chapter 3

## 3-1

**When using the Linux-specific reboot() system call to reboot the system, the second
argument, magic2, must be specified as one of a set of magic numbers (e.g.,
LINUX_REBOOT_MAGIC2). What is the significance of these numbers? (Converting them
to hexadecimal provides a clue.)**

The magic numbers are Linus' Birthday and his three daughter's birthdays:

Linus' Birthday:

- 0x28121969

Daughters Birthdays:

- 0x05121996
- 0x16041998
- 0x20112000

```c
!include 3-1.c
```
