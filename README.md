
<h1 align="center"> Free Real Time Operating System (RTOS) </h1>

<h1 align="center"> نظام التشغيل في الوقت الفعلي مخصص للأنظمة الضمنية </h1>

##    Explanation of Free RTOS                   شرح و تعريف 

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

 * [Arduino](https://github.com/BasilAvad/FreeRTOS/tree/main/Examples/Arduino/ArduinoFreeRTOS).

 ```bash

  1- Support all Arduino dual-core and single-core. نظام التشغيل يدعم المتحكمات الدقيقة من هذا النوع مع الأنتباه الى تحديث الكود بحسب عدد الأنوية الموجودة في المتحكم

  2- 

 ```

 * [ESP32](https://github.com/BasilAvad).

 ```bash

  1- Support all ESP32 dual-core and single-core. نظام التشغيل يدعم المتحكمات الدقيقة من هذا النوع مع الأنتباه الى تحديث الكود بحسب عدد الأنوية الموجودة في المتحكم
  2- ESP32 has two 32-bit Tensilica Xtensa LX6 microprocessors which makes it a powerful dual-core (core0 and core1) microcontroller. It is available in two variants single-core and 
     dual- core. But the dual-core variant is more popular because there is no significant price difference.


 ```
ESP32 function block diagram.

![ESP32-Dual-Core-Processor](https://github.com/BasilAvad/FreeRTOS/assets/69681817/92d6bad5-2191-4f55-a0cd-61b358d72498)

## Installation

Use the Arduino IDE [Arduino IDE](https://www.arduino.cc/en/software) or PlatformIO IDE in VS Code [PlatformIO IDE](https://platformio.org) to update this code.

```bash

git clone https://github.com/BasilAvad


```

## Usage

* Include and Call the header file  inside your project.

```cpp


```

* Create an object of .

```cpp


```

*  Call a member function of the object in .

```cpp


```

## FreeRTOS Library Test and Result

 * ⬜ .

 * 🟥 .
