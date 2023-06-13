#include <iostream>
#include <string>
#include "random.h"

int main() {
    init_random(); // 난수 초기화

    std::string randomString = str_random(10);
    std::cout << "랜덤 문자열: " << randomString << std::endl;

    int randomNum = num_random(100);
    std::cout << "랜덤 숫자: " << randomNum << std::endl;

    std::string randomGrade = grade_random();
    std::cout << "랜덤 학점: " << randomGrade << std::endl;

    return 0;
}
