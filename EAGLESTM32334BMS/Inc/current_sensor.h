/*
 * current_sensor.h
 *
 *  Created on: 10 ago 2018
 *      Author: Utente
 */

#ifndef CURRENT_SENSOR_H_
#define CURRENT_SENSOR_H_
#include "stm32f3xx_hal.h"
#include "stm32f3xx_hal_adc.h"

#define SENSOR_OFFSET 2068 // ADC at 0A - see static int MEASUREMENT_ScaleAmps(int rawval)



uint32_t Get_Amps_Value(uint32_t *Vout,uint16_t offset);
static int MEASUREMENT_ScaleAmps1(int rawval,uint16_t sensor_offset);
static int MEASUREMENT_ScaleAmps(int rawval);
float Current_Calibration_Offset(ADC_HandleTypeDef hadc1);
#endif /* CURRENT_SENSOR_H_ */
