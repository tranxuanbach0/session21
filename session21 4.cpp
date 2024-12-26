#include <stdio.h>
#include <stdlib.h>

int main() {
    char line[256];
    FILE *file;

    file = fopen("bt01.txt", "r");
    if (file == NULL) {
        printf("Khong the mo file bt01.txt. Hay kiem tra lai.\n");
        return 1;
    }

    if (fgets(line, sizeof(line), file) != NULL) {
        printf("Dong dau tien trong file: %s", line);
    } else {
        printf("File bt01.txt rong hoac khong the doc duoc.\n");
    }

    fclose(file);
    return 0;
}

