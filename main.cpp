//
// Created by 伍申鑫 on 2022/10/21.
//
#include"intelligent_car.h"
#include"student.h"

int main() {
	//SetCarInfo();
	SetStudentInfo();

    int tag = 1;
    ifstream fin2("student-car.txt");
    int n = 0;
    while (n < tag * 45)
    {
        string textline;
        getline(fin2, textline);
        cout << textline << endl;
        n++;
    }
    fin2.close();
    while (!cin.eof())
    {
        string a;
        cin >> a;
        if (a == "n")
        {
            if (tag == 10)
            {
                cout << "已经到底了" << endl;
            }
            else
            {
                tag++;
                ifstream fin2("main.txt");
                n = 0;
                while (n < tag * 45)
                {
                    string textline;
                    getline(fin2, textline);
                    if (n >= (tag - 1) * 45 & n < tag * 45)
                    {
                        cout << textline << endl;
                    }
                    n++;
                }
                fin2.close();
            }
        }
        if (a == "p")
        {
            if (tag == 1)
            {
                cout << "已经到顶了" << endl;
            }
            else
            {
                tag--;
                ifstream fin2("main.txt");
                n = 0;
                while (n < tag * 45)
                {
                    string textline;
                    getline(fin2, textline);
                    if (n >= (tag - 1) * 45 & n < tag * 45)
                    {
                        cout << textline << endl;
                    }
                    n++;
                }
                fin2.close();
            }
        }
    }
}