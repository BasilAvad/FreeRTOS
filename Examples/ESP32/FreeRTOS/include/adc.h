#ifndef H_ADC_L
#define H_ADC_L

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