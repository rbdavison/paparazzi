#ifndef BOOZ_IMU_ASPIRIN_ARCH_H
#define BOOZ_IMU_ASPIRIN_ARCH_H

#include "booz_imu.h"

#include "led.h"

extern void booz_imu_aspirin_arch_init(void);
extern void adxl345_write_to_reg(uint8_t addr, uint8_t val);
extern void adxl345_clear_rx_buf(void);
extern void adxl345_start_reading_data(void);


#endif /* BOOZ_IMU_ASPIRIN_ARCH_H */
