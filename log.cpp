#include <iostream>

class Log
{
    public:
        enum Level
        {
            levelError, levelWarning, levelInfo
        };
    private:
        Level m_LogLevel = levelInfo;
    public:
        void setLevel(Level level)
        {
            m_LogLevel = level;
        }

        void error(const char* msg)
        {
            if(m_LogLevel >= levelError)
            {
                std::cout<<"[ERROR]"<< msg << std::endl;
            }
        }

        void Warn(const char* msg)
        {
            if(m_LogLevel >= levelWarning)
            {
                std::cout << "[WARNING]" << msg << std::endl;
            }
        }

        void info(const char *msg)
        {
            if(m_LogLevel >= levelInfo)
            {
                std::cout << "[INFO]" << msg << std::endl;
            }   
        }
    
};

int main()
{
    Log log;
    log.setLevel(Log::levelError);
    log.Warn("HELLO!");
    log.error("HELLO!");
    log.info("HELLO!");

}
