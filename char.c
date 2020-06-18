#include<stdio.h>
#include<stdlib.h>
#include<iostream.h>
 void display(int num1 = 90, int);
 
int main() {
    display(10);
    return 0;
}
 
void display(int num1, int num2) {
    num1 = 50;
    cout << num1 << “ ” << num2;
}
