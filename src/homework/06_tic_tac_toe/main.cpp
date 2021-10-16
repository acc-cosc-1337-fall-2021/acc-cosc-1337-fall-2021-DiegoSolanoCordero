/*
/* time example */
#include <iostream>
#include <stdio.h>      /* printf */
#include <time.h>       /* time_t, struct tm, difftime, time, mktime */
#include <ctime>
using std::cout;
 
int main ()
{
  double seconds;
  int hours;
  struct tm y2k = {0};

  y2k.tm_hour = 19;   y2k.tm_min = 0; y2k.tm_sec = 0;
  y2k.tm_year = 118; y2k.tm_mon = 10; y2k.tm_mday = 11;
 
  time_t timet;
  timet =time_t (mktime(&y2k));

  
   std::uint32_t time_date_stamp = 1570846218;
   time_t timet2 =	time_date_stamp;
   seconds =difftime(timet2,timet);
   hours = seconds/3600;
   cout<<"sec"<<seconds<<"\n";
   cout<<"resultado"<<hours<<"\n";
   cout<<ctime(timet2)<<"\n";
   cout<<timet<<"\n'";
}




