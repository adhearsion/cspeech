/*
 * cspeech - Speech document (SSML, SRGS, NLSML) modelling and matching for C
 * Copyright (C) 2013, Grasshopper
 *
 * License: MIT
 *
 * Contributor(s):
 * Chris Rienzo <chris.rienzo@grasshopper.com>
 *
 * srgs.h -- Transforms SRGS into regex rules
 *
 */
#ifndef SRGS_H
#define SRGS_H

struct srgs_parser;
struct srgs_grammar;

enum srgs_match_type {
  /** invalid input */
  SMT_NO_MATCH,
  /** matches, can accept more input */
  SMT_MATCH,
  /** not yet a match, but valid input so far */
  SMT_MATCH_PARTIAL,
  /** matches, cannot accept more input */
  SMT_MATCH_END
};

extern int srgs_init(void);
extern struct srgs_parser *srgs_parser_new(const char *uuid);
extern struct srgs_grammar *srgs_parse(struct srgs_parser *parser, const char *document);
extern const char *srgs_grammar_to_regex(struct srgs_grammar *grammar);
extern const char *srgs_grammar_to_jsgf(struct srgs_grammar *grammar);
extern const char *srgs_grammar_to_jsgf_file(struct srgs_grammar *grammar, const char *basedir, const char *ext);
extern enum srgs_match_type srgs_grammar_match(struct srgs_grammar *grammar, const char *input, const char **interpretation);
extern void srgs_parser_destroy(struct srgs_parser *parser);

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
