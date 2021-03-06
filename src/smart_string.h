#ifndef SMART_STRING_H
#define SMART_STRING_H
#include <stdlib.h>

typedef char* smart_str;

smart_str new_n_ss(const char* str, const size_t len);
smart_str new_ss(const char* str);
void delete_ss(smart_str str);
size_t getlen_ss(const smart_str str);
smart_str copy_ss(const smart_str src);
smart_str concat_ss(smart_str dest, const smart_str src);
smart_str concat_cstr_ss(smart_str dest, const char* src);
smart_str prepend_cstr_ss(smart_str dest, const char *s);
smart_str substr_ss(const smart_str src, const size_t low, const size_t high);
int compare_ss(const smart_str s1, const smart_str s2);
// smart_str compare_ignore_case_ss(const smart_str s1, const smart_str s2);
#endif
