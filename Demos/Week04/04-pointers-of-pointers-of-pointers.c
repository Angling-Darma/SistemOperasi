/*
 * Copyright (C) 2016-2020 Rahmat M. Samik-Ibrahim
 * http://rahmatm.samik-ibrahim.vlsm.org/
 * This program is free script/software. This program is distributed in the 
 * hope that it will be useful, but WITHOUT ANY WARRANTY; without even the 
 * implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
# INFO: TBA
 * REV07: Tue 28 Sep 2021 17:16:52 WIB
 * REV06: Sun Feb 23 16:59:31 WIB 2020
 * REV05: Tue Oct  1 11:37:10 WIB 2019
 * REV04: Tue Aug 28 18:40:36 WIB 2018
 * REV03: Tue Oct  3 20:49:01 WIB 2017
 * START: Tue Sep 20 17:00:52 WIB 2016
 */

#include <stdio.h>
#define HEAD1 "  VARIABLE  +++ ADDRESS ++ + VALUE(CH) ++\n"

/* Global Variables */
unsigned char   varchr0='a';
unsigned char*  ptrchr0=&varchr0;
unsigned char** ptrptr0=&ptrchr0;
unsigned char*** ppptr0=&ptrptr0;

void main(void) {
   printf(HEAD1);
   printf("  varchr0 = %14p %#7X (%c)\n", &varchr0,   varchr0, varchr0);
   printf("  ptrchr0 = %14p %14p\n",      &ptrchr0,   ptrchr0);
   printf("  ptrptr0 = %14p %14p\n",      &ptrptr0,   ptrptr0);
   printf("   ppptr0 = %14p %14p\n",       &ppptr0,   ppptr0);
   printf("  *ppptr0 = %14p %14p\n",        ppptr0,  *ppptr0);
   printf(" **ppptr0 = %14p %14p\n",       *ppptr0, **ppptr0);
   printf("***ppptr0 = %14p %#7X (%c)\n", **ppptr0,***ppptr0,***ppptr0);
}

/*
  VARIABLE  +++ ADDRESS ++ + VALUE(CH) ++
  varchr0 = 0x556677881038    0X61 (a)
  ptrchr0 = 0x556677881040 0x556677881038
  ptrptr0 = 0x556677881048 0x556677881040
   ppptr0 = 0x556677881050 0x556677881048
  *ppptr0 = 0x556677881048 0x556677881040
 **ppptr0 = 0x556677881040 0x556677881038
***ppptr0 = 0x556677881038    0X61 (a)

                      0  1  2  3  4  5  6  7  8  9  A  B  C  D  E  F
0000 5566 7788 1030   -  -  -  -  -  -  -  - 61  -  -  -  -  -  -  -
0000 5566 7788 1040  38 10 88 77 66 55 00 00 40 10 88 77 66 55 00 00 
0000 5566 7788 1050  48 10 88 77 66 55 00 00  -  -  -  -  -  -  -  -
*/


