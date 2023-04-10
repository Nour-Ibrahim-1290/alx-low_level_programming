#ifndef MAIN
#define MAIN

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

ssize_t read_textfile(const char *file_name, size_t letters);

#endif
