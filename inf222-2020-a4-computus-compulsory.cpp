#include <iostream>

/** Computing Easter Day for 2020 using "Anonymous Gregorian algorithm". */
int main () {

  int Y = 2020;
  int a = Y % 19;
  int b = Y / 100;
  int c = Y % 100;
  int d = b / 4;
  int e = b % 4;
  int f = (b + 8) / 25;
  int g = (b - f + 1) / 3;
  int h = (19*a + b - d - g + 15) % 30;
  int i = c / 4;
  int k = c % 4;
  int l = (32 + 2*e + 2*i - h - k) % 7;
  int m = (a + 11*h + 22*l) / 451;
  int n = (h + l - 7*m + 114) / 31;
  int o = (h + l - 7*m + 114) % 31;
  int month = n;
  int day = o + 1;

  std::cout << "Easter Sunday " << Y << "-0" << month << "-" << (day < 10 ? "0" : "") << day << std::endl;
  return 0;
}
