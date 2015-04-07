/*************************************************************************
	> File Name: global.h
	> Author:Hugh
	> Mail:hupengbuaa@gmail.com
	> Created Time: Tue 07 Apr 2015 10:17:21 AM CST
 ************************************************************************/

#ifndef _GLOBAL_H
#define _GLOBAL_H

#ifdef --cplusplus
extern "C"{
  #endif
  #define HISTROY_LEN 10
  
  #define STOPPED "stopped"
  #define RUNNING "running"

  #define DONE "done"

  #include <stdio.h>
  #include <stdlib.h>

  typedef struct SimpleCmd{
    int isBack;
    char **args;
    char *input;
    char *output;
  }SimpleCmd;

  typedef struct History {
    int start;
    int end;
    char cmds[HISTROY_LEN][100];
  }History;

  typedef struct Job{
    int pid;
    char cmd[100];
    char state[10];
    struct Job *next;
  }Job;

  char inputBuff[100];

  void init();
  void addHistory(char *history);
  void execute;

  #ifdef --cplusplus

}
#endif

#endif
