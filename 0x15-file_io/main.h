#ifndef MAIN_H
#define MAIN_H
ssize_t read_textfile(const char *filename, size_t n);
int create_file(const char *filename, char *text);
int append_text_to_file(const char *filename, char *text);
#endif
