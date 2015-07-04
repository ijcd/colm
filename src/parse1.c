#include <colm/pdarun.h>
#include <colm/debug.h>
#include <colm/bytecode.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include <colm/config.h>
#include <colm/defs.h>
#include <colm/input.h>
#include <colm/tree.h>
#include <colm/program.h>
#include <colm/colm.h>


extern RuntimeData colm_program_text;

#define parser_start 7
#define parser_first_final 7
#define parser_error 0
#define false 0
#define true 1

static long parser_entryByRegion[] = {
	0, 7, 32, 56, 56
};

static FsmTables fsmTables_start =
{
	0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
	parser_entryByRegion,

	0,  0,  0,  0,  0,  0,  0,  0,
	4,

	parser_start,
	parser_first_final,
	parser_error,

	0,
	0
};

static void fsmExecute( FsmRun *fsmRun, StreamImpl *inputStream )
{
	fsmRun->start = fsmRun->p;
/*_resume:*/
	if ( fsmRun->cs == 0 )
		goto out;
	if ( fsmRun->p == fsmRun->pe )
		goto out_switch;
	--fsmRun->p;

	switch ( fsmRun->cs )
	{
tr1:
	{	fsmRun->p += 1;
	fsmRun->matchedToken = 24;
	goto out;
}
	goto st7;
tr3:
	{	fsmRun->p += 1;
	fsmRun->matchedToken = 28;
	goto out;
}
	goto st7;
tr12:
	{	fsmRun->p += 1;
	fsmRun->matchedToken = 19;
	goto out;
}
	goto st7;
tr13:
	{	fsmRun->p += 1;
	fsmRun->matchedToken = 20;
	goto out;
}
	goto st7;
tr14:
	{	fsmRun->p += 1;
	fsmRun->matchedToken = 29;
	goto out;
}
	goto st7;
tr15:
	{	fsmRun->p += 1;
	fsmRun->matchedToken = 30;
	goto out;
}
	goto st7;
tr17:
	{	fsmRun->p += 1;
	fsmRun->matchedToken = 16;
	goto out;
}
	goto st7;
tr18:
	{	fsmRun->p += 1;
	fsmRun->matchedToken = 17;
	goto out;
}
	goto st7;
tr20:
	{	fsmRun->p += 1;
	fsmRun->matchedToken = 13;
	goto out;
}
	goto st7;
tr21:
	{	fsmRun->p += 1;
	fsmRun->matchedToken = 14;
	goto out;
}
	goto st7;
tr22:
	{	fsmRun->p += 1;
	fsmRun->matchedToken = 22;
	goto out;
}
	goto st7;
tr30:
	{	fsmRun->p += 1;
	fsmRun->matchedToken = 15;
	goto out;
}
	goto st7;
tr31:
	{	fsmRun->matchedToken = 23;
	goto out;
}
	goto st7;
tr32:
	{	fsmRun->matchedToken = 18;
	goto out;
}
	goto st7;
tr33:
	{	fsmRun->p += 1;
	fsmRun->matchedToken = 21;
	goto out;
}
	goto st7;
tr34:
	{	fsmRun->toklen = fsmRun->tokend;
	switch( fsmRun->act ) {
	case 5:
	fsmRun->matchedToken = 8;
	break;
	case 7:
	fsmRun->matchedToken = 9;
	break;
	case 9:
	fsmRun->matchedToken = 10;
	break;
	case 11:
	fsmRun->matchedToken = 11;
	break;
	case 13:
	fsmRun->matchedToken = 12;
	break;
	case 15:
	fsmRun->matchedToken = 25;
	break;
	case 17:
	fsmRun->matchedToken = 26;
	break;
	case 19:
	fsmRun->matchedToken = 27;
	break;
	}
		goto skip_toklen;
}
	goto st7;
tr35:
	{	fsmRun->matchedToken = 27;
	goto out;
}
	goto st7;
st7:
case 7:
	if ( ++fsmRun->p == fsmRun->pe )
		goto out7;
	{fsmRun->tokstart = fsmRun->p;}
	switch( (*fsmRun->p) ) {
		case 32: goto st8;
		case 35: goto st1;
		case 39: goto st2;
		case 40: goto tr12;
		case 41: goto tr13;
		case 42: goto tr14;
		case 43: goto tr15;
		case 46: goto st9;
		case 47: goto tr17;
		case 58: goto tr18;
		case 91: goto tr20;
		case 93: goto tr21;
		case 94: goto tr22;
		case 95: goto tr19;
		case 99: goto st11;
		case 100: goto st16;
		case 101: goto st18;
		case 105: goto st20;
		case 108: goto st25;
		case 110: goto st27;
		case 116: goto st28;
		case 124: goto tr30;
	}
	if ( (*fsmRun->p) < 65 ) {
		if ( 9 <= (*fsmRun->p) && (*fsmRun->p) <= 11 )
			goto st8;
	} else if ( (*fsmRun->p) > 90 ) {
		if ( 97 <= (*fsmRun->p) && (*fsmRun->p) <= 122 )
			goto tr19;
	} else
		goto tr19;
	goto st0;
st8:
case 8:
	if ( ++fsmRun->p == fsmRun->pe )
		goto out8;
	if ( (*fsmRun->p) == 32 )
		goto st8;
	if ( 9 <= (*fsmRun->p) && (*fsmRun->p) <= 11 )
		goto st8;
	goto tr31;
st1:
case 1:
	if ( ++fsmRun->p == fsmRun->pe )
		goto out1;
	if ( (*fsmRun->p) == 10 )
		goto tr1;
	goto st1;
st2:
case 2:
	if ( ++fsmRun->p == fsmRun->pe )
		goto out2;
	switch( (*fsmRun->p) ) {
		case 39: goto tr3;
		case 92: goto st3;
	}
	goto st2;
st3:
case 3:
	if ( ++fsmRun->p == fsmRun->pe )
		goto out3;
	goto st2;
st9:
case 9:
	if ( ++fsmRun->p == fsmRun->pe )
		goto out9;
	if ( (*fsmRun->p) == 46 )
		goto tr33;
	goto tr32;
tr19:
	{{ fsmRun->tokend = fsmRun->toklen + ( fsmRun->p - fsmRun->start ) + 1; }}
	{fsmRun->act = 19;}
	goto st10;
tr40:
	{{ fsmRun->tokend = fsmRun->toklen + ( fsmRun->p - fsmRun->start ) + 1; }}
	{fsmRun->act = 17;}
	goto st10;
tr42:
	{{ fsmRun->tokend = fsmRun->toklen + ( fsmRun->p - fsmRun->start ) + 1; }}
	{fsmRun->act = 5;}
	goto st10;
tr44:
	{{ fsmRun->tokend = fsmRun->toklen + ( fsmRun->p - fsmRun->start ) + 1; }}
	{fsmRun->act = 9;}
	goto st10;
tr49:
	{{ fsmRun->tokend = fsmRun->toklen + ( fsmRun->p - fsmRun->start ) + 1; }}
	{fsmRun->act = 13;}
	goto st10;
tr51:
	{{ fsmRun->tokend = fsmRun->toklen + ( fsmRun->p - fsmRun->start ) + 1; }}
	{fsmRun->act = 7;}
	goto st10;
tr52:
	{{ fsmRun->tokend = fsmRun->toklen + ( fsmRun->p - fsmRun->start ) + 1; }}
	{fsmRun->act = 15;}
	goto st10;
tr56:
	{{ fsmRun->tokend = fsmRun->toklen + ( fsmRun->p - fsmRun->start ) + 1; }}
	{fsmRun->act = 11;}
	goto st10;
st10:
case 10:
	if ( ++fsmRun->p == fsmRun->pe )
		goto out10;
	if ( (*fsmRun->p) == 95 )
		goto tr19;
	if ( (*fsmRun->p) < 65 ) {
		if ( 48 <= (*fsmRun->p) && (*fsmRun->p) <= 57 )
			goto tr19;
	} else if ( (*fsmRun->p) > 90 ) {
		if ( 97 <= (*fsmRun->p) && (*fsmRun->p) <= 122 )
			goto tr19;
	} else
		goto tr19;
	goto tr34;
st11:
case 11:
	if ( ++fsmRun->p == fsmRun->pe )
		goto out11;
	switch( (*fsmRun->p) ) {
		case 95: goto tr19;
		case 111: goto st12;
	}
	if ( (*fsmRun->p) < 65 ) {
		if ( 48 <= (*fsmRun->p) && (*fsmRun->p) <= 57 )
			goto tr19;
	} else if ( (*fsmRun->p) > 90 ) {
		if ( 97 <= (*fsmRun->p) && (*fsmRun->p) <= 122 )
			goto tr19;
	} else
		goto tr19;
	goto tr35;
st12:
case 12:
	if ( ++fsmRun->p == fsmRun->pe )
		goto out12;
	switch( (*fsmRun->p) ) {
		case 95: goto tr19;
		case 109: goto st13;
	}
	if ( (*fsmRun->p) < 65 ) {
		if ( 48 <= (*fsmRun->p) && (*fsmRun->p) <= 57 )
			goto tr19;
	} else if ( (*fsmRun->p) > 90 ) {
		if ( 97 <= (*fsmRun->p) && (*fsmRun->p) <= 122 )
			goto tr19;
	} else
		goto tr19;
	goto tr35;
st13:
case 13:
	if ( ++fsmRun->p == fsmRun->pe )
		goto out13;
	switch( (*fsmRun->p) ) {
		case 95: goto tr19;
		case 109: goto st14;
	}
	if ( (*fsmRun->p) < 65 ) {
		if ( 48 <= (*fsmRun->p) && (*fsmRun->p) <= 57 )
			goto tr19;
	} else if ( (*fsmRun->p) > 90 ) {
		if ( 97 <= (*fsmRun->p) && (*fsmRun->p) <= 122 )
			goto tr19;
	} else
		goto tr19;
	goto tr35;
st14:
case 14:
	if ( ++fsmRun->p == fsmRun->pe )
		goto out14;
	switch( (*fsmRun->p) ) {
		case 95: goto tr19;
		case 105: goto st15;
	}
	if ( (*fsmRun->p) < 65 ) {
		if ( 48 <= (*fsmRun->p) && (*fsmRun->p) <= 57 )
			goto tr19;
	} else if ( (*fsmRun->p) > 90 ) {
		if ( 97 <= (*fsmRun->p) && (*fsmRun->p) <= 122 )
			goto tr19;
	} else
		goto tr19;
	goto tr35;
st15:
case 15:
	if ( ++fsmRun->p == fsmRun->pe )
		goto out15;
	switch( (*fsmRun->p) ) {
		case 95: goto tr19;
		case 116: goto tr40;
	}
	if ( (*fsmRun->p) < 65 ) {
		if ( 48 <= (*fsmRun->p) && (*fsmRun->p) <= 57 )
			goto tr19;
	} else if ( (*fsmRun->p) > 90 ) {
		if ( 97 <= (*fsmRun->p) && (*fsmRun->p) <= 122 )
			goto tr19;
	} else
		goto tr19;
	goto tr35;
st16:
case 16:
	if ( ++fsmRun->p == fsmRun->pe )
		goto out16;
	switch( (*fsmRun->p) ) {
		case 95: goto tr19;
		case 101: goto st17;
	}
	if ( (*fsmRun->p) < 65 ) {
		if ( 48 <= (*fsmRun->p) && (*fsmRun->p) <= 57 )
			goto tr19;
	} else if ( (*fsmRun->p) > 90 ) {
		if ( 97 <= (*fsmRun->p) && (*fsmRun->p) <= 122 )
			goto tr19;
	} else
		goto tr19;
	goto tr35;
st17:
case 17:
	if ( ++fsmRun->p == fsmRun->pe )
		goto out17;
	switch( (*fsmRun->p) ) {
		case 95: goto tr19;
		case 102: goto tr42;
	}
	if ( (*fsmRun->p) < 65 ) {
		if ( 48 <= (*fsmRun->p) && (*fsmRun->p) <= 57 )
			goto tr19;
	} else if ( (*fsmRun->p) > 90 ) {
		if ( 97 <= (*fsmRun->p) && (*fsmRun->p) <= 122 )
			goto tr19;
	} else
		goto tr19;
	goto tr35;
st18:
case 18:
	if ( ++fsmRun->p == fsmRun->pe )
		goto out18;
	switch( (*fsmRun->p) ) {
		case 95: goto tr19;
		case 110: goto st19;
	}
	if ( (*fsmRun->p) < 65 ) {
		if ( 48 <= (*fsmRun->p) && (*fsmRun->p) <= 57 )
			goto tr19;
	} else if ( (*fsmRun->p) > 90 ) {
		if ( 97 <= (*fsmRun->p) && (*fsmRun->p) <= 122 )
			goto tr19;
	} else
		goto tr19;
	goto tr35;
st19:
case 19:
	if ( ++fsmRun->p == fsmRun->pe )
		goto out19;
	switch( (*fsmRun->p) ) {
		case 95: goto tr19;
		case 100: goto tr44;
	}
	if ( (*fsmRun->p) < 65 ) {
		if ( 48 <= (*fsmRun->p) && (*fsmRun->p) <= 57 )
			goto tr19;
	} else if ( (*fsmRun->p) > 90 ) {
		if ( 97 <= (*fsmRun->p) && (*fsmRun->p) <= 122 )
			goto tr19;
	} else
		goto tr19;
	goto tr35;
st20:
case 20:
	if ( ++fsmRun->p == fsmRun->pe )
		goto out20;
	switch( (*fsmRun->p) ) {
		case 95: goto tr19;
		case 103: goto st21;
	}
	if ( (*fsmRun->p) < 65 ) {
		if ( 48 <= (*fsmRun->p) && (*fsmRun->p) <= 57 )
			goto tr19;
	} else if ( (*fsmRun->p) > 90 ) {
		if ( 97 <= (*fsmRun->p) && (*fsmRun->p) <= 122 )
			goto tr19;
	} else
		goto tr19;
	goto tr35;
st21:
case 21:
	if ( ++fsmRun->p == fsmRun->pe )
		goto out21;
	switch( (*fsmRun->p) ) {
		case 95: goto tr19;
		case 110: goto st22;
	}
	if ( (*fsmRun->p) < 65 ) {
		if ( 48 <= (*fsmRun->p) && (*fsmRun->p) <= 57 )
			goto tr19;
	} else if ( (*fsmRun->p) > 90 ) {
		if ( 97 <= (*fsmRun->p) && (*fsmRun->p) <= 122 )
			goto tr19;
	} else
		goto tr19;
	goto tr35;
st22:
case 22:
	if ( ++fsmRun->p == fsmRun->pe )
		goto out22;
	switch( (*fsmRun->p) ) {
		case 95: goto tr19;
		case 111: goto st23;
	}
	if ( (*fsmRun->p) < 65 ) {
		if ( 48 <= (*fsmRun->p) && (*fsmRun->p) <= 57 )
			goto tr19;
	} else if ( (*fsmRun->p) > 90 ) {
		if ( 97 <= (*fsmRun->p) && (*fsmRun->p) <= 122 )
			goto tr19;
	} else
		goto tr19;
	goto tr35;
st23:
case 23:
	if ( ++fsmRun->p == fsmRun->pe )
		goto out23;
	switch( (*fsmRun->p) ) {
		case 95: goto tr19;
		case 114: goto st24;
	}
	if ( (*fsmRun->p) < 65 ) {
		if ( 48 <= (*fsmRun->p) && (*fsmRun->p) <= 57 )
			goto tr19;
	} else if ( (*fsmRun->p) > 90 ) {
		if ( 97 <= (*fsmRun->p) && (*fsmRun->p) <= 122 )
			goto tr19;
	} else
		goto tr19;
	goto tr35;
st24:
case 24:
	if ( ++fsmRun->p == fsmRun->pe )
		goto out24;
	switch( (*fsmRun->p) ) {
		case 95: goto tr19;
		case 101: goto tr49;
	}
	if ( (*fsmRun->p) < 65 ) {
		if ( 48 <= (*fsmRun->p) && (*fsmRun->p) <= 57 )
			goto tr19;
	} else if ( (*fsmRun->p) > 90 ) {
		if ( 97 <= (*fsmRun->p) && (*fsmRun->p) <= 122 )
			goto tr19;
	} else
		goto tr19;
	goto tr35;
st25:
case 25:
	if ( ++fsmRun->p == fsmRun->pe )
		goto out25;
	switch( (*fsmRun->p) ) {
		case 95: goto tr19;
		case 101: goto st26;
	}
	if ( (*fsmRun->p) < 65 ) {
		if ( 48 <= (*fsmRun->p) && (*fsmRun->p) <= 57 )
			goto tr19;
	} else if ( (*fsmRun->p) > 90 ) {
		if ( 97 <= (*fsmRun->p) && (*fsmRun->p) <= 122 )
			goto tr19;
	} else
		goto tr19;
	goto tr35;
st26:
case 26:
	if ( ++fsmRun->p == fsmRun->pe )
		goto out26;
	switch( (*fsmRun->p) ) {
		case 95: goto tr19;
		case 120: goto tr51;
	}
	if ( (*fsmRun->p) < 65 ) {
		if ( 48 <= (*fsmRun->p) && (*fsmRun->p) <= 57 )
			goto tr19;
	} else if ( (*fsmRun->p) > 90 ) {
		if ( 97 <= (*fsmRun->p) && (*fsmRun->p) <= 122 )
			goto tr19;
	} else
		goto tr19;
	goto tr35;
st27:
case 27:
	if ( ++fsmRun->p == fsmRun->pe )
		goto out27;
	switch( (*fsmRun->p) ) {
		case 95: goto tr19;
		case 105: goto tr52;
	}
	if ( (*fsmRun->p) < 65 ) {
		if ( 48 <= (*fsmRun->p) && (*fsmRun->p) <= 57 )
			goto tr19;
	} else if ( (*fsmRun->p) > 90 ) {
		if ( 97 <= (*fsmRun->p) && (*fsmRun->p) <= 122 )
			goto tr19;
	} else
		goto tr19;
	goto tr35;
st28:
case 28:
	if ( ++fsmRun->p == fsmRun->pe )
		goto out28;
	switch( (*fsmRun->p) ) {
		case 95: goto tr19;
		case 111: goto st29;
	}
	if ( (*fsmRun->p) < 65 ) {
		if ( 48 <= (*fsmRun->p) && (*fsmRun->p) <= 57 )
			goto tr19;
	} else if ( (*fsmRun->p) > 90 ) {
		if ( 97 <= (*fsmRun->p) && (*fsmRun->p) <= 122 )
			goto tr19;
	} else
		goto tr19;
	goto tr35;
st29:
case 29:
	if ( ++fsmRun->p == fsmRun->pe )
		goto out29;
	switch( (*fsmRun->p) ) {
		case 95: goto tr19;
		case 107: goto st30;
	}
	if ( (*fsmRun->p) < 65 ) {
		if ( 48 <= (*fsmRun->p) && (*fsmRun->p) <= 57 )
			goto tr19;
	} else if ( (*fsmRun->p) > 90 ) {
		if ( 97 <= (*fsmRun->p) && (*fsmRun->p) <= 122 )
			goto tr19;
	} else
		goto tr19;
	goto tr35;
st30:
case 30:
	if ( ++fsmRun->p == fsmRun->pe )
		goto out30;
	switch( (*fsmRun->p) ) {
		case 95: goto tr19;
		case 101: goto st31;
	}
	if ( (*fsmRun->p) < 65 ) {
		if ( 48 <= (*fsmRun->p) && (*fsmRun->p) <= 57 )
			goto tr19;
	} else if ( (*fsmRun->p) > 90 ) {
		if ( 97 <= (*fsmRun->p) && (*fsmRun->p) <= 122 )
			goto tr19;
	} else
		goto tr19;
	goto tr35;
st31:
case 31:
	if ( ++fsmRun->p == fsmRun->pe )
		goto out31;
	switch( (*fsmRun->p) ) {
		case 95: goto tr19;
		case 110: goto tr56;
	}
	if ( (*fsmRun->p) < 65 ) {
		if ( 48 <= (*fsmRun->p) && (*fsmRun->p) <= 57 )
			goto tr19;
	} else if ( (*fsmRun->p) > 90 ) {
		if ( 97 <= (*fsmRun->p) && (*fsmRun->p) <= 122 )
			goto tr19;
	} else
		goto tr19;
	goto tr35;
st0:
	goto out0;
tr6:
	{	fsmRun->p += 1;
	fsmRun->matchedToken = 28;
	goto out;
}
	goto st32;
tr57:
	{	fsmRun->p += 1;
	fsmRun->matchedToken = 19;
	goto out;
}
	goto st32;
tr58:
	{	fsmRun->p += 1;
	fsmRun->matchedToken = 20;
	goto out;
}
	goto st32;
tr59:
	{	fsmRun->p += 1;
	fsmRun->matchedToken = 29;
	goto out;
}
	goto st32;
tr60:
	{	fsmRun->p += 1;
	fsmRun->matchedToken = 30;
	goto out;
}
	goto st32;
tr62:
	{	fsmRun->p += 1;
	fsmRun->matchedToken = 16;
	goto out;
}
	goto st32;
tr63:
	{	fsmRun->p += 1;
	fsmRun->matchedToken = 17;
	goto out;
}
	goto st32;
tr65:
	{	fsmRun->p += 1;
	fsmRun->matchedToken = 13;
	goto out;
}
	goto st32;
tr66:
	{	fsmRun->p += 1;
	fsmRun->matchedToken = 14;
	goto out;
}
	goto st32;
tr67:
	{	fsmRun->p += 1;
	fsmRun->matchedToken = 22;
	goto out;
}
	goto st32;
tr75:
	{	fsmRun->p += 1;
	fsmRun->matchedToken = 15;
	goto out;
}
	goto st32;
tr76:
	{	fsmRun->matchedToken = 18;
	goto out;
}
	goto st32;
tr77:
	{	fsmRun->p += 1;
	fsmRun->matchedToken = 21;
	goto out;
}
	goto st32;
tr78:
	{	fsmRun->toklen = fsmRun->tokend;
	switch( fsmRun->act ) {
	case 6:
	fsmRun->matchedToken = 8;
	break;
	case 8:
	fsmRun->matchedToken = 9;
	break;
	case 10:
	fsmRun->matchedToken = 10;
	break;
	case 12:
	fsmRun->matchedToken = 11;
	break;
	case 14:
	fsmRun->matchedToken = 12;
	break;
	case 16:
	fsmRun->matchedToken = 25;
	break;
	case 18:
	fsmRun->matchedToken = 26;
	break;
	case 20:
	fsmRun->matchedToken = 27;
	break;
	}
		goto skip_toklen;
}
	goto st32;
tr79:
	{	fsmRun->matchedToken = 27;
	goto out;
}
	goto st32;
st32:
case 32:
	if ( ++fsmRun->p == fsmRun->pe )
		goto out32;
	{fsmRun->tokstart = fsmRun->p;}
	switch( (*fsmRun->p) ) {
		case 39: goto st4;
		case 40: goto tr57;
		case 41: goto tr58;
		case 42: goto tr59;
		case 43: goto tr60;
		case 46: goto st33;
		case 47: goto tr62;
		case 58: goto tr63;
		case 91: goto tr65;
		case 93: goto tr66;
		case 94: goto tr67;
		case 95: goto tr64;
		case 99: goto st35;
		case 100: goto st40;
		case 101: goto st42;
		case 105: goto st44;
		case 108: goto st49;
		case 110: goto st51;
		case 116: goto st52;
		case 124: goto tr75;
	}
	if ( (*fsmRun->p) > 90 ) {
		if ( 97 <= (*fsmRun->p) && (*fsmRun->p) <= 122 )
			goto tr64;
	} else if ( (*fsmRun->p) >= 65 )
		goto tr64;
	goto st0;
st4:
case 4:
	if ( ++fsmRun->p == fsmRun->pe )
		goto out4;
	switch( (*fsmRun->p) ) {
		case 39: goto tr6;
		case 92: goto st5;
	}
	goto st4;
st5:
case 5:
	if ( ++fsmRun->p == fsmRun->pe )
		goto out5;
	goto st4;
st33:
case 33:
	if ( ++fsmRun->p == fsmRun->pe )
		goto out33;
	if ( (*fsmRun->p) == 46 )
		goto tr77;
	goto tr76;
tr64:
	{{ fsmRun->tokend = fsmRun->toklen + ( fsmRun->p - fsmRun->start ) + 1; }}
	{fsmRun->act = 20;}
	goto st34;
tr84:
	{{ fsmRun->tokend = fsmRun->toklen + ( fsmRun->p - fsmRun->start ) + 1; }}
	{fsmRun->act = 18;}
	goto st34;
tr86:
	{{ fsmRun->tokend = fsmRun->toklen + ( fsmRun->p - fsmRun->start ) + 1; }}
	{fsmRun->act = 6;}
	goto st34;
tr88:
	{{ fsmRun->tokend = fsmRun->toklen + ( fsmRun->p - fsmRun->start ) + 1; }}
	{fsmRun->act = 10;}
	goto st34;
tr93:
	{{ fsmRun->tokend = fsmRun->toklen + ( fsmRun->p - fsmRun->start ) + 1; }}
	{fsmRun->act = 14;}
	goto st34;
tr95:
	{{ fsmRun->tokend = fsmRun->toklen + ( fsmRun->p - fsmRun->start ) + 1; }}
	{fsmRun->act = 8;}
	goto st34;
tr96:
	{{ fsmRun->tokend = fsmRun->toklen + ( fsmRun->p - fsmRun->start ) + 1; }}
	{fsmRun->act = 16;}
	goto st34;
tr100:
	{{ fsmRun->tokend = fsmRun->toklen + ( fsmRun->p - fsmRun->start ) + 1; }}
	{fsmRun->act = 12;}
	goto st34;
st34:
case 34:
	if ( ++fsmRun->p == fsmRun->pe )
		goto out34;
	if ( (*fsmRun->p) == 95 )
		goto tr64;
	if ( (*fsmRun->p) < 65 ) {
		if ( 48 <= (*fsmRun->p) && (*fsmRun->p) <= 57 )
			goto tr64;
	} else if ( (*fsmRun->p) > 90 ) {
		if ( 97 <= (*fsmRun->p) && (*fsmRun->p) <= 122 )
			goto tr64;
	} else
		goto tr64;
	goto tr78;
st35:
case 35:
	if ( ++fsmRun->p == fsmRun->pe )
		goto out35;
	switch( (*fsmRun->p) ) {
		case 95: goto tr64;
		case 111: goto st36;
	}
	if ( (*fsmRun->p) < 65 ) {
		if ( 48 <= (*fsmRun->p) && (*fsmRun->p) <= 57 )
			goto tr64;
	} else if ( (*fsmRun->p) > 90 ) {
		if ( 97 <= (*fsmRun->p) && (*fsmRun->p) <= 122 )
			goto tr64;
	} else
		goto tr64;
	goto tr79;
st36:
case 36:
	if ( ++fsmRun->p == fsmRun->pe )
		goto out36;
	switch( (*fsmRun->p) ) {
		case 95: goto tr64;
		case 109: goto st37;
	}
	if ( (*fsmRun->p) < 65 ) {
		if ( 48 <= (*fsmRun->p) && (*fsmRun->p) <= 57 )
			goto tr64;
	} else if ( (*fsmRun->p) > 90 ) {
		if ( 97 <= (*fsmRun->p) && (*fsmRun->p) <= 122 )
			goto tr64;
	} else
		goto tr64;
	goto tr79;
st37:
case 37:
	if ( ++fsmRun->p == fsmRun->pe )
		goto out37;
	switch( (*fsmRun->p) ) {
		case 95: goto tr64;
		case 109: goto st38;
	}
	if ( (*fsmRun->p) < 65 ) {
		if ( 48 <= (*fsmRun->p) && (*fsmRun->p) <= 57 )
			goto tr64;
	} else if ( (*fsmRun->p) > 90 ) {
		if ( 97 <= (*fsmRun->p) && (*fsmRun->p) <= 122 )
			goto tr64;
	} else
		goto tr64;
	goto tr79;
st38:
case 38:
	if ( ++fsmRun->p == fsmRun->pe )
		goto out38;
	switch( (*fsmRun->p) ) {
		case 95: goto tr64;
		case 105: goto st39;
	}
	if ( (*fsmRun->p) < 65 ) {
		if ( 48 <= (*fsmRun->p) && (*fsmRun->p) <= 57 )
			goto tr64;
	} else if ( (*fsmRun->p) > 90 ) {
		if ( 97 <= (*fsmRun->p) && (*fsmRun->p) <= 122 )
			goto tr64;
	} else
		goto tr64;
	goto tr79;
st39:
case 39:
	if ( ++fsmRun->p == fsmRun->pe )
		goto out39;
	switch( (*fsmRun->p) ) {
		case 95: goto tr64;
		case 116: goto tr84;
	}
	if ( (*fsmRun->p) < 65 ) {
		if ( 48 <= (*fsmRun->p) && (*fsmRun->p) <= 57 )
			goto tr64;
	} else if ( (*fsmRun->p) > 90 ) {
		if ( 97 <= (*fsmRun->p) && (*fsmRun->p) <= 122 )
			goto tr64;
	} else
		goto tr64;
	goto tr79;
st40:
case 40:
	if ( ++fsmRun->p == fsmRun->pe )
		goto out40;
	switch( (*fsmRun->p) ) {
		case 95: goto tr64;
		case 101: goto st41;
	}
	if ( (*fsmRun->p) < 65 ) {
		if ( 48 <= (*fsmRun->p) && (*fsmRun->p) <= 57 )
			goto tr64;
	} else if ( (*fsmRun->p) > 90 ) {
		if ( 97 <= (*fsmRun->p) && (*fsmRun->p) <= 122 )
			goto tr64;
	} else
		goto tr64;
	goto tr79;
st41:
case 41:
	if ( ++fsmRun->p == fsmRun->pe )
		goto out41;
	switch( (*fsmRun->p) ) {
		case 95: goto tr64;
		case 102: goto tr86;
	}
	if ( (*fsmRun->p) < 65 ) {
		if ( 48 <= (*fsmRun->p) && (*fsmRun->p) <= 57 )
			goto tr64;
	} else if ( (*fsmRun->p) > 90 ) {
		if ( 97 <= (*fsmRun->p) && (*fsmRun->p) <= 122 )
			goto tr64;
	} else
		goto tr64;
	goto tr79;
st42:
case 42:
	if ( ++fsmRun->p == fsmRun->pe )
		goto out42;
	switch( (*fsmRun->p) ) {
		case 95: goto tr64;
		case 110: goto st43;
	}
	if ( (*fsmRun->p) < 65 ) {
		if ( 48 <= (*fsmRun->p) && (*fsmRun->p) <= 57 )
			goto tr64;
	} else if ( (*fsmRun->p) > 90 ) {
		if ( 97 <= (*fsmRun->p) && (*fsmRun->p) <= 122 )
			goto tr64;
	} else
		goto tr64;
	goto tr79;
st43:
case 43:
	if ( ++fsmRun->p == fsmRun->pe )
		goto out43;
	switch( (*fsmRun->p) ) {
		case 95: goto tr64;
		case 100: goto tr88;
	}
	if ( (*fsmRun->p) < 65 ) {
		if ( 48 <= (*fsmRun->p) && (*fsmRun->p) <= 57 )
			goto tr64;
	} else if ( (*fsmRun->p) > 90 ) {
		if ( 97 <= (*fsmRun->p) && (*fsmRun->p) <= 122 )
			goto tr64;
	} else
		goto tr64;
	goto tr79;
st44:
case 44:
	if ( ++fsmRun->p == fsmRun->pe )
		goto out44;
	switch( (*fsmRun->p) ) {
		case 95: goto tr64;
		case 103: goto st45;
	}
	if ( (*fsmRun->p) < 65 ) {
		if ( 48 <= (*fsmRun->p) && (*fsmRun->p) <= 57 )
			goto tr64;
	} else if ( (*fsmRun->p) > 90 ) {
		if ( 97 <= (*fsmRun->p) && (*fsmRun->p) <= 122 )
			goto tr64;
	} else
		goto tr64;
	goto tr79;
st45:
case 45:
	if ( ++fsmRun->p == fsmRun->pe )
		goto out45;
	switch( (*fsmRun->p) ) {
		case 95: goto tr64;
		case 110: goto st46;
	}
	if ( (*fsmRun->p) < 65 ) {
		if ( 48 <= (*fsmRun->p) && (*fsmRun->p) <= 57 )
			goto tr64;
	} else if ( (*fsmRun->p) > 90 ) {
		if ( 97 <= (*fsmRun->p) && (*fsmRun->p) <= 122 )
			goto tr64;
	} else
		goto tr64;
	goto tr79;
st46:
case 46:
	if ( ++fsmRun->p == fsmRun->pe )
		goto out46;
	switch( (*fsmRun->p) ) {
		case 95: goto tr64;
		case 111: goto st47;
	}
	if ( (*fsmRun->p) < 65 ) {
		if ( 48 <= (*fsmRun->p) && (*fsmRun->p) <= 57 )
			goto tr64;
	} else if ( (*fsmRun->p) > 90 ) {
		if ( 97 <= (*fsmRun->p) && (*fsmRun->p) <= 122 )
			goto tr64;
	} else
		goto tr64;
	goto tr79;
st47:
case 47:
	if ( ++fsmRun->p == fsmRun->pe )
		goto out47;
	switch( (*fsmRun->p) ) {
		case 95: goto tr64;
		case 114: goto st48;
	}
	if ( (*fsmRun->p) < 65 ) {
		if ( 48 <= (*fsmRun->p) && (*fsmRun->p) <= 57 )
			goto tr64;
	} else if ( (*fsmRun->p) > 90 ) {
		if ( 97 <= (*fsmRun->p) && (*fsmRun->p) <= 122 )
			goto tr64;
	} else
		goto tr64;
	goto tr79;
st48:
case 48:
	if ( ++fsmRun->p == fsmRun->pe )
		goto out48;
	switch( (*fsmRun->p) ) {
		case 95: goto tr64;
		case 101: goto tr93;
	}
	if ( (*fsmRun->p) < 65 ) {
		if ( 48 <= (*fsmRun->p) && (*fsmRun->p) <= 57 )
			goto tr64;
	} else if ( (*fsmRun->p) > 90 ) {
		if ( 97 <= (*fsmRun->p) && (*fsmRun->p) <= 122 )
			goto tr64;
	} else
		goto tr64;
	goto tr79;
st49:
case 49:
	if ( ++fsmRun->p == fsmRun->pe )
		goto out49;
	switch( (*fsmRun->p) ) {
		case 95: goto tr64;
		case 101: goto st50;
	}
	if ( (*fsmRun->p) < 65 ) {
		if ( 48 <= (*fsmRun->p) && (*fsmRun->p) <= 57 )
			goto tr64;
	} else if ( (*fsmRun->p) > 90 ) {
		if ( 97 <= (*fsmRun->p) && (*fsmRun->p) <= 122 )
			goto tr64;
	} else
		goto tr64;
	goto tr79;
st50:
case 50:
	if ( ++fsmRun->p == fsmRun->pe )
		goto out50;
	switch( (*fsmRun->p) ) {
		case 95: goto tr64;
		case 120: goto tr95;
	}
	if ( (*fsmRun->p) < 65 ) {
		if ( 48 <= (*fsmRun->p) && (*fsmRun->p) <= 57 )
			goto tr64;
	} else if ( (*fsmRun->p) > 90 ) {
		if ( 97 <= (*fsmRun->p) && (*fsmRun->p) <= 122 )
			goto tr64;
	} else
		goto tr64;
	goto tr79;
st51:
case 51:
	if ( ++fsmRun->p == fsmRun->pe )
		goto out51;
	switch( (*fsmRun->p) ) {
		case 95: goto tr64;
		case 105: goto tr96;
	}
	if ( (*fsmRun->p) < 65 ) {
		if ( 48 <= (*fsmRun->p) && (*fsmRun->p) <= 57 )
			goto tr64;
	} else if ( (*fsmRun->p) > 90 ) {
		if ( 97 <= (*fsmRun->p) && (*fsmRun->p) <= 122 )
			goto tr64;
	} else
		goto tr64;
	goto tr79;
st52:
case 52:
	if ( ++fsmRun->p == fsmRun->pe )
		goto out52;
	switch( (*fsmRun->p) ) {
		case 95: goto tr64;
		case 111: goto st53;
	}
	if ( (*fsmRun->p) < 65 ) {
		if ( 48 <= (*fsmRun->p) && (*fsmRun->p) <= 57 )
			goto tr64;
	} else if ( (*fsmRun->p) > 90 ) {
		if ( 97 <= (*fsmRun->p) && (*fsmRun->p) <= 122 )
			goto tr64;
	} else
		goto tr64;
	goto tr79;
st53:
case 53:
	if ( ++fsmRun->p == fsmRun->pe )
		goto out53;
	switch( (*fsmRun->p) ) {
		case 95: goto tr64;
		case 107: goto st54;
	}
	if ( (*fsmRun->p) < 65 ) {
		if ( 48 <= (*fsmRun->p) && (*fsmRun->p) <= 57 )
			goto tr64;
	} else if ( (*fsmRun->p) > 90 ) {
		if ( 97 <= (*fsmRun->p) && (*fsmRun->p) <= 122 )
			goto tr64;
	} else
		goto tr64;
	goto tr79;
st54:
case 54:
	if ( ++fsmRun->p == fsmRun->pe )
		goto out54;
	switch( (*fsmRun->p) ) {
		case 95: goto tr64;
		case 101: goto st55;
	}
	if ( (*fsmRun->p) < 65 ) {
		if ( 48 <= (*fsmRun->p) && (*fsmRun->p) <= 57 )
			goto tr64;
	} else if ( (*fsmRun->p) > 90 ) {
		if ( 97 <= (*fsmRun->p) && (*fsmRun->p) <= 122 )
			goto tr64;
	} else
		goto tr64;
	goto tr79;
st55:
case 55:
	if ( ++fsmRun->p == fsmRun->pe )
		goto out55;
	switch( (*fsmRun->p) ) {
		case 95: goto tr64;
		case 110: goto tr100;
	}
	if ( (*fsmRun->p) < 65 ) {
		if ( 48 <= (*fsmRun->p) && (*fsmRun->p) <= 57 )
			goto tr64;
	} else if ( (*fsmRun->p) > 90 ) {
		if ( 97 <= (*fsmRun->p) && (*fsmRun->p) <= 122 )
			goto tr64;
	} else
		goto tr64;
	goto tr79;
tr9:
	{	fsmRun->p += 1;
	fsmRun->matchedToken = 24;
	goto out;
}
	goto st56;
tr102:
	{	fsmRun->matchedToken = 23;
	goto out;
}
	goto st56;
st56:
case 56:
	if ( ++fsmRun->p == fsmRun->pe )
		goto out56;
	{fsmRun->tokstart = fsmRun->p;}
	switch( (*fsmRun->p) ) {
		case 32: goto st57;
		case 35: goto st6;
	}
	if ( 9 <= (*fsmRun->p) && (*fsmRun->p) <= 11 )
		goto st57;
	goto st0;
st57:
case 57:
	if ( ++fsmRun->p == fsmRun->pe )
		goto out57;
	if ( (*fsmRun->p) == 32 )
		goto st57;
	if ( 9 <= (*fsmRun->p) && (*fsmRun->p) <= 11 )
		goto st57;
	goto tr102;
st6:
case 6:
	if ( ++fsmRun->p == fsmRun->pe )
		goto out6;
	if ( (*fsmRun->p) == 10 )
		goto tr9;
	goto st6;
	}
out_switch:
	switch ( fsmRun->cs )
	{
	case 7: out7: fsmRun->cs = 7; goto out; 
	case 8: out8: if ( fsmRun->eof ) {goto tr31;
}fsmRun->cs = 8; goto out; 
	case 1: out1: fsmRun->cs = 1; goto out; 
	case 2: out2: fsmRun->cs = 2; goto out; 
	case 3: out3: fsmRun->cs = 3; goto out; 
	case 9: out9: if ( fsmRun->eof ) {goto tr32;
}fsmRun->cs = 9; goto out; 
	case 10: out10: if ( fsmRun->eof ) {goto tr34;
}fsmRun->cs = 10; goto out; 
	case 11: out11: if ( fsmRun->eof ) {goto tr35;
}fsmRun->cs = 11; goto out; 
	case 12: out12: if ( fsmRun->eof ) {goto tr35;
}fsmRun->cs = 12; goto out; 
	case 13: out13: if ( fsmRun->eof ) {goto tr35;
}fsmRun->cs = 13; goto out; 
	case 14: out14: if ( fsmRun->eof ) {goto tr35;
}fsmRun->cs = 14; goto out; 
	case 15: out15: if ( fsmRun->eof ) {goto tr35;
}fsmRun->cs = 15; goto out; 
	case 16: out16: if ( fsmRun->eof ) {goto tr35;
}fsmRun->cs = 16; goto out; 
	case 17: out17: if ( fsmRun->eof ) {goto tr35;
}fsmRun->cs = 17; goto out; 
	case 18: out18: if ( fsmRun->eof ) {goto tr35;
}fsmRun->cs = 18; goto out; 
	case 19: out19: if ( fsmRun->eof ) {goto tr35;
}fsmRun->cs = 19; goto out; 
	case 20: out20: if ( fsmRun->eof ) {goto tr35;
}fsmRun->cs = 20; goto out; 
	case 21: out21: if ( fsmRun->eof ) {goto tr35;
}fsmRun->cs = 21; goto out; 
	case 22: out22: if ( fsmRun->eof ) {goto tr35;
}fsmRun->cs = 22; goto out; 
	case 23: out23: if ( fsmRun->eof ) {goto tr35;
}fsmRun->cs = 23; goto out; 
	case 24: out24: if ( fsmRun->eof ) {goto tr35;
}fsmRun->cs = 24; goto out; 
	case 25: out25: if ( fsmRun->eof ) {goto tr35;
}fsmRun->cs = 25; goto out; 
	case 26: out26: if ( fsmRun->eof ) {goto tr35;
}fsmRun->cs = 26; goto out; 
	case 27: out27: if ( fsmRun->eof ) {goto tr35;
}fsmRun->cs = 27; goto out; 
	case 28: out28: if ( fsmRun->eof ) {goto tr35;
}fsmRun->cs = 28; goto out; 
	case 29: out29: if ( fsmRun->eof ) {goto tr35;
}fsmRun->cs = 29; goto out; 
	case 30: out30: if ( fsmRun->eof ) {goto tr35;
}fsmRun->cs = 30; goto out; 
	case 31: out31: if ( fsmRun->eof ) {goto tr35;
}fsmRun->cs = 31; goto out; 
	case 0: out0: fsmRun->cs = 0; goto out; 
	case 32: out32: fsmRun->cs = 32; goto out; 
	case 4: out4: fsmRun->cs = 4; goto out; 
	case 5: out5: fsmRun->cs = 5; goto out; 
	case 33: out33: if ( fsmRun->eof ) {goto tr76;
}fsmRun->cs = 33; goto out; 
	case 34: out34: if ( fsmRun->eof ) {goto tr78;
}fsmRun->cs = 34; goto out; 
	case 35: out35: if ( fsmRun->eof ) {goto tr79;
}fsmRun->cs = 35; goto out; 
	case 36: out36: if ( fsmRun->eof ) {goto tr79;
}fsmRun->cs = 36; goto out; 
	case 37: out37: if ( fsmRun->eof ) {goto tr79;
}fsmRun->cs = 37; goto out; 
	case 38: out38: if ( fsmRun->eof ) {goto tr79;
}fsmRun->cs = 38; goto out; 
	case 39: out39: if ( fsmRun->eof ) {goto tr79;
}fsmRun->cs = 39; goto out; 
	case 40: out40: if ( fsmRun->eof ) {goto tr79;
}fsmRun->cs = 40; goto out; 
	case 41: out41: if ( fsmRun->eof ) {goto tr79;
}fsmRun->cs = 41; goto out; 
	case 42: out42: if ( fsmRun->eof ) {goto tr79;
}fsmRun->cs = 42; goto out; 
	case 43: out43: if ( fsmRun->eof ) {goto tr79;
}fsmRun->cs = 43; goto out; 
	case 44: out44: if ( fsmRun->eof ) {goto tr79;
}fsmRun->cs = 44; goto out; 
	case 45: out45: if ( fsmRun->eof ) {goto tr79;
}fsmRun->cs = 45; goto out; 
	case 46: out46: if ( fsmRun->eof ) {goto tr79;
}fsmRun->cs = 46; goto out; 
	case 47: out47: if ( fsmRun->eof ) {goto tr79;
}fsmRun->cs = 47; goto out; 
	case 48: out48: if ( fsmRun->eof ) {goto tr79;
}fsmRun->cs = 48; goto out; 
	case 49: out49: if ( fsmRun->eof ) {goto tr79;
}fsmRun->cs = 49; goto out; 
	case 50: out50: if ( fsmRun->eof ) {goto tr79;
}fsmRun->cs = 50; goto out; 
	case 51: out51: if ( fsmRun->eof ) {goto tr79;
}fsmRun->cs = 51; goto out; 
	case 52: out52: if ( fsmRun->eof ) {goto tr79;
}fsmRun->cs = 52; goto out; 
	case 53: out53: if ( fsmRun->eof ) {goto tr79;
}fsmRun->cs = 53; goto out; 
	case 54: out54: if ( fsmRun->eof ) {goto tr79;
}fsmRun->cs = 54; goto out; 
	case 55: out55: if ( fsmRun->eof ) {goto tr79;
}fsmRun->cs = 55; goto out; 
	case 56: out56: fsmRun->cs = 56; goto out; 
	case 57: out57: if ( fsmRun->eof ) {goto tr102;
}fsmRun->cs = 57; goto out; 
	case 6: out6: fsmRun->cs = 6; goto out; 
	}
out:
	if ( fsmRun->p != 0 )
		fsmRun->toklen += fsmRun->p - fsmRun->start;
skip_toklen:
	{}
}

static void sendNamedLangEl( Program *prg, Tree **tree, PdaRun *pdaRun,
		FsmRun *fsmRun, StreamImpl *inputStream ) { }
static void initBindings( PdaRun *pdaRun ) {}
static void popBinding( PdaRun *pdaRun, ParseTree *tree ) {}


static int pid_0_parser_indicies[] = {
	4, 3, 5, 62, 98, 4, 3, 6, 
	62, 100, 83, 14, 15, 16, 95, 95, 
	95, 97, 97, 90, 90, 19, 11, 83, 
	18, 20, 90, 40, 93, 93, 93, 94, 
	94, 94, 96, 96, 83, 83, 17, 39, 
	11, 41, 2, 0, 22, 1, 50, 2, 
	13, 12, 8, 95, 95, 7, 10, 9, 
	99, 24, 77, 97, 82, 90, 97, 80, 
	90, 93, 93, 27, 94, 94, 23, 21, 
	25, 82, 35, 57, 96, 32, -1, 96, 
	26, -1, 36, 34, 48, 49, 82, 82, 
	33, 31, 30, 29, 28, 48, 75, 75, 
	101, 47, 56, 75, -1, 101, -1, 5, 
	76, 76, 76, 81, 48, 60, 76, 74, 
	74, 97, 47, 90, 74, 87, 87, -1, 
	81, 89, 89, -1, 87, -1, 38, -1, 
	89, -1, 96, -1, -1, 81, 81, 87, 
	-1, -1, -1, 17, -1, 76, 76, 2, 
	0, -1, 1, -1, 2, 13, 12, 8, 
	87, 37, 7, 10, 9, -1, -1, 87, 
	-1, -1, 87, 89, 73, 73, 89, 73, 
	-1, 73, -1, 23, 21, 25, -1, -1, 
	-1, -1, 45, 46, -1, 26, 71, 71, 
	-1, 71, -1, 71, -1, 33, 31, 30, 
	29, 28, -1, 35, 71, 71, 32, -1, 
	91, 91, 91, 36, 34, -1, -1, -1, 
	-1, 33, 43, 68, 68, 87, 68, -1, 
	68, 89, 63, 63, -1, 63, -1, 63, 
	44, 68, 68, 35, -1, -1, 32, -1, 
	63, 63, -1, 36, 34, 91, 91, -1, 
	-1, 33, 31, 30, 29, 42, 64, 64, 
	-1, 64, 79, 64, 85, 85, 37, 92, 
	92, 92, -1, 85, 64, 64, -1, 79, 
	35, 54, -1, 32, -1, -1, 52, -1, 
	36, 34, -1, 53, 79, 79, 33, 31, 
	30, 29, 55, -1, -1, 67, 67, 51, 
	67, -1, 67, -1, 92, 92, 85, -1, 
	-1, 85, -1, 67, 67, 69, 69, -1, 
	69, -1, 69, 88, 88, -1, 33, 43, 
	84, 84, 88, 69, 69, 70, 70, 84, 
	70, 35, 70, -1, 32, -1, -1, -1, 
	-1, 36, 34, 70, 70, 86, 86, 33, 
	31, 58, -1, -1, 86, -1, 33, 31, 
	30, 29, 42, 35, 85, 88, 32, 86, 
	88, -1, 84, 36, 34, 84, 78, -1, 
	-1, 33, 31, 30, 59, -1, -1, -1, 
	86, -1, -1, 78, -1, -1, -1, 86, 
	53, -1, 86, 33, 31, 30, 29, 55, 
	78, 78, 65, 65, 51, 65, -1, 65, 
	66, 66, -1, 66, -1, 66, -1, -1, 
	65, 65, -1, 88, -1, -1, 66, 66, 
	84, 72, 72, -1, 72, -1, 72, 77, 
	77, 77, -1, -1, -1, -1, -1, 45, 
	46, -1, -1, -1, -1, 86, 27, -1, 
	-1, -1, -1, -1, 33, 31, 58, -1, 
	-1, -1, -1, 61, -1, -1, -1, -1, 
	-1, -1, -1, -1, 77, 77, -1, -1, 
	-1, -1, -1, -1, -1, -1, 33, 31, 
	30, 59, -1, -1, -1, -1, -1, -1, 
	-1, -1, -1, -1, -1, -1, -1, -1, 
	-1, -1, -1, -1, -1, -1, -1, -1, 
	-1, -1, -1, -1, -1, -1, -1, -1, 
	-1, -1, -1, -1, -1, -1, -1, -1, 
	-1, -1, -1, -1, -1, -1, -1, -1, 
	-1, -1, -1, -1, -1, -1, -1, -1, 
	-1, -1, -1, -1, -1, -1, -1, -1, 
	-1, -1, -1, -1, -1, -1, -1, -1, 
	-1, -1, -1, -1, -1, -1, -1, -1, 
	61
};

static int pid_0_parser_owners[] = {
	0, 0, 1, 2, 3, 4, 4, 6, 
	7, 10, 13, 9, 9, 9, 5, 5, 
	5, 11, 11, 12, 12, 17, 8, 13, 
	11, 18, 12, 25, 14, 14, 14, 15, 
	15, 15, 16, 16, 13, 13, 13, 26, 
	20, 28, 0, 0, 19, 0, 40, 4, 
	9, 9, 4, 5, 5, 5, 8, 8, 
	1, 19, 21, 11, 23, 12, 11, 41, 
	12, 14, 14, 21, 15, 15, 19, 19, 
	20, 23, 22, 46, 16, 22, -1, 16, 
	21, -1, 22, 22, 30, 30, 23, 23, 
	22, 22, 22, 22, 22, 44, 31, 31, 
	0, 31, 44, 31, -1, 4, -1, 1, 
	29, 29, 29, 55, 57, 57, 29, 61, 
	61, 11, 61, 12, 61, 24, 24, -1, 
	55, 27, 27, -1, 24, -1, 24, -1, 
	27, -1, 16, -1, -1, 55, 55, 24, 
	-1, -1, -1, 13, -1, 29, 29, 0, 
	0, -1, 0, -1, 4, 9, 9, 4, 
	24, 24, 5, 8, 8, -1, -1, 24, 
	-1, -1, 24, 27, 32, 32, 27, 32, 
	-1, 32, -1, 19, 19, 20, -1, -1, 
	-1, -1, 32, 32, -1, 21, 33, 33, 
	-1, 33, -1, 33, -1, 22, 22, 22, 
	22, 22, -1, 34, 33, 33, 34, -1, 
	51, 51, 51, 34, 34, -1, -1, -1, 
	-1, 34, 34, 35, 35, 24, 35, -1, 
	35, 27, 36, 36, -1, 36, -1, 36, 
	36, 35, 35, 37, -1, -1, 37, -1, 
	36, 36, -1, 37, 37, 51, 51, -1, 
	-1, 37, 37, 37, 37, 37, 38, 38, 
	-1, 38, 42, 38, 39, 39, 24, 63, 
	63, 63, -1, 39, 38, 38, -1, 42, 
	43, 42, -1, 43, -1, -1, 39, -1, 
	43, 43, -1, 42, 42, 42, 43, 43, 
	43, 43, 43, -1, -1, 45, 45, 39, 
	45, -1, 45, -1, 63, 63, 39, -1, 
	-1, 39, -1, 45, 45, 47, 47, -1, 
	47, -1, 47, 53, 53, -1, 34, 34, 
	54, 54, 53, 47, 47, 48, 48, 54, 
	48, 49, 48, -1, 49, -1, -1, -1, 
	-1, 49, 49, 48, 48, 52, 52, 49, 
	49, 49, -1, -1, 52, -1, 37, 37, 
	37, 37, 37, 50, 39, 53, 50, 52, 
	53, -1, 54, 50, 50, 54, 56, -1, 
	-1, 50, 50, 50, 50, -1, -1, -1, 
	52, -1, -1, 56, -1, -1, -1, 52, 
	42, -1, 52, 43, 43, 43, 43, 43, 
	56, 56, 58, 58, 39, 58, -1, 58, 
	59, 59, -1, 59, -1, 59, -1, -1, 
	58, 58, -1, 53, -1, -1, 59, 59, 
	54, 60, 60, -1, 60, -1, 60, 62, 
	62, 62, -1, -1, -1, -1, -1, 60, 
	60, -1, -1, -1, -1, 52, 62, -1, 
	-1, -1, -1, -1, 49, 49, 49, -1, 
	-1, -1, -1, 62, -1, -1, -1, -1, 
	-1, -1, -1, -1, 62, 62, -1, -1, 
	-1, -1, -1, -1, -1, -1, 50, 50, 
	50, 50, -1, -1, -1, -1, -1, -1, 
	-1, -1, -1, -1, -1, -1, -1, -1, 
	-1, -1, -1, -1, -1, -1, -1, -1, 
	-1, -1, -1, -1, -1, -1, -1, -1, 
	-1, -1, -1, -1, -1, -1, -1, -1, 
	-1, -1, -1, -1, -1, -1, -1, -1, 
	-1, -1, -1, -1, -1, -1, -1, -1, 
	-1, -1, -1, -1, -1, -1, -1, -1, 
	-1, -1, -1, -1, -1, -1, -1, -1, 
	-1, -1, -1, -1, -1, -1, -1, -1, 
	62
};

static int pid_0_parser_keys[] = {
	8, 154, 52, 153, 104, 104, 104, 104, 
	8, 154, 10, 150, 27, 27, 106, 106, 
	13, 147, 10, 149, 104, 104, 8, 104, 
	8, 104, 14, 143, 10, 48, 10, 48, 
	8, 104, 27, 27, 16, 16, 14, 142, 
	13, 146, 16, 139, 19, 138, 14, 41, 
	8, 145, 27, 27, 17, 17, 8, 104, 
	16, 16, 10, 48, 15, 16, 15, 20, 
	15, 30, 15, 30, 19, 135, 15, 30, 
	15, 30, 19, 138, 15, 30, 8, 144, 
	27, 27, 27, 27, 14, 140, 19, 138, 
	15, 20, 15, 30, 28, 28, 15, 30, 
	15, 30, 19, 136, 19, 137, 10, 48, 
	8, 104, 8, 104, 8, 104, 14, 41, 
	14, 41, 15, 16, 15, 30, 15, 30, 
	15, 30, 15, 20, 10, 139, 10, 48, 
	0, 0
};

static unsigned int pid_0_parser_offsets[] = {
	0, 2, 3, 4, 5, 14, 7, 8, 
	22, 11, 9, 17, 19, 10, 28, 31, 
	34, 21, 25, 44, 40, 58, 74, 60, 
	117, 27, 39, 121, 41, 104, 84, 94, 
	164, 182, 195, 211, 218, 227, 246, 252, 
	46, 63, 250, 264, 93, 285, 75, 301, 
	317, 321, 347, 200, 333, 307, 312, 107, 
	358, 108, 386, 392, 409, 111, 415, 255, 
	0
};

static unsigned int pid_0_parser_targs[] = {
	2, 3, 4, 5, 6, 7, 8, 9, 
	10, 11, 12, 13, 14, 15, 16, 17, 
	18, 19, 20, 21, 22, 23, 24, 25, 
	26, 27, 28, 29, 30, 31, 32, 33, 
	34, 35, 36, 37, 38, 39, 40, 41, 
	42, 43, 44, 45, 46, 47, 48, 49, 
	50, 51, 52, 53, 54, 55, 56, 57, 
	58, 59, 60, 61, 62, 63, 64, 64, 
	64, 64, 64, 64, 64, 64, 64, 64, 
	64, 64, 64, 64, 64, 64, 64, 64, 
	64, 64, 64, 64, 64, 64, 64, 64, 
	64, 64, 64, 64, 64, 64, 64, 64, 
	64, 64, 64, 64, 64, 64
};

static unsigned int pid_0_parser_actInds[] = {
	0, 2, 4, 6, 8, 10, 12, 14, 
	16, 18, 20, 22, 24, 26, 28, 30, 
	32, 34, 36, 38, 40, 42, 44, 46, 
	48, 51, 53, 55, 57, 59, 61, 63, 
	65, 67, 69, 71, 73, 75, 77, 79, 
	81, 83, 85, 87, 89, 91, 93, 95, 
	97, 99, 101, 103, 105, 107, 109, 111, 
	113, 115, 117, 119, 121, 123, 125, 127, 
	129, 131, 133, 135, 137, 139, 141, 143, 
	145, 147, 149, 151, 153, 155, 157, 159, 
	161, 163, 165, 167, 169, 171, 173, 175, 
	177, 179, 181, 183, 185, 187, 189, 191, 
	193, 195, 197, 199, 201, 203
};

static unsigned int pid_0_parser_actions[] = {
	1, 0, 1, 0, 1, 0, 1, 0, 
	1, 0, 1, 0, 1, 0, 1, 0, 
	1, 0, 1, 0, 1, 0, 1, 0, 
	1, 0, 1, 0, 1, 0, 1, 0, 
	1, 0, 1, 0, 1, 0, 1, 0, 
	1, 0, 1, 0, 1, 0, 1, 0, 
	1, 74, 0, 1, 0, 1, 0, 1, 
	0, 1, 0, 1, 0, 1, 0, 1, 
	0, 1, 0, 1, 0, 1, 0, 1, 
	0, 1, 0, 1, 0, 1, 0, 1, 
	0, 1, 0, 1, 0, 1, 0, 1, 
	0, 1, 0, 1, 0, 1, 0, 1, 
	0, 1, 0, 1, 0, 1, 0, 1, 
	0, 1, 0, 1, 0, 1, 0, 1, 
	0, 1, 0, 1, 0, 1, 0, 1, 
	0, 1, 0, 1, 0, 1, 0, 2, 
	0, 6, 0, 10, 0, 14, 0, 18, 
	0, 22, 0, 26, 0, 30, 0, 34, 
	0, 38, 0, 42, 0, 46, 0, 50, 
	0, 54, 0, 58, 0, 62, 0, 66, 
	0, 70, 0, 78, 0, 82, 0, 86, 
	0, 90, 0, 94, 0, 98, 0, 102, 
	0, 106, 0, 110, 0, 114, 0, 118, 
	0, 122, 0, 126, 0, 130, 0, 134, 
	0, 138, 0, 142, 0, 146, 0, 150, 
	0, 154, 0, 158, 0
};

static int pid_0_parser_commitLen[] = {
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0
};

static int pid_0_parser_tokenRegionInds[] = {
	1, 3, 5, 7, 9, 11, 13, 15, 
	17, 19, 21, 23, 25, 27, 29, 31, 
	33, 35, 37, 39, 41, 43, 45, 47, 
	49, 51, 53, 55, 57, 59, 61, 63, 
	65, 67, 69, 71, 73, 75, 77, 79, 
	81, 83, 85, 87, 89, 91, 93, 95, 
	97, 99, 101, 103, 105, 107, 109, 111, 
	113, 115, 117, 119, 121, 123, 125, 127, 
	129
};

static int pid_0_parser_tokenRegions[] = {
	0, 1, 0, 0, 0, 0, 0, 0, 
	0, 1, 0, 1, 0, 1, 0, 0, 
	0, 1, 0, 1, 0, 0, 0, 1, 
	0, 1, 0, 1, 0, 1, 0, 1, 
	0, 1, 0, 1, 0, 1, 0, 1, 
	0, 1, 0, 1, 0, 1, 0, 1, 
	0, 1, 0, 1, 0, 1, 0, 1, 
	0, 1, 0, 1, 0, 1, 0, 1, 
	0, 1, 0, 1, 0, 1, 0, 1, 
	0, 1, 0, 1, 0, 1, 0, 1, 
	0, 1, 0, 1, 0, 1, 0, 1, 
	0, 1, 0, 1, 0, 1, 0, 1, 
	0, 1, 0, 1, 0, 1, 0, 1, 
	0, 1, 0, 1, 0, 1, 0, 1, 
	0, 1, 0, 1, 0, 1, 0, 1, 
	0, 1, 0, 1, 0, 1, 0, 1, 
	0, 0
};

static int pid_0_parser_tokenPreRegions[] = {
	0, -1, 0, -1, 0, -1, 0, -1, 
	0, -1, 0, 3, 0, 3, 0, -1, 
	0, 3, 0, -1, 0, -1, 0, -1, 
	0, -1, 0, 3, 0, -1, 0, -1, 
	0, 3, 0, 3, 0, 3, 0, -1, 
	0, 3, 0, 3, 0, 3, 0, -1, 
	0, 3, 0, -1, 0, 3, 0, -1, 
	0, -1, 0, 3, 0, -1, 0, -1, 
	0, -1, 0, -1, 0, 3, 0, -1, 
	0, 3, 0, 3, 0, 3, 0, -1, 
	0, 3, 0, 3, 0, 3, 0, 3, 
	0, -1, 0, -1, 0, 3, 0, 3, 
	0, 3, 0, 3, 0, 3, 0, 3, 
	0, 3, 0, -1, 0, 3, 0, -1, 
	0, 3, 0, -1, 0, 3, 0, 3, 
	0, -1, 0, -1, 0, 3, 0, -1, 
	0, 0
};

static PdaTables pid_0_pdaTables =
{
	pid_0_parser_indicies,
	pid_0_parser_owners,
	pid_0_parser_keys,
	pid_0_parser_offsets,
	pid_0_parser_targs,
	pid_0_parser_actInds,
	pid_0_parser_actions,
	pid_0_parser_commitLen,
	pid_0_parser_tokenRegionInds,
	pid_0_parser_tokenRegions,
	pid_0_parser_tokenPreRegions,

	545,
	130,
	65,
	102,
	102,
	205,
	102,
	130,
	130
};

static LocalInfo locals_0[] = {
	{ 1, -1 }
};

static unsigned char copy_0[] = {
	0, 0
};

static unsigned char copy_1[] = {
	0, 0
};

static unsigned char copy_2[] = {
	0, 1
};

static unsigned char copy_3[] = {
	0, 0, 0, 2
};

static unsigned char copy_4[] = {
	0, 1
};

static unsigned char copy_5[] = {
	0, 0
};

static unsigned char copy_6[] = {
	0, 0, 0, 1
};

static unsigned char copy_7[] = {
	0, 0, 0, 1
};

static unsigned char copy_8[] = {
	0, 0
};

static unsigned char copy_9[] = {
	0, 0, 0, 2
};

static unsigned char copy_10[] = {
	0, 0
};

static unsigned char copy_11[] = {
	0, 0, 0, 2
};

static unsigned char copy_12[] = {
	0, 0
};

static unsigned char copy_13[] = {
	0, 0
};

static unsigned char copy_15[] = {
	0, 0
};

static unsigned char copy_17[] = {
	0, 0
};

static unsigned char copy_19[] = {
	0, 0, 0, 1, 0, 2
};

static unsigned char copy_20[] = {
	0, 0, 0, 1
};

static unsigned char copy_22[] = {
	0, 0
};

static unsigned char copy_24[] = {
	0, 1
};

static unsigned char copy_26[] = {
	0, 1, 0, 3, 0, 4
};

static unsigned char copy_27[] = {
	0, 0, 0, 2
};

static unsigned char copy_28[] = {
	0, 0
};

static unsigned char copy_29[] = {
	0, 2
};

static unsigned char copy_30[] = {
	0, 1, 0, 2, 0, 4, 0, 6
};

static unsigned char copy_31[] = {
	0, 0, 0, 1
};

static unsigned char copy_32[] = {
	0, 0, 0, 1
};

static unsigned char copy_34[] = {
	0, 1
};

static unsigned char copy_35[] = {
	0, 1, 0, 2
};

static unsigned char copy_36[] = {
	0, 0
};

static Code parser_rootCode[] = {
	28, 1, 0, 184, 1, 0, 35, 0, 
	0, 31, 31, 222, 32, 223, 31, 87, 
	45, 1, 0, 119, 2, 0, 0, 0, 
	0, 0, 0, 0, 0, 180, 32, 224, 
	168, 29, 31, 160, 162, 0, 0, 177, 
	163, 160, 171, 0, 0, 177, 172, 29, 
	31, 91, 1, 0, 226, 91, 0, 0, 
	31, 39, 255, 255, 29, 37, 255, 255, 
	87, 49, 0, 0, 144
};

static LangElInfo parser_lelInfo[] = {
	{ "__UNUSED",  "__UNUSED", 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ "ptr",  "ptr", 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, -1, 0, 0 },
	{ "_void",  "void", 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, -1, 0, 0 },
	{ "_bool",  "bool", 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, -1, 0, 0 },
	{ "_int",  "int", 0, 0, 0, 0, -1, 45, 0, 0, 0, 0, -1, 0, 0 },
	{ "str",  "str", 0, 0, 0, 0, -1, 46, 0, 0, 0, 0, -1, 0, 0 },
	{ "stream",  "stream", 0, 0, 0, 0, -1, 47, 0, 0, 0, 0, -1, 0, 0 },
	{ "il",  "il", 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, -1, 0, 0 },
	{ "'def'",  "_literal_0005", 0, 0, 1, 0, -1, 5, 0, 0, 0, 0, -1, 0, 0 },
	{ "'lex'",  "_literal_0007", 0, 0, 1, 0, -1, 6, 0, 0, 0, 0, -1, 0, 0 },
	{ "'end'",  "_literal_0009", 0, 0, 1, 0, -1, 7, 0, 0, 0, 0, -1, 0, 0 },
	{ "'token'",  "_literal_000b", 0, 0, 1, 0, -1, 8, 0, 0, 0, 0, -1, 0, 0 },
	{ "'ignore'",  "_literal_000d", 0, 0, 1, 0, -1, 9, 0, 0, 0, 0, -1, 0, 0 },
	{ "'['",  "_literal_001b", 0, 0, 1, 0, -1, 16, 0, 0, 0, 0, -1, 0, 0 },
	{ "']'",  "_literal_001d", 0, 0, 1, 0, -1, 17, 0, 0, 0, 0, -1, 0, 0 },
	{ "'|'",  "_literal_001f", 0, 0, 1, 0, -1, 18, 0, 0, 0, 0, -1, 0, 0 },
	{ "'/'",  "_literal_0021", 0, 0, 1, 0, -1, 19, 0, 0, 0, 0, -1, 0, 0 },
	{ "':'",  "_literal_0023", 0, 0, 1, 0, -1, 20, 0, 0, 0, 0, -1, 0, 0 },
	{ "'.'",  "_literal_0025", 0, 0, 1, 0, -1, 21, 0, 0, 0, 0, -1, 0, 0 },
	{ "'('",  "_literal_0027", 0, 0, 1, 0, -1, 22, 0, 0, 0, 0, -1, 0, 0 },
	{ "')'",  "_literal_0029", 0, 0, 1, 0, -1, 23, 0, 0, 0, 0, -1, 0, 0 },
	{ "'..'",  "_literal_002b", 0, 0, 1, 0, -1, 24, 0, 0, 0, 0, -1, 0, 0 },
	{ "'^'",  "_literal_002d", 0, 0, 1, 0, -1, 25, 0, 0, 0, 0, -1, 0, 0 },
	{ "_ignore_0001",  "_ignore_0001", 0, 0, 0, 1, -1, 3, 0, 0, 0, 0, -1, 0, 0 },
	{ "_ignore_0003",  "_ignore_0003", 0, 0, 0, 1, -1, 4, 0, 0, 0, 0, -1, 0, 0 },
	{ "NI",  "NI", 0, 0, 0, 0, -1, 10, 0, 0, 0, 0, -1, 0, 0 },
	{ "COMMIT",  "COMMIT", 0, 0, 0, 0, -1, 11, 0, 0, 0, 0, -1, 0, 0 },
	{ "id",  "id", 0, 0, 0, 0, -1, 12, 0, 0, 0, 0, -1, 0, 0 },
	{ "literal",  "literal", 0, 0, 0, 0, -1, 13, 0, 0, 0, 0, -1, 0, 0 },
	{ "STAR",  "STAR", 0, 0, 0, 0, -1, 14, 0, 0, 0, 0, -1, 0, 0 },
	{ "PLUS",  "PLUS", 0, 0, 0, 0, -1, 15, 0, 0, 0, 0, -1, 0, 0 },
	{ "_ign_0x11bb1a0",  "_ign_0x11bb1a0", 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, -1, 0, 0 },
	{ "_T_any",  "_T_any", 0, 0, 0, 0, -1, 0, 0, 0, 133, 0, -1, 0, 0 },
	{ "_T_lex_factor",  "_T_lex_factor", 0, 0, 0, 0, -1, 26, 0, 0, 134, 0, -1, 0, 0 },
	{ "_T_lex_factor_neg",  "_T_lex_factor_neg", 0, 0, 0, 0, -1, 27, 0, 0, 135, 0, -1, 0, 0 },
	{ "_T_lex_factor_rep",  "_T_lex_factor_rep", 0, 0, 0, 0, -1, 28, 0, 0, 136, 0, -1, 0, 0 },
	{ "_T_lex_term",  "_T_lex_term", 0, 0, 0, 0, -1, 29, 0, 0, 137, 0, -1, 0, 0 },
	{ "_T_lex_expr",  "_T_lex_expr", 0, 0, 0, 0, -1, 30, 0, 0, 138, 0, -1, 0, 0 },
	{ "_T_opt_ni",  "_T_opt_ni", 0, 0, 0, 0, -1, 31, 0, 0, 139, 0, -1, 0, 0 },
	{ "_T_opt_prod_repeat",  "_T_opt_prod_repeat", 0, 0, 0, 0, -1, 32, 0, 0, 140, 0, -1, 0, 0 },
	{ "_T_opt_prod_el_name",  "_T_opt_prod_el_name", 0, 0, 0, 0, -1, 33, 0, 0, 141, 0, -1, 0, 0 },
	{ "_T_prod_el",  "_T_prod_el", 0, 0, 0, 0, -1, 34, 0, 0, 142, 0, -1, 0, 0 },
	{ "_T_prod_el_list",  "_T_prod_el_list", 0, 0, 0, 0, -1, 35, 0, 0, 143, 0, -1, 0, 0 },
	{ "_T_opt_commit",  "_T_opt_commit", 0, 0, 0, 0, -1, 36, 0, 0, 144, 0, -1, 0, 0 },
	{ "_T_opt_prod_name",  "_T_opt_prod_name", 0, 0, 0, 0, -1, 37, 0, 0, 145, 0, -1, 0, 0 },
	{ "_T_prod",  "_T_prod", 0, 0, 0, 0, -1, 38, 0, 0, 146, 0, -1, 0, 0 },
	{ "_T_prod_list",  "_T_prod_list", 0, 0, 0, 0, -1, 39, 0, 0, 147, 0, -1, 0, 0 },
	{ "_T_ignore_def",  "_T_ignore_def", 0, 0, 0, 0, -1, 40, 0, 0, 148, 0, -1, 0, 0 },
	{ "_T_token_def",  "_T_token_def", 0, 0, 0, 0, -1, 41, 0, 0, 149, 0, -1, 0, 0 },
	{ "_T_token_list",  "_T_token_list", 0, 0, 0, 0, -1, 42, 0, 0, 150, 0, -1, 0, 0 },
	{ "_T_item",  "_T_item", 0, 0, 0, 0, -1, 43, 0, 0, 151, 0, -1, 0, 0 },
	{ "_T_start",  "_T_start", 0, 0, 0, 0, -1, 44, 0, 0, 152, 0, -1, 0, 0 },
	{ "_T___accum0",  "_T___accum0", 0, 0, 0, 0, -1, 48, 0, 0, 153, 0, -1, 0, 0 },
	{ "_T__repeat_item",  "_T__repeat_item", 0, 0, 0, 0, -1, 0, 0, 0, 154, 0, -1, 0, 0 },
	{ "_T___list0",  "_T___list0", 0, 0, 0, 0, -1, 49, 0, 0, 155, 0, -1, 0, 0 },
	{ "_eof_ptr",  "_eof_ptr", 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, -1, 0, 0 },
	{ "_eof_void",  "_eof_void", 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, -1, 0, 0 },
	{ "_eof_bool",  "_eof_bool", 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, -1, 0, 0 },
	{ "_eof_int",  "_eof_int", 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, -1, 0, 0 },
	{ "_eof_str",  "_eof_str", 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, -1, 0, 0 },
	{ "_eof_stream",  "_eof_stream", 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, -1, 0, 0 },
	{ "_eof_il",  "_eof_il", 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, -1, 0, 0 },
	{ "_eof_any",  "_eof_any", 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, -1, 0, 0 },
	{ "_eof__literal_0005",  "_eof__literal_0005", 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, -1, 0, 0 },
	{ "_eof__literal_0007",  "_eof__literal_0007", 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, -1, 0, 0 },
	{ "_eof__literal_0009",  "_eof__literal_0009", 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, -1, 0, 0 },
	{ "_eof__literal_000b",  "_eof__literal_000b", 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, -1, 0, 0 },
	{ "_eof__literal_000d",  "_eof__literal_000d", 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, -1, 0, 0 },
	{ "_eof__literal_001b",  "_eof__literal_001b", 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, -1, 0, 0 },
	{ "_eof__literal_001d",  "_eof__literal_001d", 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, -1, 0, 0 },
	{ "_eof__literal_001f",  "_eof__literal_001f", 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, -1, 0, 0 },
	{ "_eof__literal_0021",  "_eof__literal_0021", 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, -1, 0, 0 },
	{ "_eof__literal_0023",  "_eof__literal_0023", 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, -1, 0, 0 },
	{ "_eof__literal_0025",  "_eof__literal_0025", 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, -1, 0, 0 },
	{ "_eof__literal_0027",  "_eof__literal_0027", 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, -1, 0, 0 },
	{ "_eof__literal_0029",  "_eof__literal_0029", 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, -1, 0, 0 },
	{ "_eof__literal_002b",  "_eof__literal_002b", 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, -1, 0, 0 },
	{ "_eof__literal_002d",  "_eof__literal_002d", 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, -1, 0, 0 },
	{ "_eof__ignore_0001",  "_eof__ignore_0001", 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, -1, 0, 0 },
	{ "_eof__ignore_0003",  "_eof__ignore_0003", 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, -1, 0, 0 },
	{ "_eof_NI",  "_eof_NI", 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, -1, 0, 0 },
	{ "_eof_COMMIT",  "_eof_COMMIT", 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, -1, 0, 0 },
	{ "_eof_id",  "_eof_id", 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, -1, 0, 0 },
	{ "_eof_literal",  "_eof_literal", 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, -1, 0, 0 },
	{ "_eof_STAR",  "_eof_STAR", 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, -1, 0, 0 },
	{ "_eof_PLUS",  "_eof_PLUS", 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, -1, 0, 0 },
	{ "_eof_lex_factor",  "_eof_lex_factor", 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, -1, 0, 0 },
	{ "_eof_lex_factor_neg",  "_eof_lex_factor_neg", 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, -1, 0, 0 },
	{ "_eof_lex_factor_rep",  "_eof_lex_factor_rep", 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, -1, 0, 0 },
	{ "_eof_lex_term",  "_eof_lex_term", 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, -1, 0, 0 },
	{ "_eof_lex_expr",  "_eof_lex_expr", 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, -1, 0, 0 },
	{ "_eof_opt_ni",  "_eof_opt_ni", 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, -1, 0, 0 },
	{ "_eof_opt_prod_repeat",  "_eof_opt_prod_repeat", 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, -1, 0, 0 },
	{ "_eof_opt_prod_el_name",  "_eof_opt_prod_el_name", 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, -1, 0, 0 },
	{ "_eof_prod_el",  "_eof_prod_el", 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, -1, 0, 0 },
	{ "_eof_prod_el_list",  "_eof_prod_el_list", 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, -1, 0, 0 },
	{ "_eof_opt_commit",  "_eof_opt_commit", 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, -1, 0, 0 },
	{ "_eof_opt_prod_name",  "_eof_opt_prod_name", 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, -1, 0, 0 },
	{ "_eof_prod",  "_eof_prod", 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, -1, 0, 0 },
	{ "_eof_prod_list",  "_eof_prod_list", 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, -1, 0, 0 },
	{ "_eof_ignore_def",  "_eof_ignore_def", 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, -1, 0, 0 },
	{ "_eof_token_def",  "_eof_token_def", 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, -1, 0, 0 },
	{ "_eof_token_list",  "_eof_token_list", 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, -1, 0, 0 },
	{ "_eof_item",  "_eof_item", 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, -1, 0, 0 },
	{ "_eof_start",  "_eof_start", 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, -1, 0, 0 },
	{ "_eof__ign_0x11bb1a0",  "_eof__ign_0x11bb1a0", 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, -1, 0, 0 },
	{ "_eof___accum0",  "_eof___accum0", 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, -1, 0, 0 },
	{ "_eof__repeat_item",  "_eof__repeat_item", 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, -1, 0, 0 },
	{ "_eof___list0",  "_eof___list0", 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, -1, 0, 0 },
	{ "_eof__T_any",  "_eof__T_any", 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, -1, 0, 0 },
	{ "_eof__T_lex_factor",  "_eof__T_lex_factor", 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, -1, 0, 0 },
	{ "_eof__T_lex_factor_neg",  "_eof__T_lex_factor_neg", 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, -1, 0, 0 },
	{ "_eof__T_lex_factor_rep",  "_eof__T_lex_factor_rep", 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, -1, 0, 0 },
	{ "_eof__T_lex_term",  "_eof__T_lex_term", 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, -1, 0, 0 },
	{ "_eof__T_lex_expr",  "_eof__T_lex_expr", 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, -1, 0, 0 },
	{ "_eof__T_opt_ni",  "_eof__T_opt_ni", 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, -1, 0, 0 },
	{ "_eof__T_opt_prod_repeat",  "_eof__T_opt_prod_repeat", 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, -1, 0, 0 },
	{ "_eof__T_opt_prod_el_name",  "_eof__T_opt_prod_el_name", 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, -1, 0, 0 },
	{ "_eof__T_prod_el",  "_eof__T_prod_el", 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, -1, 0, 0 },
	{ "_eof__T_prod_el_list",  "_eof__T_prod_el_list", 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, -1, 0, 0 },
	{ "_eof__T_opt_commit",  "_eof__T_opt_commit", 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, -1, 0, 0 },
	{ "_eof__T_opt_prod_name",  "_eof__T_opt_prod_name", 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, -1, 0, 0 },
	{ "_eof__T_prod",  "_eof__T_prod", 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, -1, 0, 0 },
	{ "_eof__T_prod_list",  "_eof__T_prod_list", 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, -1, 0, 0 },
	{ "_eof__T_ignore_def",  "_eof__T_ignore_def", 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, -1, 0, 0 },
	{ "_eof__T_token_def",  "_eof__T_token_def", 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, -1, 0, 0 },
	{ "_eof__T_token_list",  "_eof__T_token_list", 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, -1, 0, 0 },
	{ "_eof__T_item",  "_eof__T_item", 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, -1, 0, 0 },
	{ "_eof__T_start",  "_eof__T_start", 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, -1, 0, 0 },
	{ "_eof__T___accum0",  "_eof__T___accum0", 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, -1, 0, 0 },
	{ "_eof__T__repeat_item",  "_eof__T__repeat_item", 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, -1, 0, 0 },
	{ "_eof__T___list0",  "_eof__T___list0", 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, -1, 0, 0 },
	{ "_notoken",  "_notoken", 0, 0, 0, 1, -1, 0, 0, 0, 0, 0, -1, 0, 0 },
	{ "any",  "any", 0, 0, 0, 0, -1, 0, 0, 0, 32, 0, -1, 0, 0 },
	{ "lex_factor",  "lex_factor", 0, 0, 0, 0, -1, 26, 0, 0, 33, 0, -1, 0, 0 },
	{ "lex_factor_neg",  "lex_factor_neg", 0, 0, 0, 0, -1, 27, 0, 0, 34, 0, -1, 0, 0 },
	{ "lex_factor_rep",  "lex_factor_rep", 0, 0, 0, 0, -1, 28, 0, 0, 35, 0, -1, 0, 0 },
	{ "lex_term",  "lex_term", 0, 0, 0, 0, -1, 29, 0, 0, 36, 0, -1, 0, 0 },
	{ "lex_expr",  "lex_expr", 0, 0, 0, 0, -1, 30, 0, 0, 37, 0, -1, 0, 0 },
	{ "opt_ni",  "opt_ni", 0, 0, 0, 0, -1, 31, 0, 0, 38, 0, -1, 0, 0 },
	{ "opt_prod_repeat",  "opt_prod_repeat", 0, 0, 0, 0, -1, 32, 0, 0, 39, 0, -1, 0, 0 },
	{ "opt_prod_el_name",  "opt_prod_el_name", 0, 0, 0, 0, -1, 33, 0, 0, 40, 0, -1, 0, 0 },
	{ "prod_el",  "prod_el", 0, 0, 0, 0, -1, 34, 0, 0, 41, 0, -1, 0, 0 },
	{ "prod_el_list",  "prod_el_list", 0, 0, 0, 0, -1, 35, 0, 0, 42, 0, -1, 0, 0 },
	{ "opt_commit",  "opt_commit", 0, 0, 0, 0, -1, 36, 0, 0, 43, 0, -1, 0, 0 },
	{ "opt_prod_name",  "opt_prod_name", 0, 0, 0, 0, -1, 37, 0, 0, 44, 0, -1, 0, 0 },
	{ "prod",  "prod", 0, 0, 0, 0, -1, 38, 0, 0, 45, 0, -1, 0, 0 },
	{ "prod_list",  "prod_list", 0, 0, 0, 0, -1, 39, 0, 0, 46, 0, -1, 0, 0 },
	{ "ignore_def",  "ignore_def", 0, 0, 0, 0, -1, 40, 0, 0, 47, 0, -1, 0, 0 },
	{ "token_def",  "token_def", 0, 0, 0, 0, -1, 41, 0, 0, 48, 0, -1, 0, 0 },
	{ "token_list",  "token_list", 0, 0, 0, 0, -1, 42, 0, 0, 49, 0, -1, 0, 0 },
	{ "item",  "item", 0, 0, 0, 0, -1, 43, 0, 0, 50, 0, -1, 0, 0 },
	{ "start",  "start", 0, 0, 0, 0, -1, 44, 0, 0, 51, 0, -1, 0, 0 },
	{ "__accum0",  "__accum0", 0, 0, 0, 0, -1, 48, 0, 0, 52, 1, -1, 0, 0 },
	{ "_repeat_item",  "_repeat_item", 1, 0, 0, 0, -1, 0, 0, 0, 53, 0, -1, 0, 0 },
	{ "__list0",  "__list0", 0, 0, 0, 0, -1, 49, 0, 0, 54, 2, -1, 0, 0 },
	{ "_root",  "_root", 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, -1, 0, 0 }
};

static FrameInfo parser_frameInfo[] = {
	{ 0, 0, 0, 0, locals_0, 1, 0, 1 }
};

static ProdInfo parser_prodInfo[] = {
	{ 134, 0, 1, "lex_factor-1", -1, 1, copy_0, 1,  },
	{ 134, 3, 1, "lex_factor-4", -1, 1, copy_1, 1,  },
	{ 134, 1, 3, "lex_factor-2", -1, 1, copy_2, 1,  },
	{ 134, 2, 3, "lex_factor-3", -1, 1, copy_3, 2,  },
	{ 135, 0, 2, "lex_factor_neg-1", -1, 1, copy_4, 1,  },
	{ 135, 1, 1, "lex_factor_neg-2", -1, 1, copy_5, 1,  },
	{ 136, 0, 2, "lex_factor_rep-1", -1, 1, copy_6, 2,  },
	{ 136, 1, 2, "lex_factor_rep-2", -1, 1, copy_7, 2,  },
	{ 136, 2, 1, "lex_factor_rep-3", -1, 1, copy_8, 1,  },
	{ 137, 0, 3, "lex_term-1", -1, 1, copy_9, 2,  },
	{ 137, 1, 1, "lex_term-2", -1, 1, copy_10, 1,  },
	{ 138, 0, 3, "lex_expr-1", -1, 1, copy_11, 2,  },
	{ 138, 1, 1, "lex_expr-2", -1, 1, copy_12, 1,  },
	{ 139, 0, 1, "opt_ni-1", -1, 1, copy_13, 1,  },
	{ 139, 1, 0, "opt_ni-2", -1, 1, 0, 0,  },
	{ 140, 0, 1, "opt_prod_repeat-1", -1, 1, copy_15, 1,  },
	{ 140, 1, 0, "opt_prod_repeat-2", -1, 1, 0, 0,  },
	{ 141, 0, 2, "opt_prod_el_name-1", -1, 1, copy_17, 1,  },
	{ 141, 1, 0, "opt_prod_el_name-2", -1, 1, 0, 0,  },
	{ 142, 0, 3, "prod_el-1", -1, 1, copy_19, 3,  },
	{ 143, 0, 2, "prod_el_list-1", -1, 1, copy_20, 2,  },
	{ 143, 1, 0, "prod_el_list-2", -1, 1, 0, 0,  },
	{ 144, 0, 1, "opt_commit-1", -1, 1, copy_22, 1,  },
	{ 144, 1, 0, "opt_commit-2", -1, 1, 0, 0,  },
	{ 145, 0, 2, "opt_prod_name-1", -1, 1, copy_24, 1,  },
	{ 145, 1, 0, "opt_prod_name-2", -1, 1, 0, 0,  },
	{ 146, 0, 5, "prod-1", -1, 1, copy_26, 3,  },
	{ 147, 0, 3, "prod_list-1", -1, 1, copy_27, 2,  },
	{ 147, 1, 1, "prod_list-2", -1, 1, copy_28, 1,  },
	{ 148, 0, 4, "ignore_def-1", -1, 1, copy_29, 1,  },
	{ 149, 0, 7, "token_def-1", -1, 1, copy_30, 4,  },
	{ 150, 0, 2, "token_list-1", -1, 1, copy_31, 2,  },
	{ 150, 1, 2, "token_list-2", -1, 1, copy_32, 2,  },
	{ 150, 2, 0, "token_list-3", -1, 1, 0, 0,  },
	{ 151, 0, 3, "item-1", -1, 1, copy_34, 1,  },
	{ 151, 1, 3, "item-2", -1, 1, copy_35, 2,  },
	{ 152, 0, 1, "start-1", -1, 1, copy_36, 1,  },
	{ 153, 0, 0, "__accum0-1", -1, 1, 0, 0,  },
	{ 154, 0, 2, "_repeat_item-1", -1, 1, 0, 0,  },
	{ 154, 1, 0, "_repeat_item-2", -1, 1, 0, 0,  },
	{ 155, 0, 0, "__list0-1", -1, 1, 0, 0,  },
	{ 156, 0, 1, "_root-1", -1, 1, 0, 0,  },
	{ 156, 1, 1, "_root-2", -1, 1, 0, 0,  },
	{ 156, 2, 1, "_root-3", -1, 1, 0, 0,  },
	{ 156, 3, 1, "_root-4", -1, 1, 0, 0,  },
	{ 156, 4, 1, "_root-5", -1, 1, 0, 0,  },
	{ 156, 5, 1, "_root-6", -1, 1, 0, 0,  },
	{ 156, 6, 1, "_root-7", -1, 1, 0, 0,  },
	{ 156, 7, 1, "_root-8", -1, 1, 0, 0,  },
	{ 156, 8, 1, "_root-9", -1, 1, 0, 0,  },
	{ 156, 9, 1, "_root-10", -1, 1, 0, 0,  },
	{ 156, 10, 1, "_root-11", -1, 1, 0, 0,  },
	{ 156, 11, 1, "_root-12", -1, 1, 0, 0,  },
	{ 156, 12, 1, "_root-13", -1, 1, 0, 0,  },
	{ 156, 13, 1, "_root-14", -1, 1, 0, 0,  },
	{ 156, 14, 1, "_root-15", -1, 1, 0, 0,  },
	{ 156, 15, 1, "_root-16", -1, 1, 0, 0,  },
	{ 156, 16, 1, "_root-17", -1, 1, 0, 0,  },
	{ 156, 17, 1, "_root-18", -1, 1, 0, 0,  },
	{ 156, 18, 1, "_root-19", -1, 1, 0, 0,  },
	{ 156, 19, 1, "_root-20", -1, 1, 0, 0,  },
	{ 156, 20, 1, "_root-21", -1, 1, 0, 0,  },
	{ 156, 21, 1, "_root-22", -1, 1, 0, 0,  },
	{ 156, 22, 1, "_root-23", -1, 1, 0, 0,  },
	{ 156, 23, 1, "_root-24", -1, 1, 0, 0,  },
	{ 156, 24, 1, "_root-25", -1, 1, 0, 0,  },
	{ 156, 25, 1, "_root-26", -1, 1, 0, 0,  },
	{ 156, 26, 1, "_root-27", -1, 1, 0, 0,  },
	{ 156, 27, 1, "_root-28", -1, 1, 0, 0,  },
	{ 156, 28, 1, "_root-29", -1, 1, 0, 0,  },
	{ 156, 29, 1, "_root-30", -1, 1, 0, 0,  },
	{ 156, 30, 1, "_root-31", -1, 1, 0, 0,  },
	{ 156, 31, 1, "_root-32", -1, 1, 0, 0,  },
	{ 156, 32, 1, "_root-33", -1, 1, 0, 0,  },
	{ 156, 33, 1, "_root-34", -1, 1, 0, 0,  },
	{ 156, 34, 1, "_root-35", -1, 1, 0, 0,  },
	{ 156, 35, 1, "_root-36", -1, 1, 0, 0,  },
	{ 156, 36, 1, "_root-37", -1, 1, 0, 0,  },
	{ 156, 37, 1, "_root-38", -1, 1, 0, 0,  },
	{ 156, 38, 1, "_root-39", -1, 1, 0, 0,  },
	{ 156, 39, 1, "_root-40", -1, 1, 0, 0,  },
	{ 156, 40, 1, "_root-41", -1, 1, 0, 0,  },
	{ 156, 41, 1, "_root-42", -1, 1, 0, 0,  },
	{ 156, 42, 1, "_root-43", -1, 1, 0, 0,  },
	{ 156, 43, 1, "_root-44", -1, 1, 0, 0,  },
	{ 156, 44, 1, "_root-45", -1, 1, 0, 0,  },
	{ 156, 45, 1, "_root-46", -1, 1, 0, 0,  },
	{ 156, 46, 1, "_root-47", -1, 1, 0, 0,  },
	{ 156, 47, 1, "_root-48", -1, 1, 0, 0,  },
	{ 156, 48, 1, "_root-49", -1, 1, 0, 0,  },
	{ 156, 49, 1, "_root-50", -1, 1, 0, 0,  },
	{ 156, 50, 1, "_root-51", -1, 1, 0, 0,  },
	{ 156, 51, 1, "_root-52", -1, 1, 0, 0,  },
	{ 156, 52, 1, "_root-53", -1, 1, 0, 0,  },
	{ 156, 53, 1, "_root-54", -1, 1, 0, 0,  },
	{ 156, 54, 1, "_root-55", -1, 1, 0, 0,  },
	{ 156, 55, 1, "_root-56", -1, 1, 0, 0,  },
	{ 156, 56, 1, "_root-57", -1, 1, 0, 0,  },
	{ 156, 57, 1, "_root-58", -1, 1, 0, 0,  },
	{ 156, 58, 1, "_root-59", -1, 1, 0, 0,  },
	{ 156, 59, 1, "_root-60", -1, 1, 0, 0,  },
	{ 156, 60, 1, "_root-61", -1, 1, 0, 0,  },
	{ 156, 61, 1, "_root-62", -1, 1, 0, 0,  },
	{ 156, 62, 1, "_root-63", -1, 1, 0, 0,  },
	{ 156, 63, 1, "_root-64", -1, 1, 0, 0,  },
	{ 156, 64, 1, "_root-65", -1, 1, 0, 0,  },
	{ 156, 65, 1, "_root-66", -1, 1, 0, 0,  },
	{ 156, 66, 1, "_root-67", -1, 1, 0, 0,  },
	{ 156, 67, 1, "_root-68", -1, 1, 0, 0,  },
	{ 156, 68, 1, "_root-69", -1, 1, 0, 0,  },
	{ 156, 69, 1, "_root-70", -1, 1, 0, 0,  },
	{ 156, 70, 1, "_root-71", -1, 1, 0, 0,  },
	{ 156, 71, 1, "_root-72", -1, 1, 0, 0,  },
	{ 156, 72, 1, "_root-73", -1, 1, 0, 0,  },
	{ 156, 73, 1, "_root-74", -1, 1, 0, 0,  },
	{ 156, 74, 1, "_root-75", -1, 1, 0, 0,  },
	{ 156, 75, 1, "_root-76", -1, 1, 0, 0,  },
	{ 156, 76, 1, "_root-77", -1, 1, 0, 0,  },
	{ 156, 77, 1, "_root-78", -1, 1, 0, 0,  },
	{ 156, 78, 1, "_root-79", -1, 1, 0, 0,  },
	{ 156, 79, 1, "_root-80", -1, 1, 0, 0,  },
	{ 156, 80, 1, "_root-81", -1, 1, 0, 0,  },
	{ 156, 81, 1, "_root-82", -1, 1, 0, 0,  },
	{ 156, 82, 1, "_root-83", -1, 1, 0, 0,  },
	{ 156, 83, 1, "_root-84", -1, 1, 0, 0,  },
	{ 156, 84, 1, "_root-85", -1, 1, 0, 0,  },
	{ 156, 85, 1, "_root-86", -1, 1, 0, 0,  },
	{ 156, 86, 1, "_root-87", -1, 1, 0, 0,  },
	{ 156, 87, 1, "_root-88", -1, 1, 0, 0,  },
	{ 156, 88, 1, "_root-89", -1, 1, 0, 0,  },
	{ 156, 89, 1, "_root-90", -1, 1, 0, 0,  },
	{ 156, 90, 1, "_root-91", -1, 1, 0, 0,  },
	{ 156, 91, 1, "_root-92", -1, 1, 0, 0,  },
	{ 156, 92, 1, "_root-93", -1, 1, 0, 0,  },
	{ 156, 93, 1, "_root-94", -1, 1, 0, 0,  },
	{ 156, 94, 1, "_root-95", -1, 1, 0, 0,  },
	{ 156, 95, 1, "_root-96", -1, 1, 0, 0,  },
	{ 156, 96, 1, "_root-97", -1, 1, 0, 0,  },
	{ 156, 97, 1, "_root-98", -1, 1, 0, 0,  },
	{ 156, 98, 1, "_root-99", -1, 1, 0, 0,  },
	{ 156, 99, 1, "_root-100", -1, 1, 0, 0,  },
	{ 156, 100, 1, "_root-101", -1, 1, 0, 0,  },
	{ 156, 101, 1, "_root-102", -1, 1, 0, 0,  },
	{ 156, 102, 1, "_root-103", -1, 1, 0, 0,  },
	{ 156, 103, 1, "_root-104", -1, 1, 0, 0,  },
	{ 156, 104, 1, "_root-105", -1, 1, 0, 0,  },
	{ 156, 105, 1, "_root-106", -1, 1, 0, 0,  },
	{ 156, 106, 1, "_root-107", -1, 1, 0, 0,  },
	{ 156, 107, 1, "_root-108", -1, 1, 0, 0,  },
	{ 156, 108, 1, "_root-109", -1, 1, 0, 0,  },
	{ 156, 109, 1, "_root-110", -1, 1, 0, 0,  },
	{ 156, 110, 1, "_root-111", -1, 1, 0, 0,  },
	{ 156, 111, 1, "_root-112", -1, 1, 0, 0,  },
	{ 156, 112, 1, "_root-113", -1, 1, 0, 0,  },
	{ 156, 113, 1, "_root-114", -1, 1, 0, 0,  },
	{ 156, 114, 1, "_root-115", -1, 1, 0, 0,  },
	{ 156, 115, 1, "_root-116", -1, 1, 0, 0,  },
	{ 156, 116, 1, "_root-117", -1, 1, 0, 0,  },
	{ 156, 117, 1, "_root-118", -1, 1, 0, 0,  },
	{ 156, 118, 1, "_root-119", -1, 1, 0, 0,  },
	{ 156, 119, 1, "_root-120", -1, 1, 0, 0,  },
	{ 156, 120, 1, "_root-121", -1, 1, 0, 0,  },
	{ 156, 121, 1, "_root-122", -1, 1, 0, 0,  },
	{ 156, 122, 1, "_root-123", -1, 1, 0, 0,  },
	{ 156, 123, 1, "_root-124", -1, 1, 0, 0,  },
	{ 156, 124, 1, "_root-125", -1, 1, 0, 0,  },
	{ 156, 125, 1, "_root-126", -1, 1, 0, 0,  },
	{ 156, 126, 1, "_root-127", -1, 1, 0, 0,  },
	{ 156, 127, 1, "_root-128", -1, 1, 0, 0,  },
	{ 156, 128, 1, "_root-129", -1, 1, 0, 0,  },
	{ 156, 129, 1, "_root-130", -1, 1, 0, 0,  },
	{ 156, 130, 1, "_root-131", -1, 1, 0, 0,  },
	{ 156, 131, 1, "_root-132", -1, 1, 0, 0,  },
	{ 156, 132, 1, "_root-133", -1, 1, 0, 0,  },
	{ 156, 133, 1, "_root-134", -1, 1, 0, 0,  },
	{ 156, 134, 1, "_root-135", -1, 1, 0, 0,  },
	{ 156, 135, 1, "_root-136", -1, 1, 0, 0,  },
	{ 156, 136, 1, "_root-137", -1, 1, 0, 0,  },
	{ 156, 137, 1, "_root-138", -1, 1, 0, 0,  },
	{ 156, 138, 1, "_root-139", -1, 1, 0, 0,  },
	{ 156, 139, 1, "_root-140", -1, 1, 0, 0,  },
	{ 156, 140, 1, "_root-141", -1, 1, 0, 0,  },
	{ 156, 141, 1, "_root-142", -1, 1, 0, 0,  },
	{ 156, 142, 1, "_root-143", -1, 1, 0, 0,  },
	{ 156, 143, 1, "_root-144", -1, 1, 0, 0,  },
	{ 156, 144, 1, "_root-145", -1, 1, 0, 0,  },
	{ 156, 145, 1, "_root-146", -1, 1, 0, 0,  },
	{ 156, 146, 1, "_root-147", -1, 1, 0, 0,  },
	{ 156, 147, 1, "_root-148", -1, 1, 0, 0,  },
	{ 156, 148, 1, "_root-149", -1, 1, 0, 0,  },
	{ 156, 149, 1, "_root-150", -1, 1, 0, 0,  },
	{ 156, 150, 1, "_root-151", -1, 1, 0, 0,  },
	{ 156, 151, 1, "_root-152", -1, 1, 0, 0,  },
	{ 156, 152, 1, "_root-153", -1, 1, 0, 0,  },
	{ 156, 153, 1, "_root-154", -1, 1, 0, 0,  },
	{ 156, 154, 1, "_root-155", -1, 1, 0, 0,  },
	{ 156, 155, 1, "_root-156", -1, 1, 0, 0,  }
};

static PatConsInfo parser_patReplInfo[] = {
	{ 0, 0 },
};

static PatConsNode parser_patReplNodes[] = {
	{ 153, 0, -1, -1, 0, 0, 0, -1, -1, 0 },
};

static FunctionInfo parser_functionInfo[] = {

};

static RegionInfo parser_regionInfo[] = {
	{ -1, -1, 0 },
	{ -1, -1, 0 },
	{ -1, -1, 0 },
	{ -1, -1, 0 },
	{ -1, -1, 31 }
};

static GenericInfo parser_genericInfo[] = {
	{ 0, 0, 0, 0, 0, 0 },
	{ 19, 2, 0, 0, 153, 0 },
	{ 16, 2, 0, 0, 155, -1 },
};

static const char *parser_litdata[] = {
	"r",
};

static long parser_litlen[] = {
	1, };

static Head *parser_literals[] = {
	0, };

static int startStates[] = {
	0, 1, };

static int eofLelIds[] = {
	104, 106, };

static int parserLelIds[] = {
	152, 153, };

static CaptureAttr captureAttr[] = {
};

RuntimeData colm_object = 
{
	parser_lelInfo,
	157,

	parser_prodInfo,
	197,

	parser_regionInfo,
	5,

	parser_rootCode,
	69,
	0,

	parser_frameInfo,
	1,

	parser_functionInfo,
	0,

	parser_patReplInfo,
	1,

	parser_patReplNodes,
	1,

	parser_genericInfo,
	3,
	2,

	parser_litdata,
	parser_litlen,
	parser_literals,
	1,

	captureAttr,
	0,

	&fsmTables_start,
	&pid_0_pdaTables,
	startStates, eofLelIds, parserLelIds, 2,

	2,

	133,
	4,
	5,
	133,
	0,
	132,
	&fsmExecute,
	&sendNamedLangEl,
	&initBindings,
	&popBinding,
};

