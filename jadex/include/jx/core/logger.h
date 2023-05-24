#ifndef JX_LOGGER_H_INCLUDE
#define JX_LOGGER_H_INCLUDE

#include "base.h"

typedef enum
{
	logseverity_none = 0,
	logseverity_fatal = 1,
	logseverity_error = 2,
	logseverity_warning = 3,
	logseverity_info = 4,
	logseverity_debug = 5,
	logseverity_trace = 6
} logseverity;

JX_API b8 jx_log_init();
JX_API b8 jx_log_shutdown();

JX_API void jx_log_output(logseverity severity, const char* message, ...);

#define JX_FATAL(message, ...) log_output(logseverity_fatal, mesasge, ##__VA_ARGS__)
#define JX_ERROR(message, ...) log_output(logseverity_error, mesasge, ##__VA_ARGS__)
#define JX_WARN(message, ...) log_output(logseverity_warning, mesasge, ##__VA_ARGS__)
#define JX_INFO(message, ...) log_output(logseverity_info, mesasge, ##__VA_ARGS__)
#define JX_DEBUG(message, ...) log_output(logseverity_debug, mesasge, ##__VA_ARGS__)
#define JX_TRACE(message, ...) log_output(logseverity_trace, mesasge, ##__VA_ARGS__)

#endif