#include <stdio.h>

#ifdef _WIN32
    #include <windows.h>
#else
    #include <locale.h>
#endif

static int is_init = 0;

void DrawPixelInConsole(int r, int g, int b) {
    if (!is_init) {
        #ifdef _WIN32
            SetConsoleOutputCP(65001);
        #else
            setlocale(LC_ALL, ""); 
        #endif
        is_init = 1;
    }

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

    getchar();
    return 0;
}
