#ifndef ZERONE_I_OUTPUTSTREAM_H
#define ZERONE_I_OUTPUTSTREAM_H

#include <zerone/IError.h>

namespace zerone {

class IOutputStream {
public:
	virtual ~IOutputStream() {
	}

	virtual void close() = 0;

	virtual void flush() = 0;

	virtual void write(const void * buffer, int length) = 0;

};

}

#endif
