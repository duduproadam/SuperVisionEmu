//////////////////////////////////////////////////////////////////////////////
//
//////////////////////////////////////////////////////////////////////////////
//
//
//
//
//
//
//////////////////////////////////////////////////////////////////////////////

#include "log.h"

//FILE	*log_stream=NULL;

//////////////////////////////////////////////////////////////////////////////
//
//////////////////////////////////////////////////////////////////////////////
//
//
//
//
//
//
//////////////////////////////////////////////////////////////////////////////
int log_init(char *path)
{
    printf("Trying to open %s for logging!\n", path);
/*	log_stream=fopen(path,"wrt");
	if (log_stream==NULL)
		return(0);
	return(1);*/
    return(0);
}
//////////////////////////////////////////////////////////////////////////////
//
//////////////////////////////////////////////////////////////////////////////
//
//
//
//
//
//
//////////////////////////////////////////////////////////////////////////////
FILE *log_get(void)
{
    return(stdout);
//	return(log_stream);
}
//////////////////////////////////////////////////////////////////////////////
//
//////////////////////////////////////////////////////////////////////////////
//
//
//
//
//
//
//////////////////////////////////////////////////////////////////////////////
void log_done(void)
{
//	fclose(log_stream);
}
