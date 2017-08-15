/** @defgroup flash_file FLASH
 *
 * @ingroup STM32F0xx
 *
 * @brief <b>libopencm3 STM32F05x FLASH</b>
 *
 * @version 1.0.0
 *
 * @author @htmlonly &copy; @endhtmlonly 2013
 * Frantisek Burian <BuFran@seznam.cz>
 *
 * @date 14 January 2014
 *
 * For the STM32F05x, accessing FLASH memory is described in
 * section 3 of the STM32F05x Reference Manual.
 *
 * FLASH memory may be used for data storage as well as code, and may be
 * programmatically modified. Note that for firmware upload the STM32F1xx
 * provides a built-in bootloader in system memory that can be entered from a
 * running program.
 *
 * FLASH must first be unlocked before programming. In this module a write to
 * FLASH is a blocking operation until the end-of-operation flag is asserted.
 *
 * @note: don't forget to lock it again when all operations are complete.
 *
 * LGPL License Terms @ref lgpl_license
 */

/*
 * This file is part of the libopencm3 project.
 *
 * Copyright (C) 2013 Frantisek Burian <BuFran@seznam.cz>
 *
 * This library is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this library.  If not, see <http://www.gnu.org/licenses/>.
 */

/**@{*/

#include <libopencm3/stm32/flash.h>

/*---------------------------------------------------------------------------*/
/** @brief Clear All Status Flags

Program error, end of operation, write protect error, busy.
*/

void flash_clear_status_flags(void)
{
	flash_clear_pgerr_flag();
	flash_clear_eop_flag();
	flash_clear_wrprterr_flag();
	flash_clear_bsy_flag();
}

/*---------------------------------------------------------------------------*/
/** @brief Read All Status Flags

The programming error, end of operation, write protect error and busy flags
are returned in the order of appearance in the status register.

@returns uint32_t. bit 0: busy, bit 2: programming error, bit 4: write protect
error, bit 5: end of operation.
*/

uint32_t flash_get_status_flags(void)
{
	return FLASH_SR & (FLASH_SR_PGERR |
			FLASH_SR_EOP |
			FLASH_SR_WRPRTERR |
			FLASH_SR_BSY);
}

/**@}*/

