#include <stdio.h>
#include <stdlib.h>

void readFirstCharacter() {
    FILE *file = fopen("bt01.txt", "r");
    if (file == NULL) {
        printf("Loi: Khong the mo file bt01.txt\n");
        exit(1);
    }


    char firstChar = fgetc(file);
    if (firstChar != EOF) {
        printf("Ky tu dau tien trong file: %c\n", firstChar);
    } else {
        printf("File rong hoac khong co ky tu nao.\n");
    }

    fclose(file);
}

int main() {
    readFirstCharacter();
    return 0;
}

