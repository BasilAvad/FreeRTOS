#include <Arduino.h>
#include <Arduino_FreeRTOS.h>
#define StackSize 64
float adc = 0.0f;
void analogReadTask(void *pvParameter);
void analogWriteTask(void *pvParameter);
void setup()
{
  Serial.begin(9600);
  pinMode(A0, INPUT);
  xTaskCreate(analogReadTask, "analogReadTask", StackSize, NULL, 1, NULL);
  xTaskCreate(analogWriteTask, "analogWriteTask", StackSize, NULL, 2, NULL);
}
void loop()
{
}

void analogReadTask(void *pvParameter)
{
  for (;;)
  {
    Serial.println("Task analogReadTask is running");
    adc = analogRead(A0);
    vTaskDelay(20 / portTICK_PERIOD_MS);
  }
}
void analogWriteTask(void *pvParameter)
{
  for (;;)
  {
    Serial.println("Task analogWriteTask is running");
    vTaskDelay(25 / portTICK_PERIOD_MS);
  }
}