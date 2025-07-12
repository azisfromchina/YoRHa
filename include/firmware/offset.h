#pragma once

#ifndef FIRMWARE
#define FIRMWARE 900
#endif

#if   FIRMWARE == 900
  #include "fw900.h"
#elif FIRMWARE == 903
  #include "fw903.h"
#endif