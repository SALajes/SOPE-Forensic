#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <time.h>
#include <input_parser.h>

#define MAX_BUF     512

void getFileInfo(const char * file_name, char* info);
void getFileStatus(const char* file_name, char* info);
void getFileHash(const char* file_name, struct Contents* contents, char* info);
int file_forensic(const char* file_name, struct Contents* contents, char* result);
