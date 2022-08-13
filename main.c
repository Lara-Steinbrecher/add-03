#include <stdio.h>
#include "pico/stdlib.h"
#include "hardware/gpio.h"
#include "hardware/adc.h"

int main() {
  stdio_init_all();
  adc_init();
  adc_gpio_init(26);
  adc_select_input(0);
  while (1){
    float valoradc = adc_read();
    float vr = (valoradc * 3.3)/ 4095.0;
    float rt = (vr*10000)/(3.3-vr);
    printf (" La resistencia es de: %.2f \n", rt );
    float t = 3950.0/((log(rt/10000)) + (3950.0/298));
    t = t - 273.15;
    printf ("La temperatura es de: %.2f \n", t);
    sleep_ms(800);
  }
}
