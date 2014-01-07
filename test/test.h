/*
 * cspeech - Speech document (SSML, SRGS, NLSML) modelling and matching for C
 * Copyright (C) 2013, Grasshopper
 *
 * License: MIT
 *
 * Contributor(s):
 * Chris Rienzo <chris.rienzo@grasshopper.com>
 *
 * test.h - Simple unit testing macros
 *
 */

#ifndef TEST_H
#define TEST_H

#include <string.h>
#include <stdlib.h>
#include <stdio.h>

#define assert_equals(test, expected_str, expected, actual, file, line) \
{ \
  int actual_val = actual; \
  if (expected != actual_val) { \
    printf("TEST\t%s\tFAIL\t%s\t%i\t!=\t%i\t%s:%i\n", test, expected_str, expected, actual_val, file, line); \
    exit(1); \
  } else { \
    printf("TEST\t%s\tPASS\n", test); \
  } \
}

#define assert_string_equals(test, expected, actual, file, line) \
{ \
  const char *actual_str = actual; \
  if (!actual_str || strcmp(expected, actual_str)) { \
    printf("TEST\t%s\tFAIL\t\t%s\t!=\t%s\t%s:%i\n", test, expected, actual_str, file, line); \
    exit(1); \
  } else { \
    printf("TEST\t%s\tPASS\n", test); \
  } \
}

#define assert_not_null(test, actual, file, line) \
{ \
  const void *actual_val = actual; \
  if (!actual_val) { \
    printf("TEST\t%s\tFAIL\t\t\t\t\t%s:%i\n", test, file, line); \
    exit(1); \
  } else { \
    printf("TEST\t%s\tPASS\n", test); \
  } \
}

#define assert_null(test, actual, file, line) \
{ \
  const void *actual_val = actual; \
  if (actual_val) { \
    printf("TEST\t%s\tFAIL\t\t\t\t\t%s:%i\n", test, file, line); \
    exit(1); \
  } else { \
    printf("TEST\t%s\tPASS\n", test); \
  } \
}

#define ASSERT_EQUALS(expected, actual) assert_equals(#actual, #expected, expected, actual, __FILE__, __LINE__)
#define ASSERT_STRING_EQUALS(expected, actual) assert_string_equals(#actual, expected, actual, __FILE__, __LINE__)
#define ASSERT_NOT_NULL(actual) assert_not_null(#actual " not null", actual, __FILE__, __LINE__)
#define ASSERT_NULL(actual) assert_null(#actual " is null", actual, __FILE__, __LINE__)

#define SKIP_ASSERT_EQUALS(expected, actual) if (0) { ASSERT_EQUALS(expected, actual); }

#define TEST(name) printf("TEST BEGIN\t" #name "\n"); name(); printf("TEST END\t"#name "\tPASS\n");

#define SKIP_TEST(name) if (0) { TEST(name) };

#endif

/* For Emacs:
 * Local Variables:
 * mode:c
 * indent-tabs-mode:t
 * tab-width:4
 * c-basic-offset:4
 * End:
 * For VIM:
 * vim:set softtabstop=4 shiftwidth=4 tabstop=4 noet
 */
