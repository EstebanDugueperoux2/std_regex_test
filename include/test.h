#pragma once

#ifdef _WIN32
  #define test_EXPORT __declspec(dllexport)
#else
  #define test_EXPORT
#endif

test_EXPORT void test();
