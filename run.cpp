#include <Windows.h>

int main() {
    system("g++ data.cpp -o data.exe");
    system("g++ Correct_code.cpp -o Correct_code.exe");
    system("g++ my_code.cpp -o my_code.exe");

    system("strart \"check.bat\"");
    return 0;
}