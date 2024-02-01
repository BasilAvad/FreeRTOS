#include <adc.h>

#define channel_1 37 /*!< ADC1 channel 1 is GPIO37 */
#define ADC_RESOLUTION ADC_WIDTH_12Bit

void adc::adc1_Init()
{
    adc1_config_width(ADC_RESOLUTION);
    adc1_config_channel_atten(ADC1_CHANNEL_1, ADC_ATTEN_11db);
}

float adc::adc_read(float *_data)
{
    _data[0] = adc1_get_raw(ADC1_CHANNEL_1);
    return 0;
}
adc::~adc()
{
}