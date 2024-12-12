#ifndef CLASS_H
#define CLASS_H

#include <string>
#include <iostream>
#include <algorithm>


class BigInt{
    private:
        std::string value; 
        bool sign;
        
    public:
    //constructors
        BigInt(); 
        ~BigInt();
        BigInt(bool sign, std::string str);
        BigInt(std::string str);
        BigInt(const char* str);
        BigInt(int num);
        BigInt(short num);
        BigInt(long num);
        BigInt(char num);
        BigInt(const BigInt& obj); 

        

    //methods

        const std::string& get_value() const;
        void set_value(const std::string& str);
        const bool get_sign() const;
        void set_sign(const bool s);
        BigInt gcd(const BigInt& other) const;
        BigInt lcm(const BigInt& other) const;


    //operators
        friend BigInt operator+(const BigInt& left, const BigInt& right);
        friend BigInt operator-(const BigInt& left, const BigInt& right);
        friend BigInt operator*(const BigInt& left, const BigInt& right);
        friend BigInt operator/(const BigInt& left, const BigInt& right);
        friend BigInt operator%(const BigInt& left, const BigInt& right);
        friend bool operator==(const BigInt& left, const BigInt& right);
        friend std::ostream& operator<<(std::ostream& out, const BigInt& num);
        friend std::istream& operator>>(std::istream& in, BigInt& num);

        BigInt operator-(); //unary minus

        BigInt operator=(const BigInt& other);
        BigInt operator=( short num);
        BigInt operator=( char num);
        BigInt operator=( int num);
        BigInt operator=( long num);

        operator std::string() const;
        operator int() const;
        operator short() const;
        operator long() const;
        operator char() const;
};
//+++++++++++++++++++++
BigInt operator+(int left, const BigInt& right);
BigInt operator+(std::string left, const BigInt& right);
BigInt operator+(short left, const BigInt& right);
BigInt operator+(long left, const BigInt& right);
BigInt operator+(char left, const BigInt& right);
BigInt operator+(const BigInt& left, int right);
BigInt operator+(const BigInt& left, std::string right);
BigInt operator+(const BigInt& left, long right);
BigInt operator+(const BigInt& left, short right);
BigInt operator+(const BigInt& left, char right);

//---------------------
BigInt operator-(int left, const BigInt& right);
BigInt operator-(std::string left, const BigInt& right);
BigInt operator-(short left, const BigInt& right);
BigInt operator-(long left, const BigInt& right);
BigInt operator-(char left, const BigInt& right);
BigInt operator-(const BigInt& left, int right);
BigInt operator-(const BigInt& left, std::string right);
BigInt operator-(const BigInt& left, long right);
BigInt operator-(const BigInt& left, short right);
BigInt operator-(const BigInt& left, char right);

//************/
BigInt operator*(const BigInt& left, int right);
BigInt operator*(const BigInt& left, std::string right);
BigInt operator*(const BigInt& left, short right);
BigInt operator*(const BigInt& left, long right);
BigInt operator*(const BigInt& left, char right);
BigInt operator*(char left, const BigInt& right);
BigInt operator*(long left, const BigInt& right);
BigInt operator*(short left, const BigInt& right);
BigInt operator*(std::string left, const BigInt& right);
BigInt operator*(int left, const BigInt& right);

/////////////
BigInt operator/(const BigInt& left, int right);
BigInt operator/(const BigInt& left, std::string right);
BigInt operator/(const BigInt& left, short right);
BigInt operator/(const BigInt& left, long right);
BigInt operator/(const BigInt& left, char right);
BigInt operator/(char left, const BigInt& right);
BigInt operator/(long left, const BigInt& right);
BigInt operator/(short left, const BigInt& right);
BigInt operator/(std::string left, const BigInt& right);
BigInt operator/(int left, const BigInt& right);

//%%%%%%%%%%%%%%
BigInt operator%(const BigInt& left, int right);
BigInt operator%(const BigInt& left, std::string right);
BigInt operator%(const BigInt& left, short right);
BigInt operator%(const BigInt& left, long right);
BigInt operator%(const BigInt& left, char right);
BigInt operator%(char left, const BigInt& right);
BigInt operator%(long left, const BigInt& right);
BigInt operator%(short left, const BigInt& right);
BigInt operator%(std::string left, const BigInt& right);
BigInt operator%(int left, const BigInt& right);

//== == == == 
bool operator==(const BigInt& left, int right);
bool operator==(const BigInt& left, std::string right);
bool operator==(const BigInt& left, const char* right);
bool operator==(const BigInt& left, short right);
bool operator==(const BigInt& left, long right);
bool operator==(const BigInt& left, char right);
bool operator==(char left, const BigInt& right);
bool operator==(long left, const BigInt& right);
bool operator==(short left, const BigInt& right);
bool operator==(std::string left, const BigInt& right);
bool operator==(const char* left, const BigInt& right);
bool operator==(int left, const BigInt& right);

std::string stringDif(const std::string& big, const std::string& small);
std::string stringSum(const std::string& adin, const std::string& dva);
std::string stringMultiply(const std::string& adin, const std::string& dva);
std::pair<std::string, std::string> stringDivision(const std::string& dividend, const std::string& divisor);
bool firstBigger(const std::string& adin, const std::string& dva);

#endif