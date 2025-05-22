#pragma once
//is linux 
// #include <dlfcn.h>
#include <lib/dlfcn.h>

class Foo {
public:
  int GetTheAnswer() const;

private:
  int m_answer = 42;
};



void* Load(const char* filepath);

void* LoadSymbol(void* library, const char* symbol);

void Reload(void* &library, const char* filepath);

void PrintError();
