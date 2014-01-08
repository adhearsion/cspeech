/*
 * cspeech - Speech document (SSML, SRGS, NLSML) modelling and matching for C
 * Copyright (C) 2013, Grasshopper
 *
 * License: MIT
 *
 * Contributor(s):
 * Chris Rienzo <chris.rienzo@grasshopper.com>
 *
 * cspeech.h
 *
 */

#ifndef CSPEECH_H_
#define CSPEECH_H_

static inline int cspeech_zstr(const char *s);
static inline bool cspeech_is_number(const char *str);

typedef enum {
  CSPEECH_LOG_DEBUG = 7,
  CSPEECH_LOG_INFO = 6,
  CSPEECH_LOG_NOTICE = 5,
  CSPEECH_LOG_WARNING = 4,
  CSPEECH_LOG_ERROR = 3,
  CSPEECH_LOG_CRIT = 2,
  CSPEECH_LOG_ALERT = 1,
} cspeech_log_level_t;

#include <cspeech/srgs.h>
#include <cspeech/nlsml.h>

#endif // CSPEECH_H_
