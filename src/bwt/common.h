/* This file is part of Kaiju, Copyright 2015,2016 Peter Menzel and Anders Krogh,
 * Kaiju is licensed under the GPLv3, see the file LICENSE. */
#ifndef COMMON_h
#define COMMON_h

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <inttypes.h>

typedef unsigned char uchar;
typedef unsigned short int ushort;
typedef unsigned int uint;
typedef int64_t IndexType;

static void ERROR(char *text, int errornum) {
  fprintf(stderr,"%s\n",text);
  exit(errornum);
}

static void ERRORs(char *format, char *text, int errornum) {
  fprintf(stderr,"%s\n",text);
  exit(errornum);
}


#endif
