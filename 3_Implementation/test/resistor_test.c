#include "fun.h"
#include "unity.h"
#define PROJECT_NAME "Code"

/* Required by the unity test framework */
void setUp(){};
/* Required by the unity test framework */
void tearDown(){};
void test_search(void);
void test_compare(void);

void test_search(void){
    TEST_ASSERT_EQUAL(0,searchValue("BLACK"));
}

void test_compare(void){
    TEST_ASERT_EQUAL(0,compareString("BLACK","BLACK"));
    
}

int main(void)
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_search);
  RUN_TEST(test_compare);

  /* Close the Unity Test Framework */
  return UNITY_END();
}
