/** @addtogroup flash_defines
 *
 */
/*
 * This file is part of the libopencm3 project.
 *
 * Copyright (C) 2017 Josef Gajdusek <atx@atx.name>
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

/** @cond */
#ifdef LIBOPENCM3_FLASH_H
/** @endcond */
#ifndef LIBOPENCM3_FLASH_COMMON_F01234_H
#define LIBOPENCM3_FLASH_COMMON_F01234_H
/**@{*/

/* --- Function prototypes ------------------------------------------------- */

BEGIN_DECLS

void flash_clear_status_flags(void);
void flash_program_half_word(uint32_t address, uint16_t data);

END_DECLS
/**@}*/

#endif
/** @cond */
#else
#warning "flash_common_f01.h should not be included directly,"
#warning "only via flash.h"
#endif
/** @endcond */

