#include <stdio.h>
#include <stdlib.h>

int strlen(char* str) {
  int len = 0;
  while (str[len] != 0) {
    len++;
  }
  return len;
}

char *strncpy(char* org, char* dest, int n) {
  int i;
  int len = strlen(org);
  for(i = 0; i < n; i++) {
    if(i < len) {
      dest[i] = org[i];
    }
    else {
      dest[i] = 0;
    }
  }
  dest[n] = 0;
  return dest;
}

char *strncat(char* org, char* dest, int n) {
  int start = strlen(dest);
  strncpy(dest + start, org, n);
  return dest;
}

int strcmp(char* s1, char* s2) {
  int l1 = strlen(s1);
  int l2 = strlen(s2);
  int minLen = l1 < l2 ? l1 : l2;
  int i = 0;
  while(i < minLen && s1[i] == s2[i]) {
    i++;
  }
  if(i == minLen) {
    return l1 < l2 ? -1 : l1 > l2 ? 1 : 0;
  }
  else {
    return s1[i] < s2[i] ? -1 : 1;
  }
}

char *myStrchr(char *str, char c) {
  int i = 0;
  while (str[i] != 0) {
    if (str[i] == c) {
      return str + i;
    }
    i++;
  }
  return NULL;
}
