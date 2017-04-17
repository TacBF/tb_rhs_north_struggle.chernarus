class ICE {
	
	class vehicles {
		
		class armaments {
			
			startFullyRearmed = 1;
		};
	};
	
	class zones {
		
		#include "zoneList.hpp"
	};
	
	class firstAid {
		
		bleedoutTimeSteps[] = {300, 0};
		bleedoutTimeReset = 180;
	};
	
	class mission {
		
		gameMode = "A&S";
		missionScale = "Large";
		recommendedTotalPlayers = 50;

		class briefings {
			
			class west {
				
				original = "briefing_blue.hpp";
			  };
			  
			class east {
				
				original = "briefing_red.hpp";
			};
		};
		
		class factions {
			
			class faction {
				
				bluFor = "BLU_F";
				opFor = "OPF_F";
			};
			
			class teamName {
				
				bluFor = "US Army";
				opFor = "Russia";
			};
			
			class teamFlag {
				
				bluFor = "\ice\ice_main\Images\flags\usa.paa";
				opFor = "\ice\ice_main\Images\flags\Russia.paa";
			};
		};
		
		class scoring {
			
			class tickets {
				
				opFor = 75;
				bluFor = 75;
			};
		};
	};
	
	class respawn {
		
		class vehicles {
			
			class respawnDelay {
				
				multiplier = 1; // set to > 0 to override scaled "vehicle category" values. Eg: 0.5 to halve all values. 1.5 to increase all values.
			};
		};
		
		class FO {
			
			minSpacingDist = 300;
			maxFriendlySiteDist = 1000;
			minZoneDist = 100;
			minEnemyFBDist = 250;
			minEnemyBaseDist = 1000;
			minEnemyZoneDist = 100;
		};
		
		class SRP {
			
			maxFriendlySiteDist = 850;
		};
		
		class infantry {
			
			baseDuration = 60;
			class unevenTeamsPenaltyTime {
				
				ratioDuration = 60;
				maxDuration = 240;
			};
		};
	};
	
	class gameModes {
		
		class objectives {
			
			class zones {
			
				class captureRates {
					
					heldZoneMultiplier = 1;
					neutralZoneMultiplier = 3;
					negateNeutral = 1;
				};
			};
		};
		
		class AAS {
			
			class ticketBleedRate{
				
				bluFor = 100;
				opFor = 100;
			};
		};
	};
	
	class gear {
		
		#include "tb_kitDefines.sqh"
		
		class magazineExclusions {
			
			individualClasses[] = {
				
				#include "factions\BLU_F\BLU_F_magazineExclusions.hpp"
				#include "factions\OPF_F\OPF_F_magazineExclusions.hpp"
			};
		
			baseClasses[] = {
			
			};
		};
		
		class NVGogglesForAll {
			
			west = 1;
			east = 1;
		};
		
		class roles {
			
			#define __unlimited -99
			
			kits[] = {
				
				#include "factions\BLU_F\BLU_F_roleRatio.hpp"
				#include "factions\OPF_F\OPF_F_roleRatio.hpp"
			};
		};

		class armaments {
			
			class BLU_F {
				
				defaultGear = "factions\BLU_F\default_Gear\BLU_F.sqh";
				#include "factions\BLU_F\_common_smallItems.sqh"
				#include "factions\BLU_F\BLU_F.sqh"
				#include "factions\BLU_F\BLU_F_uniforms.sqh"
			};
			
			class OPF_F {
				
				defaultGear = "factions\OPF_F\default_Gear\OPF_F.sqh";
				#include "factions\OPF_F\_common_smallItems.sqh"
				#include "factions\OPF_F\OPF_F.sqh"
				#include "factions\OPF_F\OPF_F_uniforms.sqh"
			};
			
			/*
			class OPF_G_F {
				
				defaultGear = "factions\OPF_G_F\default_Gear\OPF_G_F.sqh";
				#include "factions\OPF_G_F\_common_smallItems.sqh"
				#include "factions\OPF_G_F\OPF_G_F.sqh"
				#include "factions\OPF_G_F\OPF_G_F_uniforms.sqh"
			};
			*/
		};
	};
};
