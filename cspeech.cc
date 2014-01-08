/*
 * cspeech - Speech document (SSML, SRGS, NLSML) modelling and matching for C
 * Copyright (C) 2013, Grasshopper
 *
 * License: MIT
 *
 * Contributor(s):
 * Chris Rienzo <chris.rienzo@grasshopper.com>
 *
 * cspeech.cc
 *
 */

static inline int cspeech_zstr(const char *s)
{
  return !s || *s == '\0';
}

static inline bool cspeech_is_number(const char *str)
{
  const char *p;
  bool r = true;

  if (*str == '-' || *str == '+') {
    str++;
  }

  for (p = str; p && *p; p++) {
    if (!(*p == '.' || (*p > 47 && *p < 58))) {
      r = false;
      break;
    }
  }

  return r;
}
