/*
 * cspeech - Speech document (SSML, SRGS, NLSML) modelling and matching for C
 * Copyright (C) 2013, Grasshopper
 *
 * License: MIT
 *
 * Contributor(s):
 * Chris Rienzo <chris.rienzo@grasshopper.com>
 *
 * nlsml.h
 *
 */

#ifndef NLSML_H
#define NLSML_H

#include <iksemel.h>

enum nlsml_match_type {
  NMT_BAD_XML,
  NMT_MATCH,
  NMT_NOINPUT,
  NMT_NOMATCH
};

extern int nlsml_init(void);
enum nlsml_match_type nlsml_parse(const char *result, const char *uuid);
iks *nlsml_normalize(const char *result);
extern iks *nlsml_create_dtmf_match(const char *digits, const char *interpretation);

#endif

/* For Emacs:
 * Local Variables:
 * mode:c
 * indent-tabs-mode:t
 * tab-width:4
 * c-basic-offset:4
 * End:
 * For VIM:
 * vim:set softtabstop=4 shiftwidth=4 tabstop=4 noet:
 */
