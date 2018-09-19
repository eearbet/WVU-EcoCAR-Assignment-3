// Copyright [2018] <Eric Arbet>

#include <iostream>
using namespace std;
#include <math.h>
#include <cstdlib>
#include<bits/stdc++.h>

int main() {
/*
uint8_t can1[5];
can1[0] = 0x01;
can1[1] = 0x40;
can1[2] = 0x00;
can1[3] = 0x00;
can1[4] = 0x00;

uint8_t can2[5];
can2[0] = 0x06;
can2[1] = 0x40;
can2[2] = 0x00;
can2[3] = 0x00;
can2[4] = 0x00;

uint8_t can3[5];
can3[0] = 0x09;
can3[1] = 0x60;
can3[2] = 0x00;
can3[3] = 0x00;
can3[4] = 0x00;

uint8_t can4[5];
can4[0] = 0x0c;
can4[1] = 0x80;
can4[2] = 0x00;
can4[3] = 0x00;
can4[4] = 0x00;


uint16_t can111[1];
can111[0]=can1[0];
can111[1]=can1[1];
short combined = +can111[0];
short combined2 = +can1[0] + +can1[1];
cout<<"Can1[0]   " <<can1[1] <<"\n";
cout<<"Can1[0]   " <<combined <<"\n";
cout<<"Can1[0]   " <<combined2 <<"\n";
*/

    char can1[] = "0140";
    char can2[] = "0640";
    char can3[] = "0960";
    char can4[] = "0c80";


      unsigned long hex_value1 = strtoul(can1, 0, 16);
      unsigned long hex_value2 = strtoul(can2, 0, 16);
      unsigned long hex_value3 = strtoul(can3, 0, 16);
      unsigned long hex_value4 = strtoul(can4, 0, 16);

    cout << "Can message 1 decoded to   " << hex_value1*.03125 << "\n";
    cout << "Can message 2 decoded to   " << hex_value2*.03125 << "\n";
    cout << "Can message 3 decoded to   " << hex_value3*.03125 << "\n";
    cout << "Can message 4 decoded to   " << hex_value4*.03125 << "\n";
    return 0;
}

// g++ -o hex hex.cpp