#include <Arduino.h>
#include <freertos/FreeRTOS.h>
#include <freertos/task.h>

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

void setup()
{
  Serial.begin(115200);
  xTaskCreatePinnedToCore(adcReadTask, "adcReadTask", 1000, NULL, configMAX_PRIORITIES - 1, NULL, 0);     // Task run on core 0
  xTaskCreatePinnedToCore(pwmOutputTask, "pwmOutputTask", 1000, NULL, configMAX_PRIORITIES - 2, NULL, 1); // Task run on core 1
  xTaskCreatePinnedToCore(i2cTask, "i2cTask", 1000, NULL, configMAX_PRIORITIES - 3, NULL, 0);
  xTaskCreatePinnedToCore(wiFiTask, "wiFiTask", 1000, NULL, configMAX_PRIORITIES - 4, NULL, 1);
}

void loop()
{
  /*
     It must be empty
  */
}
