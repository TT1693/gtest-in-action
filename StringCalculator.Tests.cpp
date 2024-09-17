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
}

  TEST(StringCalculatorTestSuite,add_zeroInputString_ZeroIsExpected){
    string input="0";
    int expectedValue=0;
    int actualValue=Add(input);
    ASSERT_EQ(actualValue,expectedValue);
}

TEST(StringCalculatorTestSuite,add_oneInputString_oneIsExpected){
    string input="1";
    int expectedValue=1;
    int actualValue=Add(input);
    ASSERT_EQ(actualValue,expectedValue);
}

  TEST(StringCalculatorTestSuite,add_twoInputString_sumIsExpected){
    string input="1,2";
    int expectedValue=3;
    int actualValue=Add(input);
    ASSERT_EQ(actualValue,expectedValue);
  }

    TEST(StringCalculatorTestSuite,add_multipleInputString_sumIsExpected){
    string input="1,2,3";
    int expectedValue=6;
    int actualValue=Add(input);
    ASSERT_EQ(actualValue,expectedValue);
    }

    TEST(StringCalculatorTestSuite,add_InputStringwithnewline_sumIsExpected){
    string input="1\n2,3";
    int expectedValue=6;
    int actualValue=Add(input);
    ASSERT_EQ(actualValue,expectedValue);
    }

    TEST(StringCalculatorTestSuite,add_InputStringwithdelimiter_delimiterBasedSumIsExpected){
    string input="//;\n1;2";
    int expectedValue=3;
    int actualValue=Add(input);
    ASSERT_EQ(actualValue,expectedValue);    
}
