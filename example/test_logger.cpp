// 2018-5-7
// PHZ

// log

#include "Logger.h"

#if defined(WIN32) || defined(_WIN32) 
#pragma comment(lib, "Ws2_32.lib")
#pragma comment(lib,"Iphlpapi.lib")
#endif 

using namespace xop;
using namespace std;

int main()
{    
    //Logger::instance().setLogFile("log.txt");
    LOG_DEBUG("hello world.");    
    LOG_ERROR("hello world.");  
    
    //EventLoop eventLoop;     
    //eventLoop.loop();
    
    return 0;
}


