/**
 *  @file nat.h
 * 
 *  @brief The include file of NAT type class
 * 
 *  @ingroup nat
 * 
 *  @author Henry Jiang
 */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <errno.h>
#include <string.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <netdb.h>
#include <arpa/inet.h>
#include <sys/wait.h>
#include <signal.h>

#define NAT_PORT    "3490"
#define NAT_IP1     "10.0.0.2"
#define NAT_IP2     "10.0.0.3"

class NAT {
    private:
     int 
    public:
     
}