#include <stdio.h>

union A {

    char _byte[4];
    int _dword;
};

int main() {

    union A var;
    var._dword = 0;
    var._byte[1] = 1;
    printf("Valor de var (union A): %d", var._dword);

    return 0;
}