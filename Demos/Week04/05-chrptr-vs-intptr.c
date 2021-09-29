/*
 * Copyright (C) 2016-2021 Rahmat M. Samik-Ibrahim
 * http://rahmatm.samik-ibrahim.vlsm.org/
 * This program is free script/software. This program is distributed in the 
 * hope that it will be useful, but WITHOUT ANY WARRANTY; without even the 
 * implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
# INFO: TBA
 * REV07: Wed 29 Sep 2021 08:22:52 WIB
 * REV06: Sun Feb 23 16:59:31 WIB 2020
 * REV05: Tue Aug 28 18:40:36 WIB 2018
 * REV04: Tue Oct  3 21:18:21 WIB 2017
 * START: Tue Sep 20 17:00:52 WIB 2016
 */

#include <stdio.h>

#define HEAD2 "!!! ptrint0=(int*) &varchr1;  varint0=*ptrint0; !!!\n"
#define HEAD4 "!!! ptrchr0=(char*) &varint0; varchr0=*ptrchr0; !!!\n"
#define HEAD5 "!!!! !!!!  ptrchr0++;  varchr0=*ptrchr0;  !!!! !!!!\n"

/* Global Variables */
unsigned int    varint0=0x41424344;
unsigned char   varchr0='a';
unsigned char   varchr1='b';
unsigned char   varchr2='c';
unsigned char   varchr3='d';
unsigned char   varchr4='e';

unsigned int*   ptrint0=&varint0;
unsigned char*  ptrchr0=&varchr0;

void main(void) {
   printf("Address:     varint0 = %#16.16lX\n",  &varint0);
   printf("Character:   varint0 = %c\n",  varint0);
   printf("Decimal:     varint0 = %d\n",  varint0);
   printf("Hexadecimal: varint0 = %#X\n", varint0);
   printf("\n");
   printf("Address:     varchr0 = %#16.16lX\n",  &varchr0);
   printf("Character:   varchr0 = %c\n",  varchr0);
   printf("Decimal:     varchr0 = %d\n",  varchr0);
   printf("Hexadecimal: varchr0 = %#X\n", varchr0);
   printf("\n");
   printf("varchr1: Address = %#16.16lX -- Character = %c -- Decimal = %3d -- Hexa = %#X\n",
          &varchr1, varchr1, varchr1, varchr1);
   printf("varchr2: Address = %#16.16lX -- Character = %c -- Decimal = %3d -- Hexa = %#X\n",
          &varchr2, varchr2, varchr2, varchr2);
   printf("varchr3: Address = %#16.16lX -- Character = %c -- Decimal = %3d -- Hexa = %#X\n",
          &varchr3, varchr3, varchr3, varchr3);
   printf("varchr4: Address = %#16.16lX -- Character = %c -- Decimal = %3d -- Hexa = %#X\n",
          &varchr4, varchr4, varchr4, varchr4);
   printf("\n");

   printf("ptrint0 = %10p  %14p %12X\n", ptrint0, &ptrint0, *ptrint0);
   printf("ptrchr0 = %10p  %14p %12c\n",  ptrchr0, &ptrchr0, *ptrchr0);
   printf(HEAD2);
   ptrint0=(int*) &varchr1;
   varint0=*ptrint0;
   printf("ptrint0 = %10p %14p %#12X\n", ptrint0, &ptrint0, *ptrint0);
   printf("varint0 = %#10X = %c %10p\n", varint0, varint0, &varint0);
   printf(HEAD4);
   ptrchr0=(char*) &varint0; 
   varchr0=*ptrchr0;
   printf("ptrchr0 = %10p %14p %#12X\n", ptrchr0, &ptrchr0, *ptrchr0);
   printf("varchr0 = %#10X = %c %10p\n", varchr0, varchr0, &varchr0);
   printf(HEAD5);
   ptrchr0++;
   varchr0=*ptrchr0;
   printf("ptrchr0 = %10p %14p %#12X\n", ptrchr0, &ptrchr0, *ptrchr0);
   printf("varchr0 = %#10X = %c %10p\n", varchr0, varchr0, &varchr0);
}

/*
Address:    &varint0 = 0X0000556677889940
Character:   varint0 = D
Decimal:     varint0 = 1094861636
Hexadecimal: varint0 = 0X41424344

Address:    &varchr0 = 0X0000556677889944
Character:   varchr0 = a
Decimal:     varchr0 = 97
Hexadecimal: varchr0 = 0X61

varchr1: Address = 0X0000556677889945 -- Character = b -- Decimal =  98 -- Hexa = 0X62
varchr2: Address = 0X0000556677889946 -- Character = c -- Decimal =  99 -- Hexa = 0X63
varchr3: Address = 0X0000556677889947 -- Character = d -- Decimal = 100 -- Hexa = 0X64
varchr4: Address = 0X0000556677889948 -- Character = e -- Decimal = 101 -- Hexa = 0X65

                      0  1  2  3  4  5  6  7  8  9  A  B  C  D  E  F
0000 5566 7788 9940  44 43 32 41 61 62 63 64 65  -  -  -  -  -  -  -
 */

