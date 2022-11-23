//
// Created by 伍申鑫 on 2022/10/21.
//
#include"intelligent_car.h"
#include"student.h"
#include <future>


void task2();

void task3();

void task4();


int main() {
    //task2();
    //task3();
    task4();


}

void task4() {
    //数据定义
    string a;
    future<string> operate;
    promise<string> val;
    string temp;
    auto *c1 = new Chassis();
    auto *m = new MultilineLidar();
    m->addSubscribe(c1);


    //开始模拟
    cout << "请输入指令(开启雷达与底盘)" << endl;
    cin >> a;
    string state;


    //启动指令
    if (std::equal(a.begin(), a.end(), "开启雷达与底盘")) {
        cout << "成功开启雷达与底盘" << endl;

        //雷达进程
        thread mul_thread([&]() {
            auto count = 100;
            while (count > 0) {
                cout << "请输入模拟时障碍方向" << endl;
                cin >> temp;
                //校验
                if (temp != "前方" && temp != "右前方" && temp != "左前方" && temp != "停止") {
                    cout << "输入有误，无法执行操作" << endl;
                    count--;
                    continue;
                }
                state = temp;
                if (state != "停止") {
                    cout << state << "有障碍" << endl;
                } else {
                    cout << state << endl;
                }
                count--;
            }
        });

        //轮胎进程
        thread print_state([&]() {
            while (true) {
                m->notify(state);
                this_thread::sleep_for(chrono::seconds(1));
            }
        });

        mul_thread.join();
        print_state.join();
    } else {
        cout << "over" << endl;
    }

    //节约资源，调用100次结束。



}


void task2() {

    SetCarInfo();
    SetStudentInfo();


    int tag = 1;
    ifstream fin2("student-car.txt");
    int n = 0;
    while (n < tag * 45) {
        string textline;
        getline(fin2, textline);
        cout << textline << endl;
        n++;
    }
    fin2.close();
    while (!cin.eof()) {
        string a;
        cin >> a;
        if (a == "n") {
            if (tag == 10) {
                cout << "已经到底了" << endl;
            } else {
                tag++;
                ifstream fin2("main.txt");
                n = 0;
                while (n < tag * 45) {
                    string textline;
                    getline(fin2, textline);
                    if (n >= (tag - 1) * 45 & n < tag * 45) {
                        cout << textline << endl;
                    }
                    n++;
                }
                fin2.close();
            }
        }
        if (a == "p") {
            if (tag == 1) {
                cout << "已经到顶了" << endl;
            } else {
                tag--;
                ifstream fin2("main.txt");
                n = 0;
                while (n < tag * 45) {
                    string textline;
                    getline(fin2, textline);
                    if (n >= (tag - 1) * 45 & n < tag * 45) {
                        cout << textline << endl;
                    }
                    n++;
                }
                fin2.close();
            }
        }
    }
}

void task3() {

    auto *c1 = new Chassis();
    auto *m = new MultilineLidar();

    m->addSubscribe(c1);
    m->notify("前方");
    m->notify("右前方");
    m->notify("左前方");
    auto *c2 = new Chassis();
    m->addSubscribe(c2);
    m->notify("前方");
    m->notify("右前方");
    m->notify("左前方");
}