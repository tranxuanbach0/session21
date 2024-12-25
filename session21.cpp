#include <stdio.h>
#include <stdlib.h>

void writeToFile() {
    char userInput[1000];

    printf("Nhap chuoi bat ky: ");
    fgets(userInput, sizeof(userInput), stdin);

    FILE *file = fopen("bt01.txt", "w");
    if (file == NULL) {
        printf("Loi: Khong the mo file bt01.txt\n");
        exit(1);
    }

    fprintf(file, "%s", userInput);


    fclose(file);

    printf("Da ghi chuoi vao file bt01.txt thanh cong.\n");
}

int main() {
    writeToFile();
    return 0;
}
