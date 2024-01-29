#include <Arduino.h>
#include <Arduino_FreeRTOS.h>
#define StackSize 64
#define adcChannel_1 A0
#define pwmPin 5
#define digitalPin 13
float adc = 0.0f;
void analogReadTask(void *pvParameter);
void analogWriteTask(void *pvParameter);
void digitalWriteTask(void *pvParameter);
void setup()
{
  Serial.begin(9600);
  pinMode(adcChannel_1, INPUT);
  pinMode(pwmPin, OUTPUT);
  pinMode(digitalPin, OUTPUT);
  xTaskCreate(analogReadTask, "analogReadTask", StackSize, NULL, 1, NULL);
  xTaskCreate(analogWriteTask, "analogWriteTask", StackSize, NULL, 2, NULL);
  xTaskCreate(digitalWriteTask, "digitalWriteTask", StackSize, NULL, 1, NULL);
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
    analogWrite(pwmPin, 200);
    vTaskDelay(25 / portTICK_PERIOD_MS);
  }
}
void digitalWriteTask(void *pvParameter)
{
  while (1)
  {
    Serial.println("Task digitalWriteTask is running");
    digitalWrite(digitalPin, HIGH);
    vTaskDelay(100 / portTICK_PERIOD_MS);
    digitalWrite(digitalPin, LOW);
  }
}