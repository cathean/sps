#include <func_proto.h>
#include <boost/asio.hpp>

bool is_port_open(unsigned short port_num)
{
    using namespace boost::asio;
    using ip::tcp;

    io_service svc;
    tcp::acceptor a(svc);

    boost::system::error_code ec;
    a.open(tcp::v4(), ec) || a.bind({ip::address::from_string("127.0.0.1"), port_num}, ec);

    return ec == error::address_in_use;
}
