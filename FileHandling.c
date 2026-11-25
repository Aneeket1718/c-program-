#include <stdio.h>
#include <stdlib.h>

#define BUFFER_SIZE 4096

int main(void) {
    char source_name[256];
    char dest_name[256];
    unsigned char buffer[BUFFER_SIZE];
    size_t bytes_read;
    int status = EXIT_SUCCESS;

    printf("Enter source file name: ");
    if (scanf("%255s", source_name) != 1) {
        fprintf(stderr, "Invalid input for source file name.\n");
        return EXIT_FAILURE;
    }

    printf("Enter destination file name: ");
    if (scanf("%255s", dest_name) != 1) {
        fprintf(stderr, "Invalid input for destination file name.\n");
        return EXIT_FAILURE;
    }

    FILE *src = fopen(source_name, "rb");
    if (src == NULL) {
        perror("Error opening source file");
        return EXIT_FAILURE;
    }

    FILE *dst = fopen(dest_name, "wb");
    if (dst == NULL) {
        perror("Error opening destination file");
        fclose(src);
        return EXIT_FAILURE;
    }

    while ((bytes_read = fread(buffer, 1, sizeof(buffer), src)) > 0) {
        size_t bytes_written = fwrite(buffer, 1, bytes_read, dst);
        if (bytes_written != bytes_read) {
            perror("Error writing to destination file");
            status = EXIT_FAILURE;
            break;
        }
    }

    if (ferror(src)) {
        perror("Error reading from source file");
        status = EXIT_FAILURE;
    }

    if (fclose(src) != 0) {
        perror("Error closing source file");
        status = EXIT_FAILURE;
    }

    if (fclose(dst) != 0) {
        perror("Error closing destination file");
        status = EXIT_FAILURE;
    }

    if (status == EXIT_SUCCESS) {
        printf("File copied successfully from '%s' to '%s'.\n", source_name, dest_name);
    }

    return status;
}
