// 派生Account1.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include<string>
using namespace std;
class Account {
private:
     string accnumber;
     string accname;
public:
    Account(string number,string name):accnumber(number),accname(name){}
    void showAccount() {
        cout << "账号:" << accnumber << "姓名:" << accname << endl;
    }
};
class CreditAccount :public Account {
private:
    double credit;
public:
    CreditAccount(string number, string name, double cr) :Account(number, name) {
        credit = cr;
    }
    void display() {
        showAccount();
        cout << "信用额度：" << credit << endl;
    }
};

int main()
{
    CreditAccount a("190254086","zhangsan", 20000.34);
     a.display();
    return 0;

}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
