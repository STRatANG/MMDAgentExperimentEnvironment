/* headers */

#include "MMDAgent.h"
#include "CompositeForm.h"

class ExperimentEnvironment{
private: 

	/* MMDAgent */
	MMDAgent *mmdagent; 

	/* CompositForm */
	CompositeForm *compositeform; 

public: 
	/* ExperimentEnvironment: constracter */
	ExperimentEnvironment(); 

	/* ExperimentEnvironment: destracter */
	~ExperimentEnvironment(); 

	/* setup: initialize and setup ExperimentEnvironment ( and internal MMDAgent and Forms ) */
	bool setup(int argc, char **argv, const char *title);

};
