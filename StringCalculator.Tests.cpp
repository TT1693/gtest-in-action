#include "StringCalculator.h"
#include <gtest/gtest.h>

//tringCalculatorfixture is test suite name and call backs by gtest
class StringCalculatorfixture:public testing:Test{
protected:
      string input;
      int expectedValue;
      int actualValue;
};

TEST(StringCalculatorfixture,add_emptyInputString_ZeroIsExpected){
input="";
expectedValue=0;
actualValue=Add(input);
ASSERT_EQ(actualValue,expectedValue);
}

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

    TEST(StringCalculatorTestSuite,add_InputStringWithDelimiter_delimiterBasedSumIsExpected){
    string input="//;\n1;2";
    int expectedValue=3;
    int actualValue=Add(input);
    ASSERT_EQ(actualValue,expectedValue);
    }

    TEST(StringCalculatorTestSuite,add_InputStringWithNegative_invalidArgumentIsExpected){
    string input="1,-2,-4,5";
    int expectedValue=0;
    ASSERT_THROW(Add(input),invalid_argument);
    }

    TEST(StringCalculatorTestSuite,add_InputStringOver1000_ignoreThatNumberIsExpected){
    string input="42,1001,3";
    int expectedValue=45;
    int actualValue=Add(input);
    ASSERT_EQ(actualValue,expectedValue);
    }

    TEST(StringCalculatorTestSuite,add_InputStringWithMultiCharDelimiter_ignoreThatNumberIsExpected){
    string input="//[***]\n8***2***3";
    int expectedValue=13;
    int actualValue=Add(input);
    ASSERT_EQ(actualValue,expectedValue);
    }

    TEST(StringCalculatorTestSuite,add_InputStringWithMultiDelimiter_ignoreThatNumberIsExpected){
    string input="//[*][%]\n4*2%3";
    int expectedValue=9;
    int actualValue=Add(input);
    ASSERT_EQ(actualValue,expectedValue);
    }

    TEST(StringCalculatorTestSuite,add_InputStringWithMultipleMultiDelimiter_ignoreThatNumberIsExpected){
    string input="//[**][%^]\n4**1%^9";
    int expectedValue=14;
    int actualValue=Add(input);
    ASSERT_EQ(actualValue,expectedValue);
    }
