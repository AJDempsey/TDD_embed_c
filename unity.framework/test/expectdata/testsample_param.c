/***
 * Excerpted from "Test-Driven Development for Embedded C",
 * published by The Pragmatic Bookshelf.
 * Copyrights apply to this code. It may not be used to create training material, 
 * courses, books, articles, and the like. Contact us if you are in doubt.
 * We make no guarantees that this code is fit for any purpose. 
 * Visit http://www.pragmaticprogrammer.com/titles/jgade for more book information.
***/
/* AUTOGENERATED FILE. DO NOT EDIT. */

//=======Test Runner Used To Run Each Test Below=====
#define RUN_TEST_NO_ARGS
#define RUN_TEST(TestFunc, TestLineNum, ...) \
{ \
  Unity.CurrentTestName = #TestFunc "(" #__VA_ARGS__ ")"; \
  Unity.CurrentTestLineNumber = TestLineNum; \
  Unity.NumberOfTests++; \
  if (TEST_PROTECT()) \
  { \
      setUp(); \
      TestFunc(__VA_ARGS__); \
  } \
  if (TEST_PROTECT() && !TEST_IS_IGNORED) \
  { \
    tearDown(); \
  } \
  UnityConcludeTest(); \
}

//=======Automagically Detected Files To Include=====
#include "unity.h"
#include <setjmp.h>
#include <stdio.h>

//=======External Functions This Runner Calls=====
extern void setUp(void);
extern void tearDown(void);
extern void test_TheFirstThingToTest(void);
extern void test_TheSecondThingToTest(void);


//=======Test Reset Option=====
void resetTest()
{
  tearDown();
  setUp();
}


//=======MAIN=====
int main(void)
{
  Unity.TestFile = "test/testdata/testsample.c";
  UnityBegin();
  RUN_TEST(test_TheFirstThingToTest, 21, RUN_TEST_NO_ARGS);
  RUN_TEST(test_TheSecondThingToTest, 43, RUN_TEST_NO_ARGS);

  return (UnityEnd());
}
