#include <iostream>

class Log
{
public:
    const int LogLevelError=0;
    const int LogLevelWarning=1;
    const int LogLevelInfo=2;

private:
    int m_LogLevel=LogLevelInfo;
public:
    void setLevel(int level)
    {
        m_LogLevel=level;
    }

    void Error(const char* message)
    {
        if (m_logLevel>=LogLevelerror)
            std::cout<<"[Error]:"<<message<<std::endl;
    }
    void Warn(const char* message)
    {
        if (m_logLevel>=LogLevelWarning)
        std::cout<<"[Warning]:"<<message<<std::endl;
    }
    void Info(const char* message)
    {
        if (m_logLevel>=LogLevelInfo)
        std::cout<<"[Info]:"<<message<<std::endl;
    }
};

int main()
{
    Log log;
    log.setLevel(log.LogLevelWarning);
    log.Warn("Hello!");
    log.Error("Hello!");
    log.Info("Hello!");
    std::cin.get();
}