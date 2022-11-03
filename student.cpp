//
// Created by 伍申鑫 on 2022/11/3.
//
#include"student.h"

void SetStudentInfo() {
    ofstream fout("student.txt");
    while (!cin.eof()) {
        string name, id;
        cout << "请输入学生姓名：" << endl;
        cin >> name;
        cout << "请输入学生学号：" << endl;
        cin >> id;
        Student s = {name, id};
        fout << s.id << " " << s.name << endl;
        if (std::equal(s.id.begin(), s.id.end(), "010")) {
            break;
        }
    }
    fout.close();
    ifstream fin("student.txt");
    ifstream fin1("car.txt");
    ofstream fout1("student-car.txt");
    while (!fin.eof() && !fin1.eof()) {
        Student s;
        fin >> s.name >> s.id;
        if (s.name.size() != 0) {
            fout1 << "学生姓名：" << s.name << endl
                  << "学生学号：" << s.id << endl
                  << "小车信息:" << endl;
            int a = 0;
            while (a < 42) {
                string textline;
                getline(fin1, textline);
                fout1 << textline << endl;
                a++;
            }
        }
    }
    fin.close();
    fin1.close();
    fout1.close();
}

void Student::setId(const string &id) {
    Student::id = id;
}

void Student::setName(const string &name) {
    Student::name = name;
}

Student::Student(const string &id, const string &name) : id(id), name(name) {}

void Student::print() {
    cout << "学生姓名：" << name << endl
         << "学生学号：" << id << endl;
}

void Student::save() {
    ofstream fout;
    fout.open("student.txt", ios::app);
    fout << id << " " << name << endl;
    fout.close();
}

Student::Student() = default;
