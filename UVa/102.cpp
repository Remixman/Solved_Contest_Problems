#include <stdio.h>
#include <string.h>

char numToColor(int n) {
    switch (n) {
        case 0: return 'B';
        case 1: return 'G';
        case 2: return 'C';
    }
}

int main() {

    int bin[3][3];
    char min_pattern[4];

    while (scanf("%d%d%d%d%d%d%d%d%d", &bin[0][0], &bin[0][1], &bin[0][2],
        &bin[1][0], &bin[1][1], &bin[1][2], &bin[2][0], &bin[2][1], &bin[2][2]) == 9) {
        int min_movement_val = -1;

        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                for (int k = 0; k < 3; k++) {
                    if (i+j+k != 3 || i==j || j==k) continue;

                    int movement = 0;
                    movement += bin[1][i] + bin[2][i];
                    movement += bin[0][j] + bin[2][j];
                    movement += bin[0][k] + bin[1][k];
                    char pattern[] = {numToColor(i), numToColor(j), numToColor(k), '\0'};

                    if (movement < min_movement_val || min_movement_val == -1 ||
                        (movement == min_movement_val && strcmp(pattern, min_pattern) < 0)) {
                        min_movement_val = movement;
                        strcpy(min_pattern, pattern);
                    }
                }
            }
        }

        printf("%s %d\n", min_pattern, min_movement_val);
    }

    return 0;
}
