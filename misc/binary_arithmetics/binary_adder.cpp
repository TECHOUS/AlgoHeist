//16bit binary adder with carry
#include<iostream>
using namespace std;

uint16_t b16_adder(uint16_t a,uint16_t b)
{
 uint32_t total32=0;
 total32=a+b;
 uint16_t rem=(total32>>16);
 uint16_t total16=(total32);
 uint16_t real_total=(total16+rem);
 
 return real_total;
}

//8bit binary adder with carry
uint16_t b8_adder(uint8_t a,uint8_t b)
{
 uint16_t total16=0;
 total16=a+b;
 uint8_t rem=(total16>>8);
 uint8_t total8=(total16);
 uint8_t real_total=(total8+rem);
 return real_total;
}

//32bit binary adder with carry
uint16_t b32_adder(uint32_t a,uint32_t b)
{
 
 uint64_t total64=0;
 total64=a+b;
 uint32_t rem=(total64>>32);
 uint32_t total32=(total64);
 uint32_t real_total=(total32+rem);
 return real_total;
}
