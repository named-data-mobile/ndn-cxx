/**
 * Copyright (C) 2013 Regents of the University of California.
 * @author: Jeff Thompson <jefft0@remap.ucla.edu>
 * See COPYING for copyright and distribution information.
 */

#include <stdexcept>
#include "transport.hpp"

using namespace std;

namespace ndn {

Transport::ConnectionInfo::~ConnectionInfo()
{  
}

void 
Transport::connect(const Transport::ConnectionInfo& connectionInfo, ElementListener& elementListener) 
{
  throw logic_error("unimplemented");
}
  
void 
Transport::send(const uint8_t *data, unsigned int dataLength)
{
  throw logic_error("unimplemented");
}

void 
Transport::processEvents()
{
  throw logic_error("unimplemented");
}

bool 
Transport::getIsConnected()
{
  throw logic_error("unimplemented");
}

void 
Transport::close()
{
}

Transport::~Transport()
{
}

}
