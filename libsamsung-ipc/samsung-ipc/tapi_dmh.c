/**
 * This file is part of libsamsung-ipc.
 *
 * Copyright (C) 2012 KB <kbjetdroid@gmail.com>
 *
 * Implemented as per the Mocha AP-CP protocol analysis done by Dominik Marszk
 *
 * libsamsung-ipc is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * libsamsung-ipc is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with libsamsung-ipc.  If not, see <http://www.gnu.org/licenses/>.
 */

#include <radio.h>
#include <tapi_packet.h>
#include <tapi_dmh.h>

/*
 * All the TAPI dmh handling will be done here
 *
 */

void tapi_dmh_handler(unsigned short tapiDmhType, unsigned int tapiDmhLength, char *tapiDmhData)
{
	struct tapiRequest tx_packet;

	struct modem_io request;
    unsigned char *frame;
    unsigned char *payload;
    int frame_length;

    switch(tapiDmhType)
    {
    case 0x01:
    	break;
    default:
    	break;
    }
}
