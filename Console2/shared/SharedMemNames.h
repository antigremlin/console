#pragma once

//////////////////////////////////////////////////////////////////////////////

class SharedMemNames {

	public:

		static wformat formatConsoleParams;
		static wformat formatInfo;
		static wformat formatBuffer;
		static wformat formatNewConsoleSize;

};

//////////////////////////////////////////////////////////////////////////////


//////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////


//////////////////////////////////////////////////////////////////////////////

wformat SharedMemNames::formatConsoleParams(L"Console2_params_%1%");
wformat SharedMemNames::formatInfo(L"Console2_consoleInfo_%1%");
wformat SharedMemNames::formatBuffer(L"Console2_consoleBuffer_%1%");
wformat SharedMemNames::formatNewConsoleSize(L"Console2_newConsoleSize_%1%");

//////////////////////////////////////////////////////////////////////////////