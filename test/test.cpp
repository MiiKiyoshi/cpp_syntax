#include <iostream>
#include <string>
using namespace std;

class vehicle{
private:
	string name;
	int carbon;
public:
	vehicle();

	void setname(string temp);
	string getname();

	void setcarbon(int temp);
	int getcarbon();
};

vehicle::vehicle() {
	carbon = 0;
}

void vehicle::setname(string temp) {
	name = temp;
}
string vehicle::getname() {
	return name;
}
void vehicle::setcarbon(int temp) {
	if (temp > 1 && temp < 200)
		carbon = temp;
	else
		cout << "잘못된 입력입니다." << endl;
}
int vehicle::getcarbon() {
	return carbon;
}

class company {
private:
	string name;
	vehicle car[3];
	int carbonsum;
public:
	company();
	void input();
	void netcarbon();
};

company::company() {
	carbonsum = 0;
}

void company::input() {
	cout << "회사 이름: "; cin >> name; cout << endl;

	string vehiname;
	int carbon;

	for (int i = 0; i < 3; i++) {
		vehiname = "";
		cout << "자동차 " << i + 1 << "번" << " 차량명: "; cin >> vehiname;
		car[i].setname(vehiname);

		carbon = 0;
		cout << "자동차 " << i + 1 << "번" << " 이산화탄소 배출량: "; cin >> carbon;
		car[i].setcarbon(carbon);

		cout << endl;
	}
}

void company::netcarbon(){
	cout << "명지자동차가 생산하는 차량은 다음과 같다." << endl;
	int sum = 0;

	for (int i = 0; i < 3; i++) {
		cout << "자동차 " << i + 1 << "번 " << car[i].getname() << "의 이산화탄소 배출량은 " << car[i].getcarbon() << "입니다" << endl;
		sum += car[i].getcarbon();
	}

	carbonsum = sum;

	cout << endl << "명지자동차가 생산한 차량의 총 이산화탄소 배출량은 " << carbonsum << "입니다." << endl;
}


int main(void) {
	cout << "학과: 전자공학과 학번: 60191792 이름: 공기정" << endl << endl;

	company c1;
	c1.input();
	c1.netcarbon();

}
