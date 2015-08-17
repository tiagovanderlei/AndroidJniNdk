#include <stdio.h>
#include <time.h>
#include "keygenerator.h"

std::string KeyGenerator::generate(){
   time_t timer;
   struct tm y2k;
   double seconds;

   y2k.tm_hour = 0; y2k.tm_min = 0; y2k.tm_sec = 0;
   y2k.tm_year = 115; y2k.tm_mon = 0; y2k.tm_mday = 1;

   time(&timer);

   seconds = difftime(timer,mktime(&y2k));
   char buffer[20];
   snprintf(buffer, sizeof(buffer), "%.f", seconds);

   return buffer;
}