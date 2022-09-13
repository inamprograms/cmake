// 20-07-2022 (PROJECT 2)
#include<stdio.h>
#include"uart.h"
#include"spi.h"
#include"i2c.h"
#include "adc.h"

int main(){
    printf("Main Program.\n");
    uart_fun();
    spi_fun();
    i2c_fun();
    adc_fun();
    

    return 0;
}