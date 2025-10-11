#include <stdio.h>
#include <windows.h>

void DrawPixelInConsole(int r, int g, int b) {
    SetConsoleOutputCP(65001);
    printf("\x1b[38;2;%d;%d;%dm█\x1b[0m", r, g, b);
}

int main() {
    DrawPixelInConsole(255, 0, 0);
    DrawPixelInConsole(252, 132, 3);
    DrawPixelInConsole(252, 227, 3);
    DrawPixelInConsole(0, 255, 0);
    DrawPixelInConsole(3, 252, 236);
    DrawPixelInConsole(0, 0, 255);
    DrawPixelInConsole(244, 3, 252);
    return 0;
}
