class CfgPatches {
    class anrop_unsung_jsrs_weapons_mac10 {
        name = "anrop_unsung_jsrs_weapons_mac10";
        units[] = {};
        weapons[] = {};
        requiredVersion = 1.0;
        requiredAddons[] = {"uns_weap_c", "jsrs_soundmod_complete_edition"};
        addonRootClass = "uns_weap_c";
        author = "Anrop";
        url = "https://www.anrop.se";
    };
};

class Mode_FullAuto;

class CfgWeapons 
{
    class Uns_Rifle;

    class Uns_SMG: Uns_Rifle
    {
        class FullAuto: Mode_FullAuto
        {
            class StandardSound;
            class SilencedSound;
        };
    };
    
    class uns_mac10: Uns_SMG 
    {
        class FullAuto: FullAuto
        {
            class StandardSound: StandardSound
            {
                soundSetShot[] = {"jsrs_pdw2000_shot_soundset","jsrs_9mm_reverb_soundset"};
            };

            class SilencedSound: SilencedSound
            {
                soundSetShot[] = {"jsrs_pdw2000_shot_silenced_soundset", "jsrs_9mm_sd_reverb_soundset"};
            };
        };
    };
};
