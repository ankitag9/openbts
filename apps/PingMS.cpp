#include <PingMS.h>

PingMS::startThread()
{
        LOG(INFO) << "constructor called" ;
    Thread sendPagingRequestThread;
    sendPagingRequestThread.start((void*(*)(void*)) sendPagingRequest, NULL);
}

PingMS::sendPagingRequest()
{
    while (1) {
        LOG(INFO) << "called1" ;
        sleep(1);
    }
}