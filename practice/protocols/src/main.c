#include<stdio.h>
#include"uart.h"
#include"i2c.h"
#include"spi.h"
#include"adc.h"
#include"ardino.h"
#include"esp32.h"
#include"stm.h"

void main(){

    printf("Main function\n");
    uart();
    i2c();
    spi();
    adc();
    ardino_uno();
    esp32_worm();
    stmF1();
}