
enum {
	DESTRUCTENGINE = 2,
	DESTRUCTDEFAULT = 6,
	DESTRUCTWRECK = 7,
	DESTRUCTTREE = 3,
	DESTRUCTTENT = 4,
	STABILIZEDINAXISX = 1,
	STABILIZEDINAXESXYZ = 4,
	STABILIZEDINAXISY = 2,
	STABILIZEDINAXESBOTH = 3,
	DESTRUCTNO = 0,
	STABILIZEDINAXESNONE = 0,
	DESTRUCTMAN = 5,
	DESTRUCTBUILDING = 1,
};

class CfgPatches {
	class ALFR_Usine {
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Weapons_F"};
	};
};

class CfgVehicleClasses {
	class ALFR_Usine {
		displayName = "[ALFR] batiments";
	};
};

class CfgVehicles {
	class Strategic;	// External class reference
	
	class ALFR_Strategic_Base : Strategic {
		scope = 0;
		model = "";
		destrType = "DestructNo";
		armor = 1e+011;
		vehicleClass = "ALFR_Usine";
		displayName = "";
		mapSize = 1;
	};
	
	class ALFR_Usine : ALFR_Strategic_Base {
		scope = 2;
		model = "\ALFR_Usine_01\ALFR_Usine_01.p3d";
		displayName = "Usine";
    };
};
