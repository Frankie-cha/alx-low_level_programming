#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#define BUF_SIZE 1024

ssize_t read_textfile(const char *filename, size_t letters) {
    if (filename == NULL) {
        return 0;
    }

    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        return 0;
    }

    char buffer[BUF_SIZE];
    size_t total_read = 0;

    while (total_read < letters) {
        size_t to_read = letters - total_read;
        if (to_read > BUF_SIZE) {
            to_read = BUF_SIZE;
        }

        size_t read_count = fread(buffer, sizeof(char), to_read, file);

        if (read_count == 0) {
            break;  // Reached end of file or error
        }

        size_t write_count = write(STDOUT_FILENO, buffer, read_count);

        if (write_count != read_count) {
            fclose(file);
            return 0;  // Write failed
        }

        total_read += read_count;
    }

    fclose(file);

    return total_read;
}

int main() {
    const char *filename = "example.txt";
    size_t letters_to_read = 100;

    ssize_t result = read_textfile(filename, letters_to_read);

    if (result == 0) {
        fprintf(stderr, "Error reading the file.\n");
    } else {
        printf("\n\nTotal letters read and printed: %zd\n", result);
    }

    return 0;
}
