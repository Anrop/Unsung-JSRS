class CfgPatches {
    class anrop_unsung_jsrs_weapons_pps43 {
        name = "anrop_unsung_jsrs_weapons_pps43";
        units[] = {};
        weapons[] = {};
        requiredVersion = 1.0;
        requiredAddons[] = {"uns_weap_c", "jsrs_soundmod_complete_edition"};
        addonRootClass = "uns_weap_c";
        author = "Anrop";
        url = "https://www.anrop.se";
    };
};

class Mode_SemiAuto;
class Mode_FullAuto;

class CfgWeapons 
{
    class Uns_Rifle;

    class Uns_SMG: Uns_Rifle
    {
        class Single: Mode_SemiAuto
        {
            class StandardSound;
        };

        class FullAuto: Mode_FullAuto
        {
            class StandardSound;
        };
    };
    
    class uns_PPS43: Uns_SMG 
    {
        class FullAuto: FullAuto
        {
            class StandardSound: StandardSound
            {
                soundSetShot[] = {"jsrs_pdw2000_shot_soundset", "jsrs_ww2_smg_reverb_soundset"};
            };
        };
    };

    class uns_k50m: uns_PPS43
    {
        class Single: Single
        {
            class StandardSound: StandardSound
            {
                soundSetShot[] = {"jsrs_pdw2000_shot_soundset", "jsrs_ww2_smg_reverb_soundset"};
            };
        };
    };
};
