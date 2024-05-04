#ifndef OPEN_SAE_J1939_OPEN_SAE_J1939_H_
#define OPEN_SAE_J1939_OPEN_SAE_J1939_H_

#include <stdio.h>

#ifdef __cplusplus
extern "C"
{
#endif

typedef struct
{
    uint32_t pgn;
    void (*handler)(void);
} j1939_pgn_callback_t;

uint32_t J1939_Send_Data(uint8_t priority, uint32_t PGN, uint8_t SA, uint8_t *data, uint16_t data_length);

void J1939_Initialize(void (*send_msg)(uint32_t id, uint32_t msg_len, uint8_t *buffer), void (*register_recv_callback)(void (*)(uint32_t, uint8_t *)));

void j1939_Register_Req_Handler(j1939_pgn_callback_t *pgn_table, uint32_t len);

#ifdef __cplusplus
}
#endif

#endif