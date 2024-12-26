#include <stdio.h>
#include <stdlib.h>

int main() {
    char userInput[256];
    FILE *file;

    file = fopen("bt01.txt", "a");
    if (file == NULL) {
        printf("Không th? m? file bt01.txt. H?y ki?m tra l?i.\n");
        return 1;
    }

    printf("Nh?p chu?i b?t k? ð? ghi vào file: ");
    fgets(userInput, sizeof(userInput), stdin);

    fprintf(file, "%s", userInput);
    fclose(file);

    printf("Ð? ghi thêm chu?i vào file bt01.txt.\n");
    return 0;
}

