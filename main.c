#include "ntreg.h"

int main()
{
	hive* h = hive_open("E:\\SAM");
	if (h != NULL)
	{
		hive_keynode* key = hive_openroot(h);
		if (key != NULL)
		{
			print_keynode(key);
			hive_close_key(key);
		}
		hive_close(h);
	}
	
    return 0;
}

