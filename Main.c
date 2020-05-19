#include <stdio.h>
#include "Map.h"
#include "Movement.h"
#include <stdlib.h>
#include <Windows.h>
#include <time.h>

int main() {
    

    int xcor, ycor;
    
    char** map;
  
    int n = 20, m = 30;
    map = CreateMap(n, m, "MAP.txt");
    xcor = 1;
    ycor = 1;
    /*map[xcor][ycor] = 'O';*/
  
    while (1) {
        FillMap(map, n, m);
        char button = getch();
        Move(map, xcor, ycor, button);

        Sleep(500);
        system("CLS");
    }
    
    return(0);
}

