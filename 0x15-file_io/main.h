# ifndef _FILE_NAME_H_
# define _FILE_NAME_H_
# include <fcntl.h>
# include <unistd.h>
# include <stdlib.h>
# include <stddef.h>
ssize_t read_textfile(const char *filename, size_t letters);
# endif
