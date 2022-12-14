/*
Copyright (C) 2008 by CodeSourcery, Inc.  All rights reserved.

Permission to use, copy, modify, and distribute this software
is freely granted, provided that this notice is preserved.
 */
#include <stddef.h>
#include <stdint.h>
#include <stdlib.h>

int main (void) {
  size_t s;

  s = SIZE_MAX;
  /* If SIZE_MAX is truncated when assigning to "s", then SIZE_MAX is
     too big.  */
  if (s != SIZE_MAX)
    abort ();
  /* If SIZE_MAX + 1 is not zero, then SIZE_MAX is not big enough.  */
  if (++s != 0)
    abort ();

  exit(0);
}
