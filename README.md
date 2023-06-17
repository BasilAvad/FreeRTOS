
<h1 align="center"> Free Real Time Operating System (RTOS) </h1>

<h1 align="center"> نظام التشغيل في الوقت الفعلي مخصص للأنظمة الضمنية </h1>

## Explanation of moving average formula

*  In Arabic.

```bash
التعريف: هو نظام التشغيل في الوقت الفعلي مصمم خصيصا للأنظمة الضمنية. يوفر نواة خفيفة الوزن و فعالة تسمح لك بإنشاء تطبيقات متعددة المهام على وحدات التحكم الدقيقة و الأجهزة المضمنة الأخرى.
 
- فيما يلي بعض الميزات و الفوائد الرئيسية ل FreeRTOS اللأنظمة الضمنية.
1- Multitasking  ->  تعدد المهام
2- Task Scheduling -> جدولة المهام 
3- Define the Priorities -> تحديد الأولويات , يستخدم النظام جدولة وقائية قائمة على الأولوية لإدارة تنفيذ المهمة 
4- Task Synchronization and Communication -> مزامنة المهام و الإتصال 
5- Memory Management -> إدارة الذاكرة
6- Timer and Tic Management 
7- Portability -> قابلية التبديل 

```

-> Read More About: [Free RTOS ](https://en.wikipedia.org/wiki/FreeRTOS).

## Explanation and distribution of projects

 * [Arduino](https://github.com/BasilAvad/MovingAverage/tree/main/Examples/arduino).

 ```bash

  1- Support all arduino boards contain ADC.

  2- Support all Node MCU boards contain ADC like (ESP8266).

 ```

 * [ESP32](https://github.com/BasilAvad/MovingAverage/tree/main/Examples/esp32).

 ```bash

  1- Support all ESP32 boards contain ADC.

 ```

## Installation

Use the Arduino IDE [Arduino IDE](https://www.arduino.cc/en/software) or PlatformIO IDE in VS Code [PlatformIO IDE](https://platformio.org) to update this code.

```bash



git clone https://github.com/BasilAvad



```

## Usage

* Include and Call the header file  inside your project.

```cpp


```

* Create an object of MovingAverage using the constructor.

```cpp


```

*  Call a member function of the object in the loop function.

```cpp


```

## Moving Average Library Test and Result

 * 🟦 The blue line is sensor raw data.

 * 🟥 The red line is the sensor data with a moving average.
