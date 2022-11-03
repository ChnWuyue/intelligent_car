//
// Created by 伍申鑫 on 2022/11/3.
//
#include"intelligent_car.h"

void SetCarInfo() {

    ofstream fout("car.txt");
    while (!cin.eof()) {
        string num, dp, chassisModel, wheelbase, wheelbase1, clearance, radius, driveForm,
                maximun, tireModel, tireSize, AGXModel, AI, CUDA, CORE, memory, storage, cameraModel,
                camera, RGBresolution, RGBframe, FOV, deepFrame, radarModel, channel, testRange, power,
                gyroscopeModel, manufacturer, screenSize, screenModel, parameter, powerSupply, charge;
        cout << "请输入小车编号：" << endl;
        cin >> num;
        cout << "请输入底盘编号：" << endl;
        cin >> dp;
        cout << "请输入底盘型号：" << endl;
        getchar();
        getline(cin, chassisModel);
        cout << "请输入底盘轴距：" << endl;
        cin >> wheelbase;
        cout << "请输入底盘轮距：" << endl;
        cin >> wheelbase1;
        cout << "请输入底盘最小离地间隙：" << endl;
        cin >> clearance;
        cout << "请输入底盘最小转弯半径：" << endl;
        cin >> radius;
        cout << "请输入底盘驱动形式：" << endl;
        cin >> driveForm;
        cout << "请输入底盘最大行程：" << endl;
        cin >> maximun;
        cout << "请输入底盘轮胎型号：" << endl;
        cin >> tireModel;
        cout << "请输入底盘轮胎尺寸：" << endl;
        cin >> tireSize;
        cout << "请输入AGX套件型号：" << endl;
        getchar();
        getline(cin, AGXModel);
        cout << "请输入AGX套件AI：" << endl;
        getchar();
        getline(cin, AI);
        cout << "请输入AGX套件CUDA：" << endl;
        cin >> CUDA;
        cout << "请输入AGX套件Tensor CORE：" << endl;
        cin >> CORE;
        cout << "请输入AGX套件显存：" << endl;
        cin >> memory;
        cout << "请输入AGX套件存储：" << endl;
        cin >> storage;
        cout << "请输入双目摄像头型号：" << endl;
        getchar();
        getline(cin, cameraModel);
        cout << "请输入双目摄像头的摄像头：" << endl;
        cin >> camera;
        cout << "请输入双目摄像头RGB帧分辨率：" << endl;
        cin >> RGBresolution;
        cout << "请输入双目摄像头RGB帧率：" << endl;
        cin >> RGBframe;
        cout << "请输入双目摄像头FOV：" << endl;
        cin >> FOV;
        cout << "请输入双目摄像头深度帧率：" << endl;
        cin >> deepFrame;
        cout << "请输入多线激光雷达型号：" << endl;
        cin >> radarModel;
        cout << "请输入多线激光雷达通道数：" << endl;
        cin >> channel;
        cout << "请输入多线激光雷达测试范围：" << endl;
        cin >> testRange;
        cout << "请输入多线激光雷达功耗：" << endl;
        cin >> power;
        cout << "请输入9轴陀螺仪型号：" << endl;
        cin >> gyroscopeModel;
        cout << "请输入9轴陀螺仪厂家：" << endl;
        cin >> manufacturer;
        cout << "请输入液晶显示屏尺寸：" << endl;
        cin >> screenSize;
        cout << "请输入液晶显示屏型号：" << endl;
        cin >> screenModel;
        cout << "请输入电池模块参数：" << endl;
        cin >> parameter;
        cout << "请输入电池模块对外供电：" << endl;
        cin >> powerSupply;
        cout << "请输入电池模块充电时长：" << endl;
        cin >> charge;

    }
    fout.close();
}

void Wheel::setWheelType(const string &wheelType) {
    wheel_type = wheelType;
}

void Wheel::setSize(const string &size) {
    Wheel::size = size;
}

Wheel::Wheel() {};

void Wheel::print() {
    cout << "i)轮胎（4个）" << endl
         << "i.型号：" << this->wheel_type << endl
         << "ii.尺寸：" << this->size << endl;
}

void Wheel::save() {
    ofstream fout;
    fout.open("wheel.txt", ios::app);
    fout << this->size << " " << this->wheel_type << " ";
    fout.close();
}

void Chassis::setId(const string &id) {
    Chassis::id = id;
}

void Chassis::setType(const string &type) {
    Chassis::type = type;
}

void Chassis::setWheelBase(const string &wheelBase) {
    wheel_base = wheelBase;
}

void Chassis::setTread(const string &tread) {
    Chassis::tread = tread;
}

void Chassis::setMinimumGroundClearance(const string &minimumGroundClearance) {
    minimum_ground_clearance = minimumGroundClearance;
}

void Chassis::setMinimumTurningRadius(const string &minimumTurningRadius) {
    minimum_turning_radius = minimumTurningRadius;
}

void Chassis::setDriveType(const string &driveType) {
    drive_type = driveType;
}

void Chassis::setMaximumRide(const string &maximumRide) {
    maximum_ride = maximumRide;
}

void Chassis::setWheels(const Wheel &wheels) {
    Chassis::wheels = wheels;
}

Chassis::Chassis() {};

void AGX::setType(const string &type) {
    AGX::type = type;
}

void AGX::setAi(const string &ai) {
    AI = ai;
}

void AGX::setCudaCore(const string &cudaCore) {
    CUDA_core = cudaCore;
}

void AGX::setTensorCore(const string &tensorCore) {
    tensor_core = tensorCore;
}

void AGX::setVram(const string &vram) {
    VRAM = vram;
}

void AGX::setMemory(const string &memory) {
    AGX::memory = memory;
}

AGX::AGX(const string &type, const string &ai, const string &cudaCore, const string &tensorCore, const string &vram,
         const string &memory) : type(type), AI(ai), CUDA_core(cudaCore), tensor_core(tensorCore), VRAM(vram),
                                 memory(memory) {}

void BinocularCamera::setType(const string &type) {
    BinocularCamera::type = type;
}

void BinocularCamera::setCamera(const string &camera) {
    BinocularCamera::camera = camera;
}

void BinocularCamera::setRgbResolution(const string &rgbResolution) {
    RGB_resolution = rgbResolution;
}

void BinocularCamera::setRgbFrameRate(const string &rgbFrameRate) {
    RGB_frame_rate = rgbFrameRate;
}

void BinocularCamera::setFov(const string &fov) {
    FOV = fov;
}

void BinocularCamera::setDepthFrameRate(const string &depthFrameRate) {
    depth_frame_rate = depthFrameRate;
}

BinocularCamera::BinocularCamera(const string &type, const string &camera, const string &rgbResolution,
                                 const string &rgbFrameRate, const string &fov, const string &depthFrameRate) : type(
        type), camera(camera), RGB_resolution(rgbResolution), RGB_frame_rate(rgbFrameRate), FOV(fov), depth_frame_rate(
        depthFrameRate) {}

void MultilineLidar::setType(const string &type) {
    MultilineLidar::type = type;
}

void MultilineLidar::setChannelsNum(const string &channelsNum) {
    channels_num = channelsNum;
}

void MultilineLidar::setRange(const string &range) {
    MultilineLidar::range = range;
}

void MultilineLidar::setPowerDissipation(const string &powerDissipation) {
    power_dissipation = powerDissipation;
}


MultilineLidar::MultilineLidar(const string &type, const string &channelsNum, const string &range,
                               const string &powerDissipation) : type(type), channels_num(channelsNum), range(range),
                                                                 power_dissipation(powerDissipation) {}

void Gyroscope_9axis::setType(const string &type) {
    Gyroscope_9axis::type = type;
}

void Gyroscope_9axis::setFactory(const string &factory) {
    Gyroscope_9axis::factory = factory;
}

Gyroscope_9axis::Gyroscope_9axis(const string &type, const string &factory) : type(type), factory(factory) {}

void LCD::setType(const string &type) {
    LCD::type = type;
}

void LCD::setSize(const string &size) {
    LCD::size = size;
}

LCD::LCD(const string &type, const string &size) : type(type), size(size) {}

void Battery::setParameter(const string &parameter) {
    Battery::parameter = parameter;
}

void Battery::setPower(const string &power) {
    Battery::power = power;
}

void Battery::setChargeTime(const string &chargeTime) {
    charge_time = chargeTime;
}

Battery::Battery(const string &parameter, const string &power, const string &chargeTime) : parameter(parameter),
                                                                                           power(power),
                                                                                           charge_time(chargeTime) {}

void IntelligentCar::setId(const string &id) {
    IntelligentCar::id = id;
}

void MultilineLidar::addSubscribe(Chassis *chassis) {
    chassisList.push_back(chassis);
}

void MultilineLidar::notify(const std::string &events) {
    for (auto &it: chassisList) {
        Chassis::update(events);
    }
}

MultilineLidar::MultilineLidar() {

}


void Chassis::update(std::string events) {

    if (std::equal(events.begin(), events.end(), "前方")) {
        std::cout << "后退" << endl;
    } else if (std::equal(events.begin(), events.end(), "右前方")) {
        std::cout << "左转" << endl;
    } else {
        std::cout << "右转" << endl;
    }
}

Chassis::Chassis(const string &id, const string &type, const string &wheelBase, const string &tread,
                 const string &minimumGroundClearance, const string &minimumTurningRadius, const string &driveType,
                 const string &maximumRide, const Wheel &wheels) {

}
