#ifndef ZERONE_I_ERROR_H
#define ZERONE_I_ERROR_H

namespace zerone {

class IError {
public:
	virtual ~IError() {
	}

	virtual const char * getMessage() = 0;

	virtual IError * getCause() = 0;

};

}

#endif
