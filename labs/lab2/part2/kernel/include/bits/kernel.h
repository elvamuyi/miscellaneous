/*
 * kernel.h: Defines memory layout address
 *
 * Author: Alvin Zheng <dongxuez@andrew.cmu.edu>
 * Date:   2013/10/24  12:00pm
 */

#ifndef BITS_KERNEL_H
#define BITS_KERNEL_H

#define SWI_VECTOR 0x08
#define SDRAM_LOW 0xa0000000
#define SDRAM_HIGH 0xa3ffffff
#define FlashROM_LOW 0x0
#define FlashROM_HIGH 0x00ffffff
#define USER_APP_ADDR  0xa2000000
#define U_Boot 0xa3f00000

#endif /* BITS_KERNEL_H */
