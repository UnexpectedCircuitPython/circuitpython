// This file is part of the CircuitPython project: https://circuitpython.org
//
// SPDX-FileCopyrightText: Copyright (c) 2024 Adafruit Industries LLC
//
// SPDX-License-Identifier: MIT

/* Auto-generated config file hpl_nvmctrl_config.h */
#pragma once

// <<< Use Configuration Wizard in Context Menu >>>

// <h> Basic Settings

// <o> Read Mode Selection
// <0x00=> No Miss Penalty
// <0x01=> Low Power
// <0x02=> Deterministic
// <id> nvm_arch_read_mode
#ifndef CONF_NVM_READ_MODE
#define CONF_NVM_READ_MODE 0
#endif

// <o> Power Reduction Mode During Sleep
// <0x00=> Wake On Access
// <0x01=> Wake Up Instant
// <0x03=> Disabled
// <id> nvm_arch_sleepprm
#ifndef CONF_NVM_SLEEPPRM
#define CONF_NVM_SLEEPPRM 0
#endif

// <q> Cache Disable
// <i> Indicate whether cache is disable or not
// <id> nvm_arch_cache
#ifndef CONF_NVM_CACHE
#define CONF_NVM_CACHE 0
#endif

// </h>

// <<< end of configuration section >>>
