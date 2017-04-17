#include "tb_defines.hpp"
//Mission:
zoneList[] =
{
//ID and PROFILE = not used
//LINK = zones capturable after this one
//DEPEND = auto-capture/enable upon these zones being held
//DEPQTY = quantity of zones required for DEPEND i.e. can have only 2 of the 3 zones in DEPEND required
//SYNC = required zones for progression

//ID TEAM          	SPAWNTYPE       LINK         SYNC   PROFILE   DEPEND     DEPQTY  ZONE_DESC
{ 0, 0           , 0          ,    	{}         	, {}    , 1      , {}        , 0      },

{ 1, TEAM_BLUE, 	SPAWN_XRAY ,    {3}      	, {}    , 1      , {}        , 0    , "[US] Main Base" },

{ 2, TEAM_RED, 		SPAWN_XRAY,     {9}      	, {}   	, 1      , {}        , 0    , "[RU] Main Base" },

{ 3, TEAM_BLUE, 	SPAWN_NEVER,    {1,4}  		, {}    , 1      , {}        , 0    , "Grishino" },

{ 4, TEAM_NEUTRAL, 	SPAWN_NEVER,    {3,5}   	, {}  	, 1      , {}        , 0    , "Devils Castle" },

{ 5, TEAM_NEUTRAL, 	SPAWN_NEVER,    {6,7}   	, {} 	, 1      , {}        , 0    , "West Village" },

{ 6, TEAM_NEUTRAL, 	SPAWN_NEVER,    {4,8}      	, {5,7}	, 1      , {}        , 0    , "Lumber Yard" },

{ 7, TEAM_NEUTRAL, 	SPAWN_NEVER,    {5,6} 		, {}	, 1      , {}        , 0    , "East Village" },

{ 8, TEAM_NEUTRAL, 	SPAWN_NEVER,    {7,9}		, {}    , 1      , {}        , 0    , "Black Mountain" },

{ 9, TEAM_RED, 		SPAWN_NEVER ,   {2,8}      	, {}    , 1      , {}		 , 0    , "Krasnostav" },

{ 10, TEAM_NEUTRAL, SPAWN_INSTANT,  {}			, {}    , 1      , {1,4}     , 2    , "[US] Forward Base 1" },

{ 11, TEAM_NEUTRAL, SPAWN_INSTANT,  {}			, {}    , 1  	 , {1,5,6,7} , 4    , "[US] Forward Base 2" },

{ 12, TEAM_NEUTRAL, SPAWN_INSTANT,  {}			, {}    , 1  	 , {2,8}     , 2    , "[RU] Forward Base 1" },

{ 13, TEAM_NEUTRAL, SPAWN_INSTANT,  {}			, {}    , 1  	 , {2,5,6,7} , 4    , "[RU] Forward Base 2" },

};