#ifndef ZERONE_APPLICATIONMANAGER_H
#define ZERONE_APPLICATIONMANAGER_H

#include <zerone/system/service/ApplicationManager/IApplicationManager.h>

namespace zerone {
namespace system {

class ApplicationManager: public IApplicationManager {
public:
	virtual ~ApplicationManager();

	virtual Application getApplicationInformation(const char * name);

};

}
}

#endif
