include <stdio.h>
#include "pico/stdlib.h"
#include "hardware/gpio.h"

#define GPIO 2

#define LED1 5
#define LED2 19
void gpio_callback(uint gpio, uint32_t events) {
while (1);
    if(gpio_get(GPIO) ==true):
{
    gpio_put(LED1,false);    
}
else{
    gpio_put(LED2,false);
}

return 0;
}
int main() {
stdio_init_all();
gpio_init(GPIO);
gpio_set_dir(GPIO, false);
gpio_put(GPIO, true);
gpio_put(GPIO, false );
gpio_init(LED1);
gpio_set_dir(LED1,true);
gpio_set_irq_enabled_with_callback(GPIO, GPIO_IRQ_EDGE_RISE, true, &gpio_callback);
gpio_init(LED2);
gpio_set_dir(LED2,true);
}




