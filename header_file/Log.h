//#pragma once //preprocessed
#ifndef _LOG_H
#define _LOG_H

void InitLog();
void Log(const char* message);

struct Player {};

#endif

void InitLog()
{
    Log("Initializing Log");
}