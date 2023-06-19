#include <Arduino.h>
#include <Arduino_FreeRTOS.h>

void analogReadTask(void *pvParameter);
void analogWriteTask(void *pvParameter);
void setup()
{
  Serial.begin(9600);
  xTaskCreate(analogReadTask, "analogReadTask", 64, NULL, 1, NULL);
  xTaskCreate(analogWriteTask, "analogWriteTask", 64, NULL, 2, NULL);
}
void loop()
{
}

void analogReadTask(void *pvParameter)
{
  for (;;)
  {
    Serial.println("Task analogReadTask is running");
    vTaskDelay(20 / portTICK_PERIOD_MS);
  }
}
void analogWriteTask(void *pvParameter)
{
  for (;;)
  {
    Serial.println("Task analogWriteTask is running");
    vTaskDelay(20 / portTICK_PERIOD_MS);
  }
}