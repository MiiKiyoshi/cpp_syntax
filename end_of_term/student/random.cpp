#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

void init_random() //시드 값을 현재 시간으로 설정
{
  std::srand(static_cast<unsigned int>(std::time(nullptr)));
}

std::string str_random(const int len) //주어진 길이(len)의 랜덤 문자열을 생성하여 반환 (대소문자 알파벳과 숫자)
{
  std::string s;
  static const char alphanum[] =
    "0123456789"
    "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
    "abcdefghijklmnopqrstuvwxyz";

  for (int i = 0; i < len; ++i) {
    s += alphanum[std::rand() % (sizeof(alphanum) - 1)];
  }
  return s;
}

int num_random(const int max) //0부터 주어진 최댓값(max)까지의 랜덤한 숫자를 생성하여 반환
{
  if (max <= 0) {
    std::cout << "오류: max는 0보다 커야 합니다." << std::endl;
    return -1; // 오류를 나타내는 값을 반환합니다.
  }

  int n = std::rand() % (max + 1);
  return n;
}

std::string grade_random() //A, B, C, D, F 학점 중에서 랜덤하게 선택하여 반환하고, '+'를 랜덤하게 붙이거나 붙이지 않음
{
    std::string grades[] = {"A", "B", "C", "D", "F"};
    int index = rand() % 5;
    std::string grade = grades[index];

    // 'F' 학점인 경우 '+'를 붙이지 않음
    if (grade != "F" && rand() % 2 == 0) {
        grade += "+";
    }

    return grade;
}
