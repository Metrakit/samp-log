#pragma once

#include "sdk.hpp"

#define AMX_DECLARE_NATIVE(native) \
	cell AMX_NATIVE_CALL native(AMX *amx, cell *params)

#define AMX_DEFINE_NATIVE(native) \
	{#native, Native::native},


namespace Native 
{
	AMX_DECLARE_NATIVE(CreateLog);
	AMX_DECLARE_NATIVE(DestroyLog);
	AMX_DECLARE_NATIVE(SetLogLevel);
	AMX_DECLARE_NATIVE(IsLogLevel);
	AMX_DECLARE_NATIVE(Log);
	
};
