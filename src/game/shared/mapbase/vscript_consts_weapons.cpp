//========= Mapbase - https://github.com/mapbase-source/source-sdk-2013 ============//
//
// Purpose: VScript constants and enums shared between the server and client.
//
// $NoKeywords: $
//=============================================================================//

#include "cbase.h"

// @PVK2 - Felis: Unavailable on client
#if defined( PVK2_DLL ) && !defined( CLIENT_DLL )

#include "basecombatweapon_shared.h"

// @PVK2 - Felis: Unavailable
#ifndef PVK2_DLL
// @NMRiH - Felis
#include "sdk_shareddefs.h"
#endif

// memdbgon must be the last include file in a .cpp file!!!
#include "tier0/memdbgon.h"


//=============================================================================
//=============================================================================

// @PVK2 - Felis: Unavailable
#ifndef PVK2_DLL
BEGIN_SCRIPTENUM( WeaponSound, "Weapon sounds." )

	DEFINE_ENUMCONST( EMPTY, "" )
	DEFINE_ENUMCONST( SINGLE, "" )
	DEFINE_ENUMCONST( SINGLE_NPC, "" )
	DEFINE_ENUMCONST( WPN_DOUBLE, "" )
	DEFINE_ENUMCONST( DOUBLE_NPC, "" )
	DEFINE_ENUMCONST( BURST, "" )
	DEFINE_ENUMCONST( RELOAD, "" )
	DEFINE_ENUMCONST( RELOAD_NPC, "" )
	DEFINE_ENUMCONST( MELEE_MISS, "" )
	DEFINE_ENUMCONST( MELEE_HIT, "" )
	DEFINE_ENUMCONST( MELEE_HIT_WORLD, "" )
	DEFINE_ENUMCONST( SPECIAL1, "" )
	DEFINE_ENUMCONST( SPECIAL2, "" )
	DEFINE_ENUMCONST( SPECIAL3, "" )
	DEFINE_ENUMCONST( TAUNT, "" )
	DEFINE_ENUMCONST( DEPLOY, "" )

	DEFINE_ENUMCONST( NUM_SHOOT_SOUND_TYPES, "" )

END_SCRIPTENUM();

//=============================================================================
//=============================================================================

// @NMRiH - Felis: Add our weapon consts here!
BEGIN_SCRIPTENUM( WeaponID, "Weapon IDs for all NMRiH weapons." )

	DEFINE_ENUMCONST( WEAPON_NONE, "" )

	DEFINE_ENUMCONST( FA_GLOCK17, "" )
	DEFINE_ENUMCONST( FA_M92FS, "" )
	DEFINE_ENUMCONST( FA_MKIII, "" )
	DEFINE_ENUMCONST( FA_1911, "" )

	DEFINE_ENUMCONST( FA_SW686, "" )

	DEFINE_ENUMCONST( FA_870, "" )
	DEFINE_ENUMCONST( FA_SUPERX3, "" )
	DEFINE_ENUMCONST( FA_SV10, "" )
	DEFINE_ENUMCONST( FA_500A, "" )
	DEFINE_ENUMCONST( FA_WINCHESTER1892, "" )

	DEFINE_ENUMCONST( FA_1022, "" )
	DEFINE_ENUMCONST( FA_1022_25MAG, "" )
	DEFINE_ENUMCONST( FA_SKS, "" )
	DEFINE_ENUMCONST( FA_SAKO85, "" )
	DEFINE_ENUMCONST( FA_CZ858, "" )
	DEFINE_ENUMCONST( FA_JAE700, "" )
	DEFINE_ENUMCONST( FA_FNFAL, "" )

	DEFINE_ENUMCONST( FA_MAC10, "" )

	DEFINE_ENUMCONST( FA_MP5A3, "" )
	DEFINE_ENUMCONST( FA_M16A4, "" )
	DEFINE_ENUMCONST( FA_M16A4_CARRYHANDLE, "" )

	DEFINE_ENUMCONST( BOW_DEERHUNTER, "" )

	DEFINE_ENUMCONST( TOOL_BARRICADE, "" )
	DEFINE_ENUMCONST( TOOL_EXTINGUISHER, "" )
	DEFINE_ENUMCONST( TOOL_FLARE_GUN, "" )
	DEFINE_ENUMCONST( TOOL_WELDER, "" )

	DEFINE_ENUMCONST( ME_AXE_FIRE, "" )
	DEFINE_ENUMCONST( ME_BAT_METAL, "" )
	DEFINE_ENUMCONST( ME_CROWBAR, "" )
	DEFINE_ENUMCONST( ME_CHAINSAW, "" )
	DEFINE_ENUMCONST( ME_ABRASIVESAW, "" )
	DEFINE_ENUMCONST( ME_ETOOL, "" )
	DEFINE_ENUMCONST( ME_FISTS, "" )
	DEFINE_ENUMCONST( ME_FUBAR, "" )
	DEFINE_ENUMCONST( ME_HATCHET, "" )
	DEFINE_ENUMCONST( ME_KITKNIFE, "" )
	DEFINE_ENUMCONST( ME_MACHETE, "" )
	DEFINE_ENUMCONST( ME_PIPE_LEAD, "" )
	DEFINE_ENUMCONST( ME_SHOVEL, "" )
	DEFINE_ENUMCONST( ME_SLEDGE, "" )
	DEFINE_ENUMCONST( ME_WRENCH, "" )

	DEFINE_ENUMCONST( ITEM_MAGLITE, "" )
	DEFINE_ENUMCONST( ITEM_WALKIETALKIE, "" )
	DEFINE_ENUMCONST( ITEM_PILLS, "" )
	DEFINE_ENUMCONST( ITEM_FIRST_AID, "" )
	DEFINE_ENUMCONST( ITEM_GENE_THERAPY, "" )
	DEFINE_ENUMCONST( ITEM_BANDAGES, "" )
	DEFINE_ENUMCONST( ITEM_ZIPPO, "" )

	DEFINE_ENUMCONST( EXP_GRENADE, "" )
	DEFINE_ENUMCONST( EXP_MOLOTOV, "" )
	DEFINE_ENUMCONST( EXP_TNT, "" )

	DEFINE_ENUMCONST( AMMOBOX_9MM, "" )
	DEFINE_ENUMCONST( AMMOBOX_45ACP, "" )
	DEFINE_ENUMCONST( AMMOBOX_357, "" )
	DEFINE_ENUMCONST( AMMOBOX_12GAUGE, "" )
	DEFINE_ENUMCONST( AMMOBOX_22LR, "" )
	DEFINE_ENUMCONST( AMMOBOX_308, "" )
	DEFINE_ENUMCONST( AMMOBOX_556, "" )
	DEFINE_ENUMCONST( AMMOBOX_762MM, "" )
	DEFINE_ENUMCONST( AMMOBOX_ARROW, "" )
	DEFINE_ENUMCONST( AMMOBOX_BOARD, "" )
	DEFINE_ENUMCONST( AMMOBOX_FUEL, "" )
	DEFINE_ENUMCONST( AMMOBOX_FLARE, "" )

	DEFINE_ENUMCONST( ME_PICKAXE, "" )
	DEFINE_ENUMCONST( ME_CLEAVER, "" )
	DEFINE_ENUMCONST( FA_SKS_NOBAYO, "" )
	DEFINE_ENUMCONST( FA_SAKO85_IRONSIGHTS, "" )

	DEFINE_ENUMCONST( WEAPON_MAX, "" )

END_SCRIPTENUM();

#endif // PVK2_DLL

//=============================================================================
//=============================================================================

void RegisterWeaponScriptConstants()
{
	//
	// Weapon classify
	//
	/* @NMRiH - Felis: These are missing
	ScriptRegisterConstant( g_pScriptVM, WEPCLASS_INVALID, "Invalid weapon class." );
	ScriptRegisterConstant( g_pScriptVM, WEPCLASS_HANDGUN, "Weapon class for pistols, revolvers, etc." );
	ScriptRegisterConstant( g_pScriptVM, WEPCLASS_RIFLE, "Weapon class for (assault) rifles, SMGs, etc." );
	ScriptRegisterConstant( g_pScriptVM, WEPCLASS_SHOTGUN, "Weapon class for shotguns." );
	ScriptRegisterConstant( g_pScriptVM, WEPCLASS_HEAVY, "Weapon class for RPGs, etc." );

	ScriptRegisterConstant( g_pScriptVM, WEPCLASS_MELEE, "Weapon class for melee weapons." );
	*/

	//
	// Vector cones
	//
	ScriptRegisterConstantFromTemp( g_pScriptVM, VECTOR_CONE_PRECALCULATED, "This is just a zero vector, but it adds some context indicating that the person writing the code is not allowing "
		"FireBullets() to modify the direction of the shot because the shot direction "
		"being passed into the function has already been modified by another piece of "
		"code and should be fired as specified." );

	ScriptRegisterConstantFromTemp( g_pScriptVM, VECTOR_CONE_1DEGREES, "1-degree weapon vector cone." );
	ScriptRegisterConstantFromTemp( g_pScriptVM, VECTOR_CONE_2DEGREES, "2-degree weapon vector cone." );
	ScriptRegisterConstantFromTemp( g_pScriptVM, VECTOR_CONE_3DEGREES, "3-degree weapon vector cone." );
	ScriptRegisterConstantFromTemp( g_pScriptVM, VECTOR_CONE_4DEGREES, "4-degree weapon vector cone." );
	ScriptRegisterConstantFromTemp( g_pScriptVM, VECTOR_CONE_5DEGREES, "5-degree weapon vector cone." );
	ScriptRegisterConstantFromTemp( g_pScriptVM, VECTOR_CONE_6DEGREES, "6-degree weapon vector cone." );
	ScriptRegisterConstantFromTemp( g_pScriptVM, VECTOR_CONE_7DEGREES, "7-degree weapon vector cone." );
	ScriptRegisterConstantFromTemp( g_pScriptVM, VECTOR_CONE_8DEGREES, "8-degree weapon vector cone." );
	ScriptRegisterConstantFromTemp( g_pScriptVM, VECTOR_CONE_9DEGREES, "9-degree weapon vector cone." );
	ScriptRegisterConstantFromTemp( g_pScriptVM, VECTOR_CONE_10DEGREES, "10-degree weapon vector cone." );
	ScriptRegisterConstantFromTemp( g_pScriptVM, VECTOR_CONE_15DEGREES, "15-degree weapon vector cone." );
	ScriptRegisterConstantFromTemp( g_pScriptVM, VECTOR_CONE_20DEGREES, "20-degree weapon vector cone." );

	// 
	// Weapon proficiency
	// 
	/* @NMRiH - Felis
	ScriptRegisterConstant( g_pScriptVM, WEAPON_PROFICIENCY_INVALID, "Invalid weapon proficiency." );
	*/
	ScriptRegisterConstant( g_pScriptVM, WEAPON_PROFICIENCY_POOR, "Poor weapon proficiency. Causes low accuracy." );
	ScriptRegisterConstant( g_pScriptVM, WEAPON_PROFICIENCY_AVERAGE, "Average weapon proficiency. Causes average accuracy." );
	ScriptRegisterConstant( g_pScriptVM, WEAPON_PROFICIENCY_GOOD, "Good weapon proficiency. Causes good accuracy." );
	ScriptRegisterConstant( g_pScriptVM, WEAPON_PROFICIENCY_VERY_GOOD, "Very good weapon proficiency. Causes very good accuracy." );
	ScriptRegisterConstant( g_pScriptVM, WEAPON_PROFICIENCY_PERFECT, "Perfect weapon proficiency. Causes perfect accuracy." );

	// 
	// Autoaim
	// 
	ScriptRegisterConstant( g_pScriptVM, AUTOAIM_2DEGREES, "2-degree autoaim cone." );
	ScriptRegisterConstant( g_pScriptVM, AUTOAIM_5DEGREES, "5-degree autoaim cone." );
	ScriptRegisterConstant( g_pScriptVM, AUTOAIM_8DEGREES, "8-degree autoaim cone." );
	ScriptRegisterConstant( g_pScriptVM, AUTOAIM_10DEGREES, "10-degree autoaim cone." );
	ScriptRegisterConstant( g_pScriptVM, AUTOAIM_20DEGREES, "20-degree autoaim cone." );
	ScriptRegisterConstant( g_pScriptVM, AUTOAIM_SCALE_DEFAULT, "Indicates default auto aim scale." );
	ScriptRegisterConstant( g_pScriptVM, AUTOAIM_SCALE_DIRECT_ONLY, "Indicates auto aim should not be used except for direct hits." );
}

#endif // defined( PVK2_DLL ) && !defined( CLIENT_DLL )
