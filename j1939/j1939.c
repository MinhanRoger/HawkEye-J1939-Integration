#include <stdio.h>
#include <kernel/dpl/DebugP.h>
#include <kernel/dpl/AddrTranslateP.h>
#include <kernel/dpl/SemaphoreP.h>
#include <drivers/mcan.h>
#include "ti_drivers_config.h"
#include "ti_drivers_open_close.h"
#include "ti_board_open_close.h"
#include "j1939.h"

#include "FreeRTOS.h"
#include "task.h"

static void testAAA(void) {
    uint8_t data[] = {0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08, 0x09, 0x0a, 0x0b, 0x0c};
    J1939_Send_Data(6, 64768, 13, data, sizeof(data) / sizeof(data[0]));
}

static void testBBB(void) {
    uint8_t data[] = {1, 2, 3, 4, 5, 6, 7, 8};
    J1939_Send_Data(6, 64769, 13, data, sizeof(data) / sizeof(data[0]));
}

j1939_pgn_callback_t req_callbacks_table[] = {
    { .pgn = 64768, .handler = testAAA },
    { .pgn = 64769, .handler = testBBB },
};

void j1939_initialization(void) {
    DebugP_log("[J1939] J1939 task started\r\n");
    // J1939_Initialize(CAN_FUNCTION, CAN_INTERRUPT_CALLBACK);
    j1939_Register_Req_Handler(req_callbacks_table, sizeof(req_callbacks_table) / sizeof(req_callbacks_table[0]));
    return;
}
