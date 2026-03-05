#include <windows.h>
#include <cstdlib>
#include <ctime>
int main() {
    srand(time(NULL));
    while(1) {
        SetCursorPos(rand()%1000, rand()%1000);
        Sleep(10);
    }
    return 0;
}