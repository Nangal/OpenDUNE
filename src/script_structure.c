/* $Id$ */

#include <stdio.h>
#include "types.h"
#include "libemu.h"
#include "global.h"
#include "pool/structure.h"
#include "script.h"
#include "structure.h"

/**
 * Get the animation frame of the current structure.
 *
 * Stack: *none*
 *
 * @param script The script engine to operate on.
 * @return Animation frame of current structure.
 */
uint16 Script_Structure_GetAnimation(ScriptEngine *script)
{
	Structure *s;

	s = Structure_Get_ByMemory(g_global->structureCurrent);
	return s->animation;
}
