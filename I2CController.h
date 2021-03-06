/*
 *   Copyright (C) 2002-2004,2007-2009,2011-2013,2015-2017 by Jonathan Naylor G4KLX
 *   Copyright (C) 1999-2001 by Thomas Sailor HB9JNX
 *
 *   This program is free software; you can redistribute it and/or modify
 *   it under the terms of the GNU General Public License as published by
 *   the Free Software Foundation; either version 2 of the License, or
 *   (at your option) any later version.
 *
 *   This program is distributed in the hope that it will be useful,
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *   GNU General Public License for more details.
 *
 *   You should have received a copy of the GNU General Public License
 *   along with this program; if not, write to the Free Software
 *   Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 */

#pragma once

#if defined(__linux__)

#include "SerialController.h"

class CI2CController : public CSerialController {
public:
	CI2CController(const std::string& device, unsigned int speed, unsigned int address = 0x22U, bool assertRTS = false);
	virtual ~CI2CController();

	virtual bool open() override;

	virtual int read(unsigned char* buffer, unsigned int length) override;

	virtual int write(const unsigned char* buffer, unsigned int length) override;

private:
	unsigned int m_address;
};
#endif
