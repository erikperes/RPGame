#include "Map.h"
#include <time.h>
//2D tomb dinamikus lefoglalasa
char** CreateMap(int n, int m, const char* file) {
    int i, j;
    FILE* fin = fopen(file, "rt");
    if (!fin) {
        printf("FILE ERROR");
        exit(1);
    }
    
    char** map = (char**)(calloc(n, sizeof(char*)));
    for (i = 0; i < n; ++i) {
        map[i] = (char*)(calloc(m, sizeof(char)));
    }
    for (i = 0; i < n; ++i) {
        for (j = 0; j < m; ++j) {
            fscanf(fin, "%c\n", &map[i][j]);
        }
    }

    return map;
}


// palya keretenek kirajzolasa es feltoltese
void FillMap(char** map, int n, int m) {
    
    int i, j;

    for (i = 0; i < n; ++i) {
        for (j = 0; j < m; ++j) {
            if (map[i][j] == '8' && (i == 0 || i == n - 1)) {
                printf("#");
            }
            else if (map[i][j] == '8' && (j == 0 || j == m - 1)) {
                printf("#");
            }
            if (map[i][j] == '1') {
                printf(" ");
            }
            if (map[i][j] == '3') {
                printf("-");
            }
            if (map[i][j] == 'O') {
                map[i][j] = 'O';
            }
            if (map[i][j] == '5') {
                printf("*");
            }
            if (map[i][j] == '9') {
                printf("[]");
            }
        }
        printf("\n");
    } 
    
 }