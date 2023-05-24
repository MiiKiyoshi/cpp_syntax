#include <iostream>
#include <string>
using namespace std;

class company {
private:
    string name;
    string type;
    int profit;
    int count;
    int standard;

public:
    void setname(string tempname);
    string getname();

    void settype(string temptype);
    string gettype();

    void setprofit(int tempprofit);
    int getprofit();

    void setcount(int tempcount);
    int getcount();

    void proc_bonus();
    int getstandard();
    void output();
};

void company::setname(string tempname) {
    name = tempname;
}

string company::getname() {
    return name;
}

void company::settype(string temptype) {
    type = temptype;
}

string company::gettype() {
    return type;
}

void company::setprofit(int tempprofit) {
    if (tempprofit > 10000) {
        profit = tempprofit;
    }
    else {
        cout << "이번 분기 영업이익은 적자입니다." << endl;
    }
}

int company::getprofit() {
    return profit;
}

void company::setcount(int tempcount) {
    if (tempcount > 100) {
        count = tempcount;
        cout << "대기업입니다." << endl;
    }
    else if (tempcount <= 100) {
        count = tempcount;
        cout << "중소기업입니다." << endl;
    }
}

int company::getcount() {
    return count;
}

void company::proc_bonus() {
    standard = profit / count;
}

int company::getstandard() {
    return standard;
}

class employee {
private:
    string name;
    string rank;
    int personalprofit;
    double bonus;

public:
    void setname(string tempname);
    string getname();

    void setrank(int temprank);
    string getrank();

    void setpersonalprofit(int temppersonalprofit);
    int getpersonalprofit();

    void calc_bonus(company* companyPtr);
    double getbonus();
    void output();
};

void employee::setname(string tempname) {
    name = tempname;
}

string employee::getname() {
    return name;
}

void employee::setrank(int temprank) {
    switch (temprank) {
    case 1:
        rank = "주임";
        break;
    case 2:
        rank = "대리";
        break;
    case 3:
        rank = "과장";
        break;
    case 4:
        rank = "부장";
        break;
    default:
        cout << "올바르지 않은 등급입니다. 다시 입력하세요." << endl;
    }
}

string employee::getrank() {
    return rank;
}

void employee::setpersonalprofit(int temppersonalprofit) {
    personalprofit = temppersonalprofit;
}

int employee::getpersonalprofit() {
    return personalprofit;
}

void employee::calc_bonus(company* companyPtr) {
    if (personalprofit >= companyPtr->getstandard()) {
        bonus = personalprofit * 0.01;
    }
    else {
        bonus = 0;
    }
}

double employee::getbonus() {
    return bonus;
}

int main() {
    company myCompany;
    myCompany.setname("ABC 회사");
    myCompany.settype("기술");
    myCompany.setprofit(50000);
    myCompany.setcount(150);
    myCompany.proc_bonus();

    employee myEmployee;
    myEmployee.setname("이진일");
    myEmployee.setrank(1);
    myEmployee.setpersonalprofit(15000);
    myEmployee.calc_bonus(&myCompany);

    cout << "회사 이름: " << myCompany.getname() << endl;
    cout << "직원 이름: " << myEmployee.getname() << endl;
    cout << "직원 등급: " << myEmployee.getrank() << endl;
    cout << "직원 보너스: " << myEmployee.getbonus() << endl;

    return 0;
}
