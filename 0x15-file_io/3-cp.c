#include "main.h"
#include <stdlib.h>
#include <stdio.h>
char *create_buffer(char *file);
void close_file(int fd);

/**
 * create_buffer - allocate 1024 bytes to a buffert
 * @file: name of file whwre char is stored
 * Return: pointer to newly allocated buffer
 */
char *create_buffer(char *file)
{
char *buffer;
buffer = malloc(sizeof(char) * 1024);
if (buffer == NULL)
{
	dprintf(STDERR_FILENO,
			"Error: can't write to %s\n", file);
	exit(99);
}
return (buffer);
}
/**
 * close_file - close file descriptors
 * @fd: file descriptoir to be closed
 */
void close_file(int fd)
{
int c;
c = close(fd);
if (c == -1)
{
	dprintf(STDERR_FILENO, "Error: can't close fd %d\n", fd);
	exit(100);
}
}
/**
 * main - copie a file content to another file
 * @argc: no of arg supplied to a program
 * @argv: array of pointers to arg
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
int from, to, r, w;
char *buffer;
if (argc != 3)
{
	dprintf(STDERR_FILENO, "usage: cp file_from file_to\n");
	exit(97);
}
buffer = create_buffer(argv[2]);
from = open(argv[1], O_RDONLY);
r = read(from, buffer, 1024);
to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
do {
if (from == -1 || r == -1)
{
dprintf(STDERR_FILENO,
		"Error: can't read form file %s\n", argv[1]);
free(buffer);
exit(98);
}
w = write(to, buffer, r);
if (to == -1 || w == -1)
{
dprintf(STDERR_FILENO,
		"error: can't write to %s\n", argv[2]);
free(buffer);
exit(99);
}
r = read(from, buffer, 1024);
to = open(argv[2], O_WRONLY | O_APPEND);
} while (r > 0);
free(buffer);
close_file(from);
close_file(to);
return (0);
}
