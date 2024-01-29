
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

 * [ESP32](https://github.com/BasilAvad/FreeRTOS/tree/main/Examples/ESP32/FreeRTOS).

 ```bash

  1- Support all ESP32 dual-core and single-core. نظام التشغيل يدعم المتحكمات الدقيقة من هذا النوع مع الأنتباه الى تحديث الكود بحسب عدد الأنوية الموجودة في المتحكم
  2- ESP32 has two 32-bit Tensilica Xtensa LX6 microprocessors which makes it a powerful dual-core (core0 and core1) microcontroller. It is available in two variants single-core and 
     dual- core. But the dual-core variant is more popular because there is no significant price difference.


 ```
ESP32 function block diagram.


![ESP32-Block-Diagram](https://github.com/BasilAvad/FreeRTOS/assets/69681817/dc83c3b1-b488-4d12-b306-ee6c3d44a592)


## Installation

Use the Arduino IDE [Arduino IDE](https://www.arduino.cc/en/software) or PlatformIO IDE in VS Code [PlatformIO IDE](https://platformio.org) to update this code.

```cpp
git clone https://github.com/BasilAvad/FreeRTOS/tree/main

```

## Usage

* Include and Call the header files  inside your project.

```cpp
#include <freertos/FreeRTOS.h>
#include <freertos/task.h>
```

* Task function declarations.

```cpp
void core0Task(void* parameter);
void core1Task(void* parameter);
```

*  Creat Task functions core0Task and core1Task.

```cpp
void core0Task(void*parameter)
{
  for(;;)
  {
   /* your code hear*/
   //for example: digitalWrite(pin4 , LOW);
   vTaskDelay(15/portTICK_PERIOD_MS);
  }
}

void core1Task(void*parameter)
{
  for(;;)
  {
   /* your code hear  */
   //for example: digitalWrite(pin4 , HIGH);
   vTaskDelay(10/portTICK_PERIOD_MS);
  }
}
```
*  Initialize and creat the task functions inside the setup() function.
```cpp
void setup()
{

                    Task function , Task name , Stack size   Task priority   , Task handle  Task core (0 or 1 for ESP32)
                           ^            ^         ^               ^                  ^         ^
                           |            |         |               |                  |         |
 xTaskCreatePinnedToCore(core0Task ,"core0Task",NULL,configMAX_PRIORITIES - 1,      NULL  ,    0);


 xTaskCreatePinnedToCore(core1Task ,"core1Task",NULL,configMAX_PRIORITIES - 1,      NULL  ,    1);


}
```
## FreeRTOS Library Test and Result


Period to  Frequency             ![DOcfewC6QbGabF7mbxCL_frequencyformula](https://github.com/BasilAvad/FreeRTOS/assets/69681817/4eaa119b-8f84-425e-9601-0dd5f6ed9c17)
                      
 * ⬜ .


 * 🟥 .
   
Simple test on [Arduino](https://github.com/BasilAvad/FreeRTOS/tree/main/Examples/Arduino/ArduinoFreeRTOS) project in the image below you can see the pin outs signal in the seam time.

![Logic 2  Logic - Connected   Session 9  1_30_2024 12_11_16 AM](https://github.com/BasilAvad/FreeRTOS/assets/69681817/a328ba22-5423-4b05-bcf0-fd172b7ae8bb)

## Contributing



Pull requests are welcome. For major changes, please open an issue first to discuss what you would like to change.



Please make sure to update tests as appropriate.

