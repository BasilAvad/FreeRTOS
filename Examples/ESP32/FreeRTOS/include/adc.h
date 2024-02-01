#ifndef H_ADC_L
#define H_ADC_L
// User Includes
#include <driver/adc.h>
#include <driver/gpio.h>
#include <driver/dac.h>


#ifdef __cplusplus
extern "C"
{
#endif

class adc
{
private:
public:
    adc();
    ~adc();
    void adc_Init();
    float adc_read(float *_data);
};

#ifdef __cplusplus
} // extern "C"
#endif

#endif
