#include <stdio.h>
#include "pico/stdlib.h"
#include "hardware/gpio.h"

#define GPIO 2

#define LED1 5
#define LED2 19
int main() {
    stdio_init_all();
    gpio_init(GPIO);
    gpio_set_dir(GPIO, false);
    gpio_init(LED1);
    gpio_set_dir(LED1,true);
    gpio_init(LED2);
    gpio_set_dir(LED2,true);

    while (1) {
        if(gpio_get(GPIO) ==true)
        {
            gpio_put(LED1,true);    
        }
        else{
            gpio_put(LED2,true);
        }
    }
}



