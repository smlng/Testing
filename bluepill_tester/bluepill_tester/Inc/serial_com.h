/*
 * MIT License
 *
 * Copyright 2018 Kevin Weiss
 *
 * Permission is hereby granted, free of charge, to any person obtaining
 * a copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included
 * in all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */


/*
 * @file serial_com.h
 * @author Kevin Weiss
 * @date 16.05.2018
 * @brief The file for managing basic serial communication.
 *
 * This initializes and runs the serial communication protocol for interfacing
 * to registers.  It used the STM HAL and a UART for the IO.  It also uses DMA.
 */

#ifndef SERIAL_COM_H_
#define SERIAL_COM_H_

/* Defines -------------------------------------------------------------------*/
/*
 * @brief	Enables interrupts.
 *
 */
//TODO: Implement
#define EN_INT

/*
 * @brief	Disables interrupts.
 *
 */
//TODO: Implement
#define DIS_INT

/* Public Functions ----------------------------------------------------------*/
/**
 * @brief Initializes and attaches all the pointers for communication.
 *
 * @retval errno defined error code.
 */
error_t app_com_init(UART_HandleTypeDef *huart, uint8_t *p_reg, uint32_t size);

/**
 * @brief Polls and parses the rx and tx buffers.
 *
 * @retval errno defined error code.
 */
error_t app_com_poll();

//void debug_print_com(char *str);

#endif /* SERIAL_COM_H_ */