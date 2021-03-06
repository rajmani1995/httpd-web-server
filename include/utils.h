#ifndef _UTILS_H
#define _UTILS_H

int getAllFiles(const char * path, char * files[]);
void sayHello(int sfd);
void daemonize(char * webroot, char * logpath);
void sendMIME(int sfd,const char * filename, int length);
void send404(int sfd);
int generateHtml(char * files[], int nfiles, char * title, char ** buffer);
void getMimeType(const char * ftype, char ** mime);
void sendHTML(int sfd, char * html, int length);

#endif // _UTILS_H