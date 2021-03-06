
/*
 * sophia database
 * sphia.org
 *
 * Copyright (c) Dmitry Simonenko
 * BSD License
*/

#include <sophia.h>
#include <libss.h>
#include <libsf.h>
#include <libsr.h>
#include <libsv.h>
#include <libsd.h>
#include <libst.h>

static void
error_test0(void)
{
	void *env = sp_env();
	t( env != NULL );
	t( sp_getstring(env, "sophia.error", 0) == NULL );
	t( sp_destroy(env) == 0 );
}

stgroup *error_group(void)
{
	stgroup *group = st_group("error");
	st_groupadd(group, st_test("test0", error_test0));
	return group;
}
