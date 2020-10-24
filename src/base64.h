#ifndef H_F322B9F4CB8E431398CA8441845F438C
#define H_F322B9F4CB8E431398CA8441845F438C

#include <string>

namespace ws409 {
	std::string base64_encode(unsigned char const* , unsigned int len);
	std::string base64_decode(std::string const& s);
}

#endif
