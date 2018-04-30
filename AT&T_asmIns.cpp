//g++ main.cpp -o main
//тупой AT&T интеловский синтаксис вставки асма
#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    asm(".intel_syntax noprefix\n"
    "MOV %%eax, %1;\n"
    "ADD %%eax, 2;\n"
    "MOV %0, %%eax;\n"
    ".att_syntax \n" 
    : "=r" (a)
    : "r" (a)
    : "%eax"
    );
    cout << a << endl;
    cin >> a;
    return 0;
}
