#include<iostream>
#include<stdio.h>
using namespace std;

int main() {
    double r, area, len;
    double pi = 3.141592653589;

    cin >> r;

    area = pi * r * r;
    len = pi * r * 2;

    printf("%f %f\n", area, len);

    return 0;
}