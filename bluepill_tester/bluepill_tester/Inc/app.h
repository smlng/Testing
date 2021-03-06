/*
 * app.h
 *
 *  Created on: May 16, 2018
 *      Author: kevinweiss
 */

#ifndef APP_H_
#define APP_H_

#include <stdint.h>
#include <errno.h>

uint32_t get_reg_size();
error_t read_reg(uint32_t index, uint8_t *data);
error_t write_cfg_reg(uint32_t index, uint8_t data);
error_t write_user_reg(uint32_t index, uint8_t data);

error_t execute_reg_change();

#endif /* APP_H_ */
