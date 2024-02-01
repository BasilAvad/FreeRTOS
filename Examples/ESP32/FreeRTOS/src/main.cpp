#include <Arduino.h>
#include<adc.h>
#define StackSize ((unsigned short)256)

void adcReadTask(void *pvParameter);
void pwmOutputTask(void *pvParameter);
void i2cTask(void *pvParameter);
void wiFiTask(void *pvParameter);
void setup()
{
  Serial.begin(115200);
  adc::adc1_Init();
  xTaskCreatePinnedToCore(adcReadTask, "adcReadTask", StackSize, NULL, configMAX_PRIORITIES - 1, NULL, 0);     // Task run on core 0
  xTaskCreatePinnedToCore(pwmOutputTask, "pwmOutputTask", StackSize, NULL, configMAX_PRIORITIES - 2, NULL, 1); // Task run on core 1
  xTaskCreatePinnedToCore(i2cTask, "i2cTask", StackSize, NULL, configMAX_PRIORITIES - 3, NULL, 0);
  xTaskCreatePinnedToCore(wiFiTask, "wiFiTask", StackSize, NULL, configMAX_PRIORITIES - 4, NULL, 1);
}

void loop()
{
  /*
     It must be empty
  */
}
void adcReadTask(void *pvParameter)
{
  for (;;)
  {
    Serial.println("TASK 1");
    /*
       Write your code hear
    */
    vTaskDelay(20 / portTICK_PERIOD_MS); // Wait for 20 millisecond
  }
}
void pwmOutputTask(void *pvParameter)
{
  for (;;)
  {
    Serial.println("TASK 2");
    /*
       Write your code hear
    */
    vTaskDelay(10 / portTICK_PERIOD_MS); // Wait for 10 millisecond
  }
}
void i2cTask(void *pvParameter)
{
  for (;;)
  {
    Serial.println("TASK 3");
    /*
       Write your code hear
    */
    vTaskDelay(24 / portTICK_PERIOD_MS); // Wait for 24 millisecond
  }
}
void wiFiTask(void *pvParameter)
{
  for (;;)
  {
    Serial.println("TASK 4");
    /*
       Write your code hear
    */
    vTaskDelay(34 / portTICK_RATE_MS); // Wait for 34 millisecond
  }
}
