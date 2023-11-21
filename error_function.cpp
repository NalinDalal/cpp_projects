#include <cstdarg>
void error(int severity ...) // ‘‘severity’’ followed by a zero-terminated list of char*s 
{
va_list ap;
va_start(ap,severity); // arg startup
for (;;) {
    char∗ p = va_arg(ap,char∗); 
    if (p == nullptr) break;
    cerr << p << ' ';
}

va_end(ap); // arg cleanup

cerr << '\n';
if (severity) exit(severity); 
}