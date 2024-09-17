#include "StringCalculator.h"
#include <gtest/gtest.h>

TEST(StringCalculatorTestSuite,add_emptyInputString_ZeroIsExpected){
  //Arrange
  string input="";
  int expectedValue=0;
  //Act
  int actualValue=Add(input);
  //Assert
  ASSERT_EQ(actualValue,expectedValue);

  TEST(StringCalculatorTestSuite,add_zeroInputString_ZeroIsExpected){
    string input="0";
    int expectedValue=0;
    int actualValue=Add(input);
    ASSERT_EQ(actualValue,expectedValue);
}
