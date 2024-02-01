<<<<<<< HEAD
/* Author : Basil AVAD
 *
 * This ESP32 code is released in the public ate domain
 * Dont forget to change the direction librarys when you use the project in another PC.
 */
=======
>>>>>>> parent of 6c7183d (Including an open source license into project)
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
