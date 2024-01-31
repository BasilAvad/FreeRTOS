#ifndef H_ADC_L
#define H_ADC_L
// User Includes
#include <driver/adc.h>
#include <driver/gpio.h>
#include <driver/dac.h>
//
class adc
{
private:
    /* data */
public:
    adc(/* args */);
    void adc_dma_Init();
    float adc_read(int channel);
    ~adc();
};
#endif