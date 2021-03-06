#pragma once

#include "stdint.h"

uint16_t    get_crc_16(uint16_t crc, const uint8_t *data, uint32_t size);
uint16_t    get_crc_16(const std::vector<uint8_t> &data);
uint16_t    get_crc_16(const uint8_t *data, uint32_t length);