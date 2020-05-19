#ifndef MAP_H
#define MAP_H
#define _CRT_SECURE_NO_WARNINGS
#define _CRT_NONSTDC_NO_DEPRECATE
#define WIN32_LEAN_AND_MEAN
#include <stdio.h>
char** CreateMap(int n, int m, const char* file);

void FillMap(char** map, int n, int m);

#endif