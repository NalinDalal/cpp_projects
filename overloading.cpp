#include <new>
#include <iostream>
#include <cstddef>

using namespace std;

void* operator new(size_t sz, void* p) noexcept
{
    return p;
};
void* operator new[](size_t sz, void* p) noexcept
{
    return p;
};

void operator delete(void* p, void* ptr) noexcept
{};
void operator delete[](void* p, void* ptr) noexcept
{};

class Arena{
    public:
        virtual void* alloc(size_t)=0;
        virtual void free(void*)=0;
};

void* operator new(size_t sz, Arena* a){
    return a->alloc(sz);
}