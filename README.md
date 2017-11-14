# GRAD Factions
Internal information for Gruppe Adler members [here](https://forum.gruppe-adler.de/topic/1557/grad-factions-loadout-sammlung).

## Installation

### Variant 1: npm

Highly recommended: `>= npm-3.x`, which comes with NodeJS 6.x. Don't use older versions!

`npm install grad-factions --save`

For updating, change the desired version number in your mission's `package.json`, and do `npm install`

### Variant 2: manually

Alternatively, you can install `grad-factions` manually. You will then also need `grad-loadout`.

* download both  `grad-factions` and `grad-loadout` as zipfiles from github, and put the directories into a `node_modules` directories, so that you get:

```
myMission.altis/node_modules/grad-factions
myMission.altis/node_modules/grad-loadout
```

## Configuration

### description.ext

You *may* set some of those options. They may or may have no effect, depending on the chosen factions.

```
#define NIGHTVISION  // equip night vision goggles
#define GUNLIGHTS    // equip gun lights
#define LASERS       // equip weapon laser
#define SUPPRESSORS  // equip suppressors

```
Below, add this:
```
class Loadouts {
    baseDelay = 1;      // base delay in seconds before applying loadouts on mission start
    handleRadios = 1;   // radios are handled by grad-loadout
    resetLoadout = 0;   // start with empty loadouts instead of modifying existing loadout

	class Faction {
        #include "node_modules\grad-factions\loadouts.hpp"
    };
};

class CfgFunctions {
    #include "node_modules\grad-loadout\CfgFunctions.hpp"
};
```

### init.sqf

You're nearly done. One last thing you will have to do: define which loadouts should actually be applied:
Somewhere in your init.sqf:

**Syntax**  

```
[faction,loadout] call GRAD_Loadout_fnc_FactionSetLoadout;
```

| Parameter | Description                                                             |
|-----------|-------------------------------------------------------------------------|
| faction   | string - Faction that the following loadout class should be applied to. |
| loadout   | string - Loadout classname. See below for available loadouts.           |

**Example**  
Here we will give the vanilla NATO units Bundeswehr loadouts, specifically *BwFleck* and the vanilla FIA units will get the *ModerateRebels* loadouts.

```
["BLU_F", "BwFleck"] call GRAD_Loadout_fnc_FactionSetLoadout;
["OPF_G_F", "ModerateRebels"] call GRAD_Loadout_fnc_FactionSetLoadout;
```

**HINT**: If you do not know which faction your editor-created units belong to, have a look into the [BI Community Wiki](https://community.bistudio.com/wiki/Arma_3_CfgVehicles_WEST)

**NOTE**: Loadouts are not guaranteed to work with units provided by Mods. If you need a specific mod supported, open an issue with [grad-loadout](https://github.com/gruppe-adler/grad-loadout).

## Available Loadouts
All of the included loadouts need [gruppe_adler_mod](https://github.com/gruppe-adler/gruppe_adler_mod) for its medical items. Most loadouts will also need other mods.

### Available Loadout Factions
These factions are available (see also the `factions` directory):

| Name        | Description                  | Author |
|-------------|------------------------------|--------|
| BwFleck     | Bundeswehr Flecktarn         | McDiod |
| BwTrop      | Bundeswehr Tropentarn        | McDiod |
| RuFlora     | Russian MSV Flora            | McDiod |
| RuEMR       | Russian MSV EMR-Summer       | McDiod |
| UsOCP       | US Army OCP                  | McDiod |
| UsUCP       | US Army UCP                  | McDiod |
| UsMPT       | US Marines MARPAT            | McDiod |
| SOGBlack    | CIA Special Operations Group | Synch  |
| UsmcVietnam | Vietnam-Era USMC             | Eras   |
| Vietcong    | Vietnamese Guerilla          | Eras   |


### Rank Dependent Loadout
The medic loadouts are rank dependent. All medics carry surgical kits.

Rank               | Description
-------------------|--------------------------------------------------------------------------------------------
Private            | Combat medic loadout. Enough tourniquets and bandages for first aid and combat trauma care.
Corporal           | Medic loadout. More of everything as well as some saline.
Sergeant and above | Surgeon loadout. Arm-leg-kit for broken limbs and more saline.

### Units

Of the aforementioned factions, only the following unit types have a loadout:

English                       | Deutsch                                  | Function
------------------------------|------------------------------------------|----------------------------------------
Asst. Autorifleman            | Zweiter Automatik Schütze                | Munitionsträger für LMG
Asst. Gunner (HMG/GMG)        | Zweiter Schütze (Mk30/GMG)               | Munitionsträger für MMG
Asst. Missile Specialist (AA) | Zweiter Raketenspezialist (Luftabwehr)   | Munitionsträger für Luftabwehrschütze
Asst. Missile Specialist (AT) | Zweiter Raketenspezialist (Panzerabwehr) | Munitionsträger für Panzerabwehrschütze
Autorifleman                  | Automatik-Schütze                        | LMG Schütze
Combat Life Saver             | Sanitäter                                | Sanitäter
Explosive Specialist          | Sprengmeister                            | Sprengmeister
Grenadier                     | Grenadier                                | Grenadier
Heavy Gunner                  | Schwerer Schütze                         | MMG Schütze
Marksman                      | Scharfschütze (nicht DLC)                | Gruppenscharfschütze (DMR)
Missile Specialist (AA)       | Raketenspezialist (Luftabwehr)           | Luftabwehrschütze
Missile Specialist (AT)       | Raketenspezialist (Panzerabwehr)         | Panzerabwehrschütze
Repair Specialist             | Reparaturspezialist                      | Reparaturspezialist
Rifleman                      | Schütze                                  | Schütze
Rifleman (AT)                 | Schütze (Panzerabwehr)                   | Schütze mit leichter AT-Waffe
Squad Leader                  | Truppführer                              | Truppführer
Team Leader                   | Teamleader                               | Gruppenführer und Zugführer

And currently only for the Russian factions:

English | Deutsch | Function
--------|---------|---------
Sniper  | Sniper  | Sniper
Spotter | Spotter | Spotter


--------------------------------------------------------------------------------

http://www.gruppe-adler.de
