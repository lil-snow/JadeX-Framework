#include "jx/core/logger.h"

#include <stdio.h>
#include <stdarg.h>

b8 jx_log_init()
{
	// TODO: implement file logging
}

b8 jx_log_shutdown()
{
	// TODO: 
}

void jx_log_output(logseverity severity, const char* message, ...)
{
	const char* level_names[6] = { "FATAL", "ERROR", "WARN", "INFO", "DEBUG", "TRACE" };

	char
}