#pragma once
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
#include<string>
#include<fstream>
#include<iostream>

using namespace std;


/**
 * 轮胎
 */
class Wheel {
public:
    /**
    * 型号：公路轮、麦克纳姆轮
    */
    string wheel_type;

    /**
     * ii.	尺寸：175mm
     */
    string size;
public:
    Wheel(const string &wheelType, const string &size);

    void setWheelType(const string &wheelType);

    void setSize(const string &size);

    /**
     * 打印信息
     */
    void print();

    /**
     * 保存到文件
     */
    void save();
};

/**
 * 底盘
 */
class Chassis {
public:
    /**
     * 编号：dp打头的8位数字+字母
     */
    string id;

    /**
     * 型号：SCOUT MINI
     */
    string type;

    /**
     * 轴距：451mm
     */
    string wheel_base;

    /**
     * 轮距：490mm
     */
    string tread;
    /**
     * 最小离地间隙：115mm
     */
    string minimum_ground_clearance;

    /**
     * 最小转弯半径：0m
     */
    string minimum_turning_radius;

    /**
     * 驱动形式：四轮四驱
     */
    string drive_type;

    /**
     * 最大行程：10KM
     */
    string maximum_ride;

    /**
     * 轮胎（4个）
     *     i.型号：公路轮、麦克纳姆轮
     *     ii.尺寸：175mm
     */
    Wheel wheels;

public:
    void setId(const string &id);

    void setType(const string &type);

    void setWheelBase(const string &wheelBase);

    void setTread(const string &tread);

    void setMinimumGroundClearance(const string &minimumGroundClearance);

    void setMinimumTurningRadius(const string &minimumTurningRadius);

    void setDriveType(const string &driveType);

    void setMaximumRide(const string &maximumRide);

    void setWheels(const Wheel &wheels);

    Chassis(const string &id, const string &type, const string &wheelBase, const string &tread,
            const string &minimumGroundClearance, const string &minimumTurningRadius, const string &driveType,
            const string &maximumRide, const Wheel &wheels);

    /**
   * 打印信息
   */
    void print();

    /**
     * 保存到文件
     */
    void save();
};


/**
 * AGX套件
 */
class AGX {
public:
    /**
    * 型号：AGX Xavier
    */
    string type;

    /**
     * AI：32 TOPS
     */
    string AI;

    /**
     * CUDA核心：512
     */
    string CUDA_core;

    /**
     * Tensor CORE：64
     */
    string tensor_core;

    /**
     * 显存：32G
     */
    string VRAM;

    /**
     * 存储：32G
     */
    string memory;
public:
    void setType(const string &type);

    void setAi(const string &ai);

    void setCudaCore(const string &cudaCore);

    void setTensorCore(const string &tensorCore);

    void setVram(const string &vram);

    void setMemory(const string &memory);

    AGX(const string &type, const string &ai, const string &cudaCore, const string &tensorCore, const string &vram,
        const string &memory);

    /**
   * 打印信息
   */
    void print();

    /**
     * 保存到文件
     */
    void save();
};

/**
 * 双目摄像头
 */
class BinocularCamera {
public:
    /**
     * 型号：RealSense D435i
     */
    string type;

    /**
     * 摄像头：D430
     */
    string camera;

    /**
     * RGB帧分辨率：1920 * 1080
     */
    string RGB_resolution;

    /**
     * RGB帧率：30
     */
    string RGB_frame_rate;

    /**
     * FOV：87 * 58
     */
    string FOV;

    /**
     * 深度帧率：90
     */
    string depth_frame_rate;
public:
    void setType(const string &type);

    void setCamera(const string &camera);

    void setRgbResolution(const string &rgbResolution);

    void setRgbFrameRate(const string &rgbFrameRate);

    void setFov(const string &fov);

    void setDepthFrameRate(const string &depthFrameRate);

    BinocularCamera(const string &type, const string &camera, const string &rgbResolution, const string &rgbFrameRate,
                    const string &fov, const string &depthFrameRate);

    /**
   * 打印信息
   */
    void print();

    /**
     * 保存到文件
     */
    void save();
};


/**
 * 多线激光雷达
 */
class MultilineLidar {
public:
    /**
     * 型号：RS-Helios-16p
     */
    string type;

    /**
     * 通道数：16
     */
    string channels_num;

    /**
     * 测试范围：100m
     */
    string range;

    /**
     * 功耗：8W
     */
    string power_dissipation;
public:
    void setType(const string &type);

    void setChannelsNum(const string &channelsNum);

    void setRange(const string &range);

    void setPowerDissipation(const string &powerDissipation);

    MultilineLidar(const string &type, const string &channelsNum, const string &range, const string &powerDissipation);

    /**
   * 打印信息
   */
    void print();

    /**
     * 保存到文件
     */
    void save();
};

/**
 * 9轴陀螺仪
 */
class Gyroscope_9axis {
public:
    /**
     * 型号：CH110
     */
    string type;

    /**
     * 厂家：NXP
     */
    string factory;
public:
    void setType(const string &type);

    void setFactory(const string &factory);

    Gyroscope_9axis(const string &type, const string &factory);

    /**
   * 打印信息
   */
    void print();

    /**
     * 保存到文件
     */
    void save();
};

/**
 * 液晶显示屏
 */
class LCD {
public:
    /**
     * 型号：super
     */
    string type;

    /**
     * 尺寸：11.6
     */
    string size;
public:
    void setType(const string &type);

    void setSize(const string &size);

    LCD(const string &type, const string &size);

    /**
   * 打印信息
   */
    void print();

    /**
     * 保存到文件
     */
    void save();
};

/**
 * 电池模块
 */
class Battery {
public:
    /**
     * 参数：24V/15Ah
     */
    string parameter;

    /**
     * 对外供电：24V
     */
    string power;

    /**
     * 充电时长：2H
     */
    string charge_time;
public:
    void setParameter(const string &parameter);

    void setPower(const string &power);

    void setChargeTime(const string &chargeTime);

    Battery(const string &parameter, const string &power, const string &chargeTime);

    /**
   * 打印信息
   */
    void print();

    /**
     * 保存到文件
     */
    void save();
};


class IntelligentCar {
public:
    /**
     * 编号：dp打头的8位数字+字母
     */
    string id;

    /**
     * 底盘
     */
    Chassis chassis;

    /**
     * AGX套件
     */
    AGX agx;

    /**
     * 双目摄像头（1个）
     */
    BinocularCamera binocular_camera;

    /**
     * 多线激光雷达（1个）
     */
    MultilineLidar multiline_lidar;

    /**
     * 9轴陀螺仪（1个）
     */
    Gyroscope_9axis gyroscope_9axis;

    /**
     * 液晶显示屏（1个）
     */
    LCD lcd;

    /**
     * 电池模块（1个）
     */
    Battery battery;

public:
    void setId(const string &id);

    IntelligentCar(const string &id, const Chassis &chassis, const AGX &agx, const BinocularCamera &binocularCamera,
                   const MultilineLidar &multilineLidar, const Gyroscope_9axis &gyroscope9Axis, const LCD &lcd,
                   const Battery &battery) : id(id), chassis(chassis), agx(agx), binocular_camera(binocularCamera),
                                             multiline_lidar(multilineLidar), gyroscope_9axis(gyroscope9Axis), lcd(lcd),
                                             battery(battery) {}

    /**
     * 打印信息
     */
    void print();

    /**
     * 保存到文件
     */
    void save();
};


void SetCarInfo();
