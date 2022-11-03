//
// Created by 伍申鑫 on 2022/10/21.
//
// 虽c++建议尽量将数据成员申明为私有
// 但此类具有大量私有字段，且不需校验或加锁等额外操作的
// 并仅对该字段做单纯的取值、赋值操作，
// 故分析后直接将字段定义为public。
// Describe by wuyue on 2022/10/21.
//
//
#ifndef INTELLIGENT_CAR_STUDENT_H
#define INTELLIGENT_CAR_STUDENT_H
#pragma once

#include<string>
#include<iostream>
#include<fstream>

using namespace std;

/**
 * 学生信息
 */
class Student {
public:
    /**
     * 学号
     */
    string id;

    /**
     * 学号
     */
    string name;
public:
    void setId(const string &id);

    void setName(const string &name);

    Student();

    Student(const string &id, const string &name);

    /**
   * 打印信息
   */
    void print();

    /**
     * 保存到文件
     */
    void save();
};

void SetStudentInfo();

#endif //INTELLIGENT_CAR_STUDENT_H
