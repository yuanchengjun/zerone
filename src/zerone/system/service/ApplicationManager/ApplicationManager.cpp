#include <zerone/system/service/ApplicationManager/ApplicationManager.h>

namespace zerone {
namespace system {

ApplicationManager::~ApplicationManager() {
}

IApplicationManager::Application ApplicationManager::getApplicationInformation(const char * name) {
	IApplicationManager::Application app;
	return app;
}

}
}
