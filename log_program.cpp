#include<iostream>
using namespace std;

enum Loglevel { logLevelInfo, logLevelWarning, logLevelError };

class Log{
    public:
    void setLevel(Loglevel level) { 
        currentLevel = level;
}

void warn(const string& message){
    if (currentLevel >= logLevelWarning) {
        cout << "[Warning]:" << message << endl;
    }
}

private: 
    Loglevel currentLevel;
    };

int main() {
    Log log;
    log.setLevel(logLevelWarning);
    log.warn("Warning");
    std::cin.get();
    return 0;
}