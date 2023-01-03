
#include <iostream>
#include <regex>
#include <string>

#include "test.h"

void test_match(const std::string &value) {
  std::cout << "test: " << value << "\n";

  std::regex tbTimeFormat =
      std::regex("now(?:([\\+-])(?:(\\d+)y)?(?:(\\d+)M)?(?:(\\d+)d)?(?:(\\d+)h)"
                 "?(?:(\\d+)m)?(?:(\\d+)s)?(?:(\\d+)ms)?(?:(\\d+)us)?)?");

  std::smatch sm1;
  if (std::regex_match(value, sm1, tbTimeFormat)) {
    std::string sign = sm1[1];
    std::cout << "sign: " << sign << "\n";
    std::string years = sm1[2];
    std::cout << "years: " << years << "\n";
    std::string months = sm1[3];
    std::cout << "months: " << months << "\n";
    std::string days = sm1[4];
    std::cout << "days: " << days << "\n";
    std::string hours = sm1[5];
    std::cout << "hours: " << hours << "\n";
    std::string minutes = sm1[6];
    std::cout << "minutes: " << minutes << "\n";
    std::string seconds = sm1[7];
    std::cout << "seconds: " << seconds << "\n";
    std::string msecs = sm1[8];
    std::cout << "msecs: " << msecs << "\n";
    std::string usecs = sm1[9];
    std::cout << "usecs: " << usecs << "\n";
  } else {
    std::cout << "doesn't match: " << "\n";
  }
}

void test() {
  test_match("now+1000ms");
  test_match("now+1m");
  test_match("now+10y20M3d4h89m31s20ms89us");
}
