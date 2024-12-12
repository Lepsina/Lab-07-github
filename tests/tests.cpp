#include <iostream>
#include <string>
#include "../class.h"

#include <gtest/gtest.h>

// ArithmeticTests ArithmeticTests

TEST(arithmeticTests, SumTest) {
  BigInt a, b;

  a = "1003"; b = "410";
  EXPECT_EQ(a + b, (1003 + 410));
  EXPECT_EQ(b + a, (410 + 1003));
  a = "84736"; b = "1234";
  EXPECT_EQ(a + b, (84736 + 1234));
  EXPECT_EQ(b + a, (1234 + 84736));
  a = "15000000000000"; b = "1234";
  EXPECT_EQ(a + b, ("15000000001234"));
  EXPECT_EQ(b + a, ("15000000001234"));
}
TEST(arithmeticTests, DifTest) {
  BigInt a, b;

  a = "1003"; b = "410";
  EXPECT_EQ(a - b, (1003 - 410));
  EXPECT_EQ(b - a, (410 - 1003));
  a = "84736"; b = "1234"; 
  EXPECT_EQ(a - b, (84736 - 1234));
  EXPECT_EQ(b - a, (1234 - 84736));
  a = "15000000000000"; b = "1234";
  EXPECT_EQ(a - b, ("14999999998766"));
  EXPECT_EQ(b - a, ("-14999999998766"));
}
TEST(arithmeticTests, DivTest) {
  BigInt a, b;

  a = "1003"; b = "410";
  EXPECT_EQ(a / b, (1003 / 410));
  EXPECT_EQ(-a / b, (-1003 / 410));
  EXPECT_EQ(-a / -b, (-1003 / -410));
  EXPECT_EQ(a / -b, (1003 / -410));
  EXPECT_EQ(b / a, (410 / 1003));
  EXPECT_EQ(-b / a, (-410 / 1003));
  EXPECT_EQ(-b / -a, (-410 / -1003));
  EXPECT_EQ(b / -a, (410 / -1003));
  a = "84736"; b = "1234";
  EXPECT_EQ(a / b, (84736 / 1234));
  EXPECT_EQ(-a / b, (-84736 / 1234));
  EXPECT_EQ(-a / -b, (-84736 / -1234));
  EXPECT_EQ(a / -b, (84736 / -1234));
  EXPECT_EQ(b / a, (1234 / 84736));
  EXPECT_EQ(-b / a, (-1234 / 84736));
  EXPECT_EQ(-b / -a, (-1234 / -84736));
  EXPECT_EQ(b / -a, (1234 / -84736));
  a = "1000000000000000000000", b = "3";
  EXPECT_EQ(a / b, ("333333333333333333333"));
  EXPECT_EQ(-a / b, ("-333333333333333333333"));
  EXPECT_EQ(-a / -b, ("333333333333333333333"));
  EXPECT_EQ(a / -b, ("-333333333333333333333"));
  EXPECT_EQ(b / a, (0));
  EXPECT_EQ(-b / a, (0));
  EXPECT_EQ(-b / -a, (0));
  EXPECT_EQ(b / -a, (0));
}
TEST(arithmeticTests, ModTest) {
  BigInt a, b;
  a = "1003"; b = "410";
  EXPECT_EQ(a % b, (1003 % 410));
  EXPECT_EQ(-a % b, (-1003 % 410));
  EXPECT_EQ(-a % -b, (-1003 % -410));
  EXPECT_EQ(a % -b, (1003 % -410));
  EXPECT_EQ(b % a, (410 % 1003));
  EXPECT_EQ(-b % a, (-410 % 1003));
  EXPECT_EQ(-b % -a, (-410 % -1003));
  EXPECT_EQ(b % -a, (410 % -1003));
  a = "84736"; b = "1234"; 
  EXPECT_EQ(a % b, (84736 % 1234));
  EXPECT_EQ(-a % b, (-84736 % 1234));
  EXPECT_EQ(-a % -b, (-84736 % -1234));
  EXPECT_EQ(a % -b, (84736 % -1234));
  EXPECT_EQ(b % a, (1234 % 84736));
  EXPECT_EQ(-b % a, (-1234 % 84736));
  EXPECT_EQ(-b % -a, (-1234 % -84736));
  EXPECT_EQ(b % -a, (1234 % -84736));
  a = "1000000000000000000000", b = "3";
  EXPECT_EQ(a % b, (1));
  EXPECT_EQ(-a % b, (-1));
  EXPECT_EQ(-a % -b, (-1));
  EXPECT_EQ(a % -b, (1));
  EXPECT_EQ(b % a, (3));
  EXPECT_EQ(-b % a, (-3));
  EXPECT_EQ(-b % -a, (-3));
  EXPECT_EQ(b % -a, (3));
}
TEST(arithmeticTests, MultiplyTest) {
  BigInt a, b;
  a = "1003"; b = "410"; 
  EXPECT_EQ(a * b, (1003 * 410));
  EXPECT_EQ(-a * b, (-1003 * 410));
  EXPECT_EQ(-a * -b, (-1003 * -410));
  EXPECT_EQ(a * -b, (1003 * -410));
  EXPECT_EQ(b * a, (410 * 1003));
  EXPECT_EQ(-b * a, (-410 * 1003));
  EXPECT_EQ(-b * -a, (-410 * -1003));
  EXPECT_EQ(b * -a, (410 * -1003));
  a = "84736"; b = "1234"; 
  EXPECT_EQ(a * b, (84736 * 1234));
  EXPECT_EQ(-a * b, (-84736 * 1234));
  EXPECT_EQ(-a * -b, (-84736 * -1234));
  EXPECT_EQ(a * -b, (84736 * -1234));
  EXPECT_EQ(b * a, (1234 * 84736));
  EXPECT_EQ(-b * a, (-1234 * 84736));
  EXPECT_EQ(-b * -a, (-1234 * -84736));
  EXPECT_EQ(b * -a, (1234 * -84736));
  a = "1000000000000000000000", b = "3";
  EXPECT_EQ(a * b, ("3000000000000000000000"));
  EXPECT_EQ(-a * b, ("-3000000000000000000000"));
  EXPECT_EQ(-a * -b, ("3000000000000000000000"));
  EXPECT_EQ(a * -b, ("-3000000000000000000000"));
  EXPECT_EQ(b * a, ("3000000000000000000000"));
  EXPECT_EQ(-b * a, ("-3000000000000000000000"));
  EXPECT_EQ(-b * -a, ("3000000000000000000000"));
  EXPECT_EQ(b * -a, ("-3000000000000000000000"));
  
}

// GCD GCD GCDG CDGCGDCGDGCGDCDGCDGDGD
TEST(GCDTests, ZeroTest){
  BigInt a = 0;
  EXPECT_EQ(a.gcd(12), 12);
  EXPECT_EQ(a.gcd(89), 89);
  EXPECT_EQ(a.gcd(0), 0);
}
TEST(GCDTests, PositiveTest){
  BigInt a = 16;
  EXPECT_EQ(a.gcd(9), 1);
  EXPECT_EQ(a.gcd(16), 16);
  EXPECT_EQ(a.gcd(32), 16);
  EXPECT_EQ(a.gcd(127), 1);
  EXPECT_EQ(a.gcd(8), 8);
}
TEST(GCDTests, NegativeTest){
  BigInt a = 16;
  EXPECT_EQ(a.gcd(-9), 1);
  EXPECT_EQ(a.gcd(-16), 16);
  EXPECT_EQ(a.gcd(-32), 16);
  EXPECT_EQ(a.gcd(-127), 1);
  EXPECT_EQ(a.gcd(-8), 8);
  EXPECT_EQ((-a).gcd(-8), 8);
  EXPECT_EQ((-a).gcd(-9), 1);
  EXPECT_EQ((-a).gcd(-32), 16);
  EXPECT_EQ((-a).gcd(-127), 1);
  EXPECT_EQ((-a).gcd(8), 8);
}
TEST(GCDTests, BigNumberTest){
  BigInt a = 42557659200; //6 * 12 * 36 * 14 * 19 * 5 * 12345
  EXPECT_EQ(a.gcd(12345), 12345);
  EXPECT_EQ(a.gcd(6 * 12), 6 * 12);
  EXPECT_EQ(a.gcd(127), 1);
  EXPECT_EQ(a.gcd(12345 * 12), 12345 * 12);
}

//LCMLCMLCMLCMLCM
TEST(LCMTests, PositiveTest){
  BigInt a = 8;
  EXPECT_EQ(a.lcm(8), 8);
  EXPECT_EQ(a.lcm(12), 24);
  EXPECT_EQ(a.lcm(4), 8);
  EXPECT_EQ(a.lcm(10), 40);
}
TEST(LCMTests, NegativeTest){
  BigInt a = 8;
  EXPECT_EQ(a.lcm(-8), 8);
  EXPECT_EQ(a.lcm(-12), 24);
  EXPECT_EQ((-a).lcm(8), 8);
  EXPECT_EQ((-a).lcm(12), 24);
  EXPECT_EQ((-a).lcm(-8), 8);
  EXPECT_EQ((-a).lcm(-12), 24);
}
TEST(LCMTests, BigNumberTest){
  BigInt a = "87126341";
  EXPECT_EQ(a.lcm(BigInt("362")), BigInt("174252682"));

}

int main(int argc, char **argv) {


  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
 


}
