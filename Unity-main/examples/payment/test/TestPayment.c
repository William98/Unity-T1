#include "payment.h"
#include "unity.h"
#include "unity_fixture.h"

TEST_GROUP(Foo);

TEST_SETUP(Foo)
{
}

TEST_TEAR_DOWN(Foo)
{
}

TEST(Foo, TestFoo1)
{
  // All of these should pass
  TEST_ASSERT_EQUAL(0, payment(0.01f, "regular")); // 1
  TEST_ASSERT_EQUAL(1, payment(0.001f, "xpto")); //2 
  TEST_ASSERT_EQUAL(1, payment(99999.90f, "xpto"));
  TEST_ASSERT_EQUAL(2, payment(99999.00f, "ABC"));
  TEST_ASSERT_EQUAL(1, payment(-1f, "VIP"));
  TEST_ASSERT_EQUAL(1, payment(100000.00f, "estudante"));
  TEST_ASSERT_EQUAL(2, payment(88.80f, "regula"));
  TEST_ASSERT_EQUAL(2, payment(100.0f, "2"));
}

TEST(Foo, TestFoo2)
{
  // This test will 
  TEST_ASSERT_EQUAL(2, foo(1,2));
}


//Problema do 1 : tem uma falha no valor da faixa dos 50Mil 