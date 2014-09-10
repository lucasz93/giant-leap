/*
===============================================================================

	Giant Leap

	File	:	Socket.h
	Authors	:	Lucas Zadrozny
	Date	:	10th September 2014

	Purpose	:	Socket abstraction layer.

===============================================================================
*/

#ifndef __UDPSOCKET_H__
#define __UDPSOCKET_H__

//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
struct address_t
{
	char				_address[16];
	unsigned short		_port;
};

//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
class StreamSocket
{
public:

};

//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
class UdpSocket
{
public:
	UdpSocket( bool recv, unsigned short port );

	virtual bool		Send( const void *buf, int len, const char *address );
	virtual bool		Recv( void *buf, int buflen, address_t *addr );

protected:
	int					_fd;
	bool				_recv;
	unsigned short		_port;
};

#endif // __UDPSOCKET_H__