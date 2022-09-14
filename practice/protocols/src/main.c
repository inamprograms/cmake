#include<stdio.h>
#include"uart.h"
#include"i2c.h"
#include"spi.h"
#include"adc.h"

void main(){

    printf("Main function\n");
    uart();
    i2c();
    spi();
    adc();

    



}