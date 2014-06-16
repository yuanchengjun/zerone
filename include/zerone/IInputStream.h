#ifndef ZERONE_I_INPUTSTREAM_H
#define ZERONE_I_INPUTSTREAM_H

#include <zerone/IError.h>

namespace zerone {

class IInputStream {
public:
	virtual ~IInputStream() {
	}

	virtual IError * close() = 0;

	virtual IError * read(void * buffer, int length, int * readlength) = 0;

};

}

#endif
