/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int a = 0x123456;
    char b;
    void *p= &a;
    b = *((char*)p);
    if(b == 0x00)
        cout<<"Big Endian";
    else if(b == 0x56)
        cout<<"Little Endian";
    else
        cout<<"error";
    getchar();
    return 0;
}
