#ifndef ZERONE_SYSTEM_I_APPLICATION_MANAGER_H
#define ZERONE_SYSTEM_I_APPLICATION_MANAGER_H

namespace zerone {
namespace system {

class IApplicationManager {
public:
	struct Application {
	};

public:
	virtual ~IApplicationManager() {
	}

	virtual Application getApplicationInformation(const char * name) = 0;

};

}
}

#endif
