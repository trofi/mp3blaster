#ifndef _MP3B_GLOBAL_
#define _MP3B_GLOBAL_
#include <stdio.h>

char *get_homedir(const char*);
char *expand_path(const char*);
void debug(const char*);
char *readline(FILE *);
char *crop_whitespace(const char*);
void set_sound_device(const char*);
short set_fpl(int);
#ifdef PTHREADEDMPEG
short set_threads(int);
#endif

#endif /* _MP3B_GLOBAL_ */