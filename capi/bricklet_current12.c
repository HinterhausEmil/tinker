/* ***********************************************************
 * This file was automatically generated on 2012-05-21.      *
 *                                                           *
 * If you have a bugfix for this file and want to commit it, *
 * please fix the bug in the generator. You can find a link  *
 * to the generator git on tinkerforge.com                   *
 *************************************************************/

#include "bricklet_current12.h"

#include <string.h>

#define FUNCTION_GET_CURRENT 1
#define FUNCTION_CALIBRATE 2
#define FUNCTION_IS_OVER_CURRENT 3
#define FUNCTION_GET_ANALOG_VALUE 4
#define FUNCTION_SET_CURRENT_CALLBACK_PERIOD 5
#define FUNCTION_GET_CURRENT_CALLBACK_PERIOD 6
#define FUNCTION_SET_ANALOG_VALUE_CALLBACK_PERIOD 7
#define FUNCTION_GET_ANALOG_VALUE_CALLBACK_PERIOD 8
#define FUNCTION_SET_CURRENT_CALLBACK_THRESHOLD 9
#define FUNCTION_GET_CURRENT_CALLBACK_THRESHOLD 10
#define FUNCTION_SET_ANALOG_VALUE_CALLBACK_THRESHOLD 11
#define FUNCTION_GET_ANALOG_VALUE_CALLBACK_THRESHOLD 12
#define FUNCTION_SET_DEBOUNCE_PERIOD 13
#define FUNCTION_GET_DEBOUNCE_PERIOD 14


typedef void (*current_func_t)(int16_t);

typedef void (*analog_value_func_t)(uint16_t);

typedef void (*current_reached_func_t)(int16_t);

typedef void (*analog_value_reached_func_t)(uint16_t);

typedef void (*over_current_func_t)();

#if defined _MSC_VER || defined __BORLANDC__
	#pragma pack(push)
	#pragma pack(1)
	#define ATTRIBUTE_PACKED
#elif defined __GNUC__
	#define ATTRIBUTE_PACKED __attribute__((packed))
#else
	#error unknown compiler, do not know how to enable struct packing
#endif

typedef struct {
	uint8_t stack_id;
	uint8_t function_id;
	uint16_t length;
} ATTRIBUTE_PACKED GetCurrent_;

typedef struct {
	uint8_t stack_id;
	uint8_t function_id;
	uint16_t length;
	int16_t current;
} ATTRIBUTE_PACKED GetCurrentReturn_;

typedef struct {
	uint8_t stack_id;
	uint8_t function_id;
	uint16_t length;
} ATTRIBUTE_PACKED Calibrate_;

typedef struct {
	uint8_t stack_id;
	uint8_t function_id;
	uint16_t length;
} ATTRIBUTE_PACKED IsOverCurrent_;

typedef struct {
	uint8_t stack_id;
	uint8_t function_id;
	uint16_t length;
	bool over;
} ATTRIBUTE_PACKED IsOverCurrentReturn_;

typedef struct {
	uint8_t stack_id;
	uint8_t function_id;
	uint16_t length;
} ATTRIBUTE_PACKED GetAnalogValue_;

typedef struct {
	uint8_t stack_id;
	uint8_t function_id;
	uint16_t length;
	uint16_t value;
} ATTRIBUTE_PACKED GetAnalogValueReturn_;

typedef struct {
	uint8_t stack_id;
	uint8_t function_id;
	uint16_t length;
	uint32_t period;
} ATTRIBUTE_PACKED SetCurrentCallbackPeriod_;

typedef struct {
	uint8_t stack_id;
	uint8_t function_id;
	uint16_t length;
} ATTRIBUTE_PACKED GetCurrentCallbackPeriod_;

typedef struct {
	uint8_t stack_id;
	uint8_t function_id;
	uint16_t length;
	uint32_t period;
} ATTRIBUTE_PACKED GetCurrentCallbackPeriodReturn_;

typedef struct {
	uint8_t stack_id;
	uint8_t function_id;
	uint16_t length;
	uint32_t period;
} ATTRIBUTE_PACKED SetAnalogValueCallbackPeriod_;

typedef struct {
	uint8_t stack_id;
	uint8_t function_id;
	uint16_t length;
} ATTRIBUTE_PACKED GetAnalogValueCallbackPeriod_;

typedef struct {
	uint8_t stack_id;
	uint8_t function_id;
	uint16_t length;
	uint32_t period;
} ATTRIBUTE_PACKED GetAnalogValueCallbackPeriodReturn_;

typedef struct {
	uint8_t stack_id;
	uint8_t function_id;
	uint16_t length;
	char option;
	int16_t min;
	int16_t max;
} ATTRIBUTE_PACKED SetCurrentCallbackThreshold_;

typedef struct {
	uint8_t stack_id;
	uint8_t function_id;
	uint16_t length;
} ATTRIBUTE_PACKED GetCurrentCallbackThreshold_;

typedef struct {
	uint8_t stack_id;
	uint8_t function_id;
	uint16_t length;
	char option;
	int16_t min;
	int16_t max;
} ATTRIBUTE_PACKED GetCurrentCallbackThresholdReturn_;

typedef struct {
	uint8_t stack_id;
	uint8_t function_id;
	uint16_t length;
	char option;
	uint16_t min;
	uint16_t max;
} ATTRIBUTE_PACKED SetAnalogValueCallbackThreshold_;

typedef struct {
	uint8_t stack_id;
	uint8_t function_id;
	uint16_t length;
} ATTRIBUTE_PACKED GetAnalogValueCallbackThreshold_;

typedef struct {
	uint8_t stack_id;
	uint8_t function_id;
	uint16_t length;
	char option;
	uint16_t min;
	uint16_t max;
} ATTRIBUTE_PACKED GetAnalogValueCallbackThresholdReturn_;

typedef struct {
	uint8_t stack_id;
	uint8_t function_id;
	uint16_t length;
	uint32_t debounce;
} ATTRIBUTE_PACKED SetDebouncePeriod_;

typedef struct {
	uint8_t stack_id;
	uint8_t function_id;
	uint16_t length;
} ATTRIBUTE_PACKED GetDebouncePeriod_;

typedef struct {
	uint8_t stack_id;
	uint8_t function_id;
	uint16_t length;
	uint32_t debounce;
} ATTRIBUTE_PACKED GetDebouncePeriodReturn_;

typedef struct {
	uint8_t stack_id;
	uint8_t function_id;
	uint16_t length;
	int16_t current;
} ATTRIBUTE_PACKED CurrentCallback_;

typedef struct {
	uint8_t stack_id;
	uint8_t function_id;
	uint16_t length;
	uint16_t value;
} ATTRIBUTE_PACKED AnalogValueCallback_;

typedef struct {
	uint8_t stack_id;
	uint8_t function_id;
	uint16_t length;
	int16_t current;
} ATTRIBUTE_PACKED CurrentReachedCallback_;

typedef struct {
	uint8_t stack_id;
	uint8_t function_id;
	uint16_t length;
	uint16_t value;
} ATTRIBUTE_PACKED AnalogValueReachedCallback_;

typedef struct {
	uint8_t stack_id;
	uint8_t function_id;
	uint16_t length;
} ATTRIBUTE_PACKED OverCurrentCallback_;

#if defined _MSC_VER || defined __BORLANDC__
	#pragma pack(pop)
#endif
#undef ATTRIBUTE_PACKED

int current12_get_current(Current12 *current12, int16_t *ret_current) {
	if(current12->ipcon == NULL) {
		return E_NOT_ADDED;
	}

	ipcon_sem_wait_write(current12);

	current12->answer.function_id = FUNCTION_GET_CURRENT;
	current12->answer.length = sizeof(GetCurrentReturn_);
	GetCurrent_ gc;
	gc.stack_id = current12->stack_id;
	gc.function_id = FUNCTION_GET_CURRENT;
	gc.length = sizeof(GetCurrent_);

	ipcon_device_write(current12, (char *)&gc, sizeof(GetCurrent_));

	if(ipcon_answer_sem_wait_timeout(current12) != 0) {
		ipcon_sem_post_write(current12);
		return E_TIMEOUT;
	}

	GetCurrentReturn_ *gcr = (GetCurrentReturn_ *)current12->answer.buffer;
	*ret_current = gcr->current;

	ipcon_sem_post_write(current12);

	return E_OK;
}

int current12_calibrate(Current12 *current12) {
	if(current12->ipcon == NULL) {
		return E_NOT_ADDED;
	}

	ipcon_sem_wait_write(current12);

	Calibrate_ c;
	c.stack_id = current12->stack_id;
	c.function_id = FUNCTION_CALIBRATE;
	c.length = sizeof(Calibrate_);

	ipcon_device_write(current12, (char *)&c, sizeof(Calibrate_));

	ipcon_sem_post_write(current12);

	return E_OK;
}

int current12_is_over_current(Current12 *current12, bool *ret_over) {
	if(current12->ipcon == NULL) {
		return E_NOT_ADDED;
	}

	ipcon_sem_wait_write(current12);

	current12->answer.function_id = FUNCTION_IS_OVER_CURRENT;
	current12->answer.length = sizeof(IsOverCurrentReturn_);
	IsOverCurrent_ ioc;
	ioc.stack_id = current12->stack_id;
	ioc.function_id = FUNCTION_IS_OVER_CURRENT;
	ioc.length = sizeof(IsOverCurrent_);

	ipcon_device_write(current12, (char *)&ioc, sizeof(IsOverCurrent_));

	if(ipcon_answer_sem_wait_timeout(current12) != 0) {
		ipcon_sem_post_write(current12);
		return E_TIMEOUT;
	}

	IsOverCurrentReturn_ *iocr = (IsOverCurrentReturn_ *)current12->answer.buffer;
	*ret_over = iocr->over;

	ipcon_sem_post_write(current12);

	return E_OK;
}

int current12_get_analog_value(Current12 *current12, uint16_t *ret_value) {
	if(current12->ipcon == NULL) {
		return E_NOT_ADDED;
	}

	ipcon_sem_wait_write(current12);

	current12->answer.function_id = FUNCTION_GET_ANALOG_VALUE;
	current12->answer.length = sizeof(GetAnalogValueReturn_);
	GetAnalogValue_ gav;
	gav.stack_id = current12->stack_id;
	gav.function_id = FUNCTION_GET_ANALOG_VALUE;
	gav.length = sizeof(GetAnalogValue_);

	ipcon_device_write(current12, (char *)&gav, sizeof(GetAnalogValue_));

	if(ipcon_answer_sem_wait_timeout(current12) != 0) {
		ipcon_sem_post_write(current12);
		return E_TIMEOUT;
	}

	GetAnalogValueReturn_ *gavr = (GetAnalogValueReturn_ *)current12->answer.buffer;
	*ret_value = gavr->value;

	ipcon_sem_post_write(current12);

	return E_OK;
}

int current12_set_current_callback_period(Current12 *current12, uint32_t period) {
	if(current12->ipcon == NULL) {
		return E_NOT_ADDED;
	}

	ipcon_sem_wait_write(current12);

	SetCurrentCallbackPeriod_ sccp;
	sccp.stack_id = current12->stack_id;
	sccp.function_id = FUNCTION_SET_CURRENT_CALLBACK_PERIOD;
	sccp.length = sizeof(SetCurrentCallbackPeriod_);
	sccp.period = period;

	ipcon_device_write(current12, (char *)&sccp, sizeof(SetCurrentCallbackPeriod_));

	ipcon_sem_post_write(current12);

	return E_OK;
}

int current12_get_current_callback_period(Current12 *current12, uint32_t *ret_period) {
	if(current12->ipcon == NULL) {
		return E_NOT_ADDED;
	}

	ipcon_sem_wait_write(current12);

	current12->answer.function_id = FUNCTION_GET_CURRENT_CALLBACK_PERIOD;
	current12->answer.length = sizeof(GetCurrentCallbackPeriodReturn_);
	GetCurrentCallbackPeriod_ gccp;
	gccp.stack_id = current12->stack_id;
	gccp.function_id = FUNCTION_GET_CURRENT_CALLBACK_PERIOD;
	gccp.length = sizeof(GetCurrentCallbackPeriod_);

	ipcon_device_write(current12, (char *)&gccp, sizeof(GetCurrentCallbackPeriod_));

	if(ipcon_answer_sem_wait_timeout(current12) != 0) {
		ipcon_sem_post_write(current12);
		return E_TIMEOUT;
	}

	GetCurrentCallbackPeriodReturn_ *gccpr = (GetCurrentCallbackPeriodReturn_ *)current12->answer.buffer;
	*ret_period = gccpr->period;

	ipcon_sem_post_write(current12);

	return E_OK;
}

int current12_set_analog_value_callback_period(Current12 *current12, uint32_t period) {
	if(current12->ipcon == NULL) {
		return E_NOT_ADDED;
	}

	ipcon_sem_wait_write(current12);

	SetAnalogValueCallbackPeriod_ savcp;
	savcp.stack_id = current12->stack_id;
	savcp.function_id = FUNCTION_SET_ANALOG_VALUE_CALLBACK_PERIOD;
	savcp.length = sizeof(SetAnalogValueCallbackPeriod_);
	savcp.period = period;

	ipcon_device_write(current12, (char *)&savcp, sizeof(SetAnalogValueCallbackPeriod_));

	ipcon_sem_post_write(current12);

	return E_OK;
}

int current12_get_analog_value_callback_period(Current12 *current12, uint32_t *ret_period) {
	if(current12->ipcon == NULL) {
		return E_NOT_ADDED;
	}

	ipcon_sem_wait_write(current12);

	current12->answer.function_id = FUNCTION_GET_ANALOG_VALUE_CALLBACK_PERIOD;
	current12->answer.length = sizeof(GetAnalogValueCallbackPeriodReturn_);
	GetAnalogValueCallbackPeriod_ gavcp;
	gavcp.stack_id = current12->stack_id;
	gavcp.function_id = FUNCTION_GET_ANALOG_VALUE_CALLBACK_PERIOD;
	gavcp.length = sizeof(GetAnalogValueCallbackPeriod_);

	ipcon_device_write(current12, (char *)&gavcp, sizeof(GetAnalogValueCallbackPeriod_));

	if(ipcon_answer_sem_wait_timeout(current12) != 0) {
		ipcon_sem_post_write(current12);
		return E_TIMEOUT;
	}

	GetAnalogValueCallbackPeriodReturn_ *gavcpr = (GetAnalogValueCallbackPeriodReturn_ *)current12->answer.buffer;
	*ret_period = gavcpr->period;

	ipcon_sem_post_write(current12);

	return E_OK;
}

int current12_set_current_callback_threshold(Current12 *current12, char option, int16_t min, int16_t max) {
	if(current12->ipcon == NULL) {
		return E_NOT_ADDED;
	}

	ipcon_sem_wait_write(current12);

	SetCurrentCallbackThreshold_ scct;
	scct.stack_id = current12->stack_id;
	scct.function_id = FUNCTION_SET_CURRENT_CALLBACK_THRESHOLD;
	scct.length = sizeof(SetCurrentCallbackThreshold_);
	scct.option = option;
	scct.min = min;
	scct.max = max;

	ipcon_device_write(current12, (char *)&scct, sizeof(SetCurrentCallbackThreshold_));

	ipcon_sem_post_write(current12);

	return E_OK;
}

int current12_get_current_callback_threshold(Current12 *current12, char *ret_option, int16_t *ret_min, int16_t *ret_max) {
	if(current12->ipcon == NULL) {
		return E_NOT_ADDED;
	}

	ipcon_sem_wait_write(current12);

	current12->answer.function_id = FUNCTION_GET_CURRENT_CALLBACK_THRESHOLD;
	current12->answer.length = sizeof(GetCurrentCallbackThresholdReturn_);
	GetCurrentCallbackThreshold_ gcct;
	gcct.stack_id = current12->stack_id;
	gcct.function_id = FUNCTION_GET_CURRENT_CALLBACK_THRESHOLD;
	gcct.length = sizeof(GetCurrentCallbackThreshold_);

	ipcon_device_write(current12, (char *)&gcct, sizeof(GetCurrentCallbackThreshold_));

	if(ipcon_answer_sem_wait_timeout(current12) != 0) {
		ipcon_sem_post_write(current12);
		return E_TIMEOUT;
	}

	GetCurrentCallbackThresholdReturn_ *gcctr = (GetCurrentCallbackThresholdReturn_ *)current12->answer.buffer;
	*ret_option = gcctr->option;
	*ret_min = gcctr->min;
	*ret_max = gcctr->max;

	ipcon_sem_post_write(current12);

	return E_OK;
}

int current12_set_analog_value_callback_threshold(Current12 *current12, char option, uint16_t min, uint16_t max) {
	if(current12->ipcon == NULL) {
		return E_NOT_ADDED;
	}

	ipcon_sem_wait_write(current12);

	SetAnalogValueCallbackThreshold_ savct;
	savct.stack_id = current12->stack_id;
	savct.function_id = FUNCTION_SET_ANALOG_VALUE_CALLBACK_THRESHOLD;
	savct.length = sizeof(SetAnalogValueCallbackThreshold_);
	savct.option = option;
	savct.min = min;
	savct.max = max;

	ipcon_device_write(current12, (char *)&savct, sizeof(SetAnalogValueCallbackThreshold_));

	ipcon_sem_post_write(current12);

	return E_OK;
}

int current12_get_analog_value_callback_threshold(Current12 *current12, char *ret_option, uint16_t *ret_min, uint16_t *ret_max) {
	if(current12->ipcon == NULL) {
		return E_NOT_ADDED;
	}

	ipcon_sem_wait_write(current12);

	current12->answer.function_id = FUNCTION_GET_ANALOG_VALUE_CALLBACK_THRESHOLD;
	current12->answer.length = sizeof(GetAnalogValueCallbackThresholdReturn_);
	GetAnalogValueCallbackThreshold_ gavct;
	gavct.stack_id = current12->stack_id;
	gavct.function_id = FUNCTION_GET_ANALOG_VALUE_CALLBACK_THRESHOLD;
	gavct.length = sizeof(GetAnalogValueCallbackThreshold_);

	ipcon_device_write(current12, (char *)&gavct, sizeof(GetAnalogValueCallbackThreshold_));

	if(ipcon_answer_sem_wait_timeout(current12) != 0) {
		ipcon_sem_post_write(current12);
		return E_TIMEOUT;
	}

	GetAnalogValueCallbackThresholdReturn_ *gavctr = (GetAnalogValueCallbackThresholdReturn_ *)current12->answer.buffer;
	*ret_option = gavctr->option;
	*ret_min = gavctr->min;
	*ret_max = gavctr->max;

	ipcon_sem_post_write(current12);

	return E_OK;
}

int current12_set_debounce_period(Current12 *current12, uint32_t debounce) {
	if(current12->ipcon == NULL) {
		return E_NOT_ADDED;
	}

	ipcon_sem_wait_write(current12);

	SetDebouncePeriod_ sdp;
	sdp.stack_id = current12->stack_id;
	sdp.function_id = FUNCTION_SET_DEBOUNCE_PERIOD;
	sdp.length = sizeof(SetDebouncePeriod_);
	sdp.debounce = debounce;

	ipcon_device_write(current12, (char *)&sdp, sizeof(SetDebouncePeriod_));

	ipcon_sem_post_write(current12);

	return E_OK;
}

int current12_get_debounce_period(Current12 *current12, uint32_t *ret_debounce) {
	if(current12->ipcon == NULL) {
		return E_NOT_ADDED;
	}

	ipcon_sem_wait_write(current12);

	current12->answer.function_id = FUNCTION_GET_DEBOUNCE_PERIOD;
	current12->answer.length = sizeof(GetDebouncePeriodReturn_);
	GetDebouncePeriod_ gdp;
	gdp.stack_id = current12->stack_id;
	gdp.function_id = FUNCTION_GET_DEBOUNCE_PERIOD;
	gdp.length = sizeof(GetDebouncePeriod_);

	ipcon_device_write(current12, (char *)&gdp, sizeof(GetDebouncePeriod_));

	if(ipcon_answer_sem_wait_timeout(current12) != 0) {
		ipcon_sem_post_write(current12);
		return E_TIMEOUT;
	}

	GetDebouncePeriodReturn_ *gdpr = (GetDebouncePeriodReturn_ *)current12->answer.buffer;
	*ret_debounce = gdpr->debounce;

	ipcon_sem_post_write(current12);

	return E_OK;
}

int current12_get_version(Current12 *current12, char ret_name[40], uint8_t ret_firmware_version[3], uint8_t ret_binding_version[3]) {
	strncpy(ret_name, current12->name, 40);

	ret_firmware_version[0] = current12->firmware_version[0];
	ret_firmware_version[1] = current12->firmware_version[1];
	ret_firmware_version[2] = current12->firmware_version[2];

	ret_binding_version[0] = current12->binding_version[0];
	ret_binding_version[1] = current12->binding_version[1];
	ret_binding_version[2] = current12->binding_version[2];

	return E_OK;
}

static int current12_callback_current(Current12 *current12, const unsigned char *buffer) {
	CurrentCallback_ *cc = (CurrentCallback_ *)buffer;
	((current_func_t)current12->callbacks[cc->function_id])(cc->current);
	return sizeof(CurrentCallback_);
}

static int current12_callback_analog_value(Current12 *current12, const unsigned char *buffer) {
	AnalogValueCallback_ *avc = (AnalogValueCallback_ *)buffer;
	((analog_value_func_t)current12->callbacks[avc->function_id])(avc->value);
	return sizeof(AnalogValueCallback_);
}

static int current12_callback_current_reached(Current12 *current12, const unsigned char *buffer) {
	CurrentReachedCallback_ *crc = (CurrentReachedCallback_ *)buffer;
	((current_reached_func_t)current12->callbacks[crc->function_id])(crc->current);
	return sizeof(CurrentReachedCallback_);
}

static int current12_callback_analog_value_reached(Current12 *current12, const unsigned char *buffer) {
	AnalogValueReachedCallback_ *avrc = (AnalogValueReachedCallback_ *)buffer;
	((analog_value_reached_func_t)current12->callbacks[avrc->function_id])(avrc->value);
	return sizeof(AnalogValueReachedCallback_);
}

static int current12_callback_over_current(Current12 *current12, const unsigned char *buffer) {
	OverCurrentCallback_ *occ = (OverCurrentCallback_ *)buffer;
	((over_current_func_t)current12->callbacks[occ->function_id])();
	return sizeof(OverCurrentCallback_);
}

void current12_register_callback(Current12 *current12, uint8_t cb, void *func) {
    current12->callbacks[cb] = func;
}

void current12_create(Current12 *current12, const char *uid) {
	ipcon_device_create(current12, uid);

	current12->expected_name = "Current12 Bricklet";

	current12->binding_version[0] = 1;
	current12->binding_version[1] = 0;
	current12->binding_version[2] = 0;

	current12->device_callbacks[CURRENT12_CALLBACK_CURRENT] = current12_callback_current;
	current12->device_callbacks[CURRENT12_CALLBACK_ANALOG_VALUE] = current12_callback_analog_value;
	current12->device_callbacks[CURRENT12_CALLBACK_CURRENT_REACHED] = current12_callback_current_reached;
	current12->device_callbacks[CURRENT12_CALLBACK_ANALOG_VALUE_REACHED] = current12_callback_analog_value_reached;
	current12->device_callbacks[CURRENT12_CALLBACK_OVER_CURRENT] = current12_callback_over_current;
}
