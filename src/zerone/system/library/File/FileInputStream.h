#ifndef ZERONE_SYSTEM_FILEINPUTSTREAM_H
#define ZERONE_SYSTEM_FILEINPUTSTREAM_H

#include <zerone/IInputStream.h>

namespace zerone {
namespace system {

class FileInputStream: public IInputStream {
public:
	FileInputStream();
	virtual ~FileInputStream();

};

}
}

#endif
