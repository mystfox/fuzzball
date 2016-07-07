#ifndef _LOG_H
#define _LOG_H

void log2file(char *myfilename, char *format, ...);
void log_command(char *format, ...);
void log_gripe(char *format, ...);
void log_muf(char *format, ...);
void log_program_text(struct line *first, dbref player, dbref i);
void log_sanity(char *format, ...);
void log_status(char *format, ...);
void log_user(dbref player, dbref program, char *logmessage);
char *whowhere(dbref player);

#endif				/* _LOG_H */

