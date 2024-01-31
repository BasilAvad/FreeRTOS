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
    // Private data members can be added here if needed

public:
    adc();          // Constructor
    ~adc();         // Destructor
    void adc_dma_Init();
    float adc_read(int channel);
};

#ifdef __cplusplus
} // extern "C"
#endif

#endif
