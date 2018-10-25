#include <jansson.h>
#include "legato.h"
#include "interfaces.h"

void janssonEchoService_Print(const char* message)
{
	char* s = NULL;

	json_t *root = json_object();

	json_object_set_new( root, "message", json_string(message) );

	s = json_dumps(root, 0);

    LE_INFO(s);
	json_decref(root);
}

COMPONENT_INIT
{
}
