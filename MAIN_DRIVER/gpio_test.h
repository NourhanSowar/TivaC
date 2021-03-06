/*
 * gpio_test.h
 *
 *  Created on: Feb 24, 2020
 *      Author: TARGET
 */
#include <reg_gpio.h>


#ifndef GPIO_TEST_H_
#define GPIO_TEST_H_


typedef enum
{
      PORTA,
      PORTB,
      PORTC,
      PORTD,
      PORTE,
      PORTF
}port_select;

typedef enum
{
   AHB,
   APB

}bus_select;

//*********************************************************************************//

typedef enum
{
    GPIODIR_IN,
    GPIODIR_OUT
}pin_mode ;


typedef enum
{
    GPIOAFSEL_GPIO,
    GPIOAFSEL_ALT
}mode_t;

    //**************************************************************
typedef enum
{
    GPIODR2R_2MA,
    GPIODR4R_4MA,
    GPIODR8R_8MA
}output_rate;


    //***********************************************************
typedef enum
{
   GPIOD_EN,
   GPIO_DIS
}gpio_digital ;

//*********************************************************************************//
    void gpio_init( port_select port , bus_select bus  );
    void gpio_mode (unsigned long int port,unsigned int  pin , gpio_digital enable , mode_t mode    ) ;

    void addresses_reg ( unsigned long int port );

    void port_bus (unsigned long int port  , bus_select bus);
    void gpio_direction (unsigned long int port,unsigned int  pin ,pin_mode direction   ) ;
    void set_pin(   unsigned long int port,   unsigned char pin,   unsigned char mask );
    void clear_pin( unsigned long int port, unsigned char pin, unsigned char mask );
    void driver_strength (unsigned long int port,unsigned int  pin ,output_rate rate  );
    unsigned char GPIORead(unsigned long int port, unsigned char pins );
    void pull_up(unsigned long int port, unsigned char pins );

    void interrrupt_edges ( unsigned long int port, unsigned char pins);

#endif /* GPIO_TEST_H_ */
